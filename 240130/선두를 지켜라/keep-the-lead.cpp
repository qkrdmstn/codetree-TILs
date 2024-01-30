#include <iostream>
using namespace std;

int main() {
    int n, m;
    int a[1000000] = {0};
    int b[1000000] = {0};
    int timeA = 1, timeB = 1;

    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        int v;
        int t;
        cin >> v >> t;

        for(int j=timeA; j<timeA+t; j++)
        {
            a[j] = a[j-1] + v;
        }
        timeA += t;
    }

    for(int i=0; i<m; i++)
    {
        int v;
        int t;
        cin >> v >> t;

        for(int j=timeB; j<timeB+t; j++)
        {
            b[j] = b[j-1] + v;
        }
        timeB += t;
    }

    int cnt = 0;
    int first = -1;
    for(int i=1; i<=timeA; i++)
    {
        if(first == -1)
        {
            if(a[i] > b[i])
                first = 1;
            else if(a[i] < b[i])
                first =2;
        }

        if(a[i] > b[i] && first == 2)
        {
            cnt++;
            first = 1;
        }
        else if(a[i] < b[i] && first == 1)
        {
            cnt++;
            first = 2;
        }
    }

    cout << cnt;
    return 0;
}