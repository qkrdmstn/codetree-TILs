#include <iostream>
using namespace std;

void function(int n, int m)
{
    int large, sol;
    if(n>m)
        large=n;
    else
        large=m;
    for(int i=1; i<=large; i++)
    {
        if(n%i==0 && m%i==0)
            sol = i;
    }
    cout << sol;
}

int main() {
    int n, m;
    cin >> n >> m;

    function(n,m);
    return 0;
}