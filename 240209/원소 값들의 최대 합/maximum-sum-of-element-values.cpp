#include <iostream>
using namespace std;

int main() {
    //변수 선언
    int n, m;
    int arr[101] = {0};

    //입력
    cin >> n >> m;
    for(int i=1; i<=n; i++)
        cin >> arr[i];

    int index = 0;
    int maxSum = 0;
    for(int i=1; i<=n; i++){ //시작 위치
        index = i;
        int sum = arr[index];
        
        for(int j=0; j<m-1; j++){ //m-1번 반복 (시작 제외)
            index = arr[index];
            sum += arr[index];
        }

        if(sum > maxSum)
            maxSum = sum;
    }

    //출력
    cout << maxSum;
    return 0;
}