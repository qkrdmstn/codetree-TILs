#include <iostream>
using namespace std;

int main() {
    //변수 선언
    int n, k;
    int arr[100] = {0};

    //입력
    cin >> n >> k;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    int max = 0;
    for(int i=0; i<=n-k; i++) //시작점 i
    {
        int sum = 0;
        for(int j=i; j<i+k; j++) //i부터 k개만큼 합
            sum += arr[j];

        if(sum > max) //최댓값
            max = sum;
    }

    //출력
    cout << max;
    return 0;
}