#include <iostream>
using namespace std;

int abs(int a)
{
    if(a<0)
        a*=-1;
    return a;
}

int main() {
    //변수 선언
    int n;
    int num[100] = {0};
    int max = 0;

    //입력
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> num[i];
    
    
    for(int i=0; i<n; i++) //i번째 수와 j번째 수의 합
    {
        int sum = 0;
        for(int j=0; j<n; j++)
        {
            if(i==j) //자기 자신 skip
                continue;
            if(abs(i-j) <= 1) //i와 j의 거리가 1이하면 인접
                continue;
            
            sum = num[i] + num[j];
            if(sum > max) //최대값 계산
                max = sum;
        }
    }

    //최대값 출력
    cout << max;
    return 0;
}