#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];

    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];

    int cnt = 0;
    for(int k=1; k<=n; k++) //구간의 크기 k
    {   
        for(int i=0; i<=n-k; i++) //시작점 i
        {
            float sum = 0;
            float aver = 0;

            for(int j=i; j<i+k; j++) //i부터 k개 만큼 더하기
                sum += arr[j];
            aver = sum/k; //평균

            for(int j=i; j<i+k; j++) //구간 탐색
            {
                if(arr[j] == aver)
                {
                    cnt++;
                    break;
                }

            }
        }
    }

    //출력
    cout << cnt;
    return 0;
}