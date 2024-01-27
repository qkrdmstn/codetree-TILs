#include <iostream>
using namespace std;

int main() {
    //변수 선언
    int arr[100] = {0}; 
    int A, B;
    int K;

    //입력
    cin >> K; 
    for(int i=0; i<K; i++)
    {
        cin >> A >> B;
        for(int j=A; j<=B; j++)
            arr[j] = 1;
    }

    //max 찾기
    int max = 0;
    for(int i=0; i<100; i++)
    {
        if(max < arr[i])
            max = arr[i];
    }

    //출력
    cout << max;
    return 0;
}