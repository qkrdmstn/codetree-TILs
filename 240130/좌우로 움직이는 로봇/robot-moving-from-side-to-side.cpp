#include <iostream>
using namespace std;

int main() {
    //변수 선언
    int n, m;
    int a[1000000] = {0};
    int b[1000000] = {0};
    int timeA = 1, timeB = 1;

    //로봇A 움직임
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        char dir;
        int t;
        cin >> t >> dir;

        for(int j=timeA; j<=timeA+t; j++)
        {
            if(dir == 'R')
                a[j] = a[j-1] + 1;
            else
                a[j] = a[j-1] - 1;
        }
        timeA += t;
    }

    //로봇B 움직임
    for(int i=0; i<m; i++)
    {
        char dir;
        int t;
        cin >> t >> dir;

        for(int j=timeB; j<=timeB+t; j++)
        {
            if(dir == 'R')
                b[j] = b[j-1] + 1;
            else
                b[j] = b[j-1] - 1;
        }
        timeB += t;
    }

    //움직임 종료 후, 제자리 유지
    int max = 0;
    if(timeA < timeB)
    {
        max = timeB;
        for(int i=timeA; i<=timeB; i++)
            a[i] = a[i-1];
    }
    else if(timeA > timeB)
    {
        max = timeA;
        for(int i=timeㅠ; i<= timeA; i++)
            b[i] = b[i-1];
    }

    //마주치는 횟수 count
    int cnt = 0;
    for(int i=1; i<=max; i++)
    {
        if(a[i] == b[i] && a[i-1] != b[i-1])
            cnt++;
    }

    //출력
    cout << cnt;
    return 0;
}