#include <iostream>
using namespace std;

int n;
int arr[100];
bool isCondition(int i, int j, int k)
{
    if(arr[i]-k == k-arr[j])
        return true;
    else
        return false;
}

int main() {
    //입력
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];

    //count
    int maxCnt = 0;
    for(int k=1; k<=100; k++){ //k 설정
        int cnt = 0;
        for(int i=0; i<n-1; i++){ //i, j 완전 탐색
            for(int j=i+1; j<n; j++){
                if(isCondition(i, j, k))
                    cnt++;
            
            }
        }
        if(cnt > maxCnt) //최대값
            maxCnt = cnt;
    }

    //출력
    cout << maxCnt;
    return 0;
}