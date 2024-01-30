#include <iostream>
using namespace std;

int Rank(int a, int b)
{
    if(a > b)
        return 1;
    else if(a < b)
        return 2;
    else
        return 3;
}

int main() {
    int n, m;
    int a[1000001] = {0};
    int b[1000001] = {0};
    int timeA = 1, timeB = 1;

    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        int v, t;
        cin >> v >> t;

        for(int j=timeA; j<timeA+t; j++)
            a[j] = a[j-1] + v;
        timeA += t;
    }

    for(int i=0; i<m; i++)
    {
        int v, t;
        cin >> v >> t;

        for(int j=timeB; j<timeB+t; j++)
            b[j] = b[j-1] + v;
        timeB += t;
    }

    int cnt = 0;
    int first = 0; //A: 1, B: 2, A&B = 3

    for(int i=1; i<timeA; i++)
    {
        if(first == 0)
        {
            first = Rank(a[i], b[i]);
            cnt++;
            continue;
        }

        int before = first;
        first = Rank(a[i], b[i]);
        if(before != first)
            cnt++;
    }

    cout << cnt;
    return 0;
}