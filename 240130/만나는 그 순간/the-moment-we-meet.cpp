#include <iostream>
using namespace std;

int main() {
    int n, m;
    int a[2000] = {0};
    int b[2000] = {0};
    int timeA = 1;
    int timeB = 1;

    cin >> n >> m;
    for(int i=0; i<n; i++)
    {  
        char dir;
        int time;
        cin >> dir >> time;

        for(int j=timeA; j<=timeA + time; j++)
        {
            if(dir == 'R')
                a[j] = a[j-1] + 1;
            else if(dir == 'L')
                a[j] = a[j-1] - 1;
        }
        timeA += time;
    }

    for(int i=0; i<m; i++)
    {
        char dir;
        int time;
        cin >> dir >> time;

        for(int j=timeB; j<=timeB + time; j++)
        {
            if(dir == 'R')
                b[j] = b[j-1] + 1;
            else if(dir == 'L')
                b[j] = b[j-1] - 1;
        }
        timeB += time;
    }

    for(int i=1; i<=timeB; i++)
    {
        if(a[i] == b[i])
        {
            cout << i;
            return 0;
        }
    }
    return 0;
}