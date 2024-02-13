#include <iostream>
using namespace std;

int main() {
    //변수 선언
    int n, m;
    int arr[100] = {0};

    //입력
    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin >> arr[i];

    int max = 1;
    while(true){ //최대값을 가정하고 
        int index = 0;
        for(int j=0; j<m; j++){
            int sum=0;
            while(true){ //합이 max를 안 넘는 범위에서 구간 만들기
                if(sum + arr[index] > max)
                    break;
                sum += arr[index++];
            }
        }
        if(index > n-1) //끝까지 m번만에 나눠졌으면 break;
            break;
        max++;
    }

    //출력
    cout << max;
    
    return 0;
}