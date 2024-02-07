#include <iostream>
using namespace std;

int Sub(int a, int b)
{
    if(a-b < 0)
        return b-a;
    return a-b;
}

int main() {
    int n;
    int arr[100] = {0};
    
    //입력
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];

    int minSum = 100000;
    for(int i=0; i<n; i++){ //2배 숫자 index
        for(int j=0; j<n; j++){ //제거 숫자 index
            int sum = 0;
            for(int k=0; k<n-1; k++){ //인접 숫자 차이 합 계산
                if(k==j) continue; //j 제외

                int a = arr[k];
                int b = arr[k+1];
                if(k == i) a*=2; //i 2배
                if(k+1 == i) b*=2;

                sum += Sub(a, b); //합
            }
            if(sum < minSum) //최소값
                minSum = sum;
        }
    }

    //출력
    cout << minSum;
    return 0;
}