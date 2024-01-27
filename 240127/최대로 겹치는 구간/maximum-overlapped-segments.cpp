#include <iostream>
using namespace std;

int main() {
    //변수 선언
    int n;
    int arr[200] = {0};
    int x1, x2;

    //입력
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x1 >> x2;
        x1+=100;
        x2+=100;

        for(int j=x1; j<x2; j++)
            arr[j]++;
    }

    //최대값 찾기
    int max = 0;
    for(int i=0; i<200; i++)
    {
        if(max < arr[i])
            max = arr[i];
    }

    //출력
    cout << max;
    return 0;
}