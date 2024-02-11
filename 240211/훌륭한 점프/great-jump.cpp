#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int arr[100] = {0};
bool IsPossible(int max)
{
    //max 값보다 작은 값을 가진 index를 저장
    //이후, index의 차이(dist)가 k보다 작은지 확인
    int indices[100] = {0};
    int cnt = 0;

    for(int i=0; i<n; i++){
        if(arr[i] <= max)
            indices[cnt++] = i;
    }

    for(int i=0; i<cnt; i++){
        int dist = indices[i] - indices[i-1];
        if(dist > k)
            return false;
    }

    return true;
}

int main() {

    //입력
    cin >> n >> k;
    int maxArr = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] > maxArr)
            maxArr = arr[i];
    }

    //최대값을 a로 가정. 양 끝 돌을 지나야 하기 때문에
    //for문의 시작을 다음과 같이 설정
    int minimax = 100;
    for(int a=max(arr[0], arr[n-1]); a<=maxArr; a++){ 
        int max = 100;
        if(IsPossible(a))
            max = a;
        if(max < minimax)
            minimax = max;
    }

    //출력
    cout << minimax;
    return 0;
}