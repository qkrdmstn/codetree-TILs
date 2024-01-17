#include <iostream>
using namespace std;

void function(int n, int m)
{
    int small, sol;
    if(n>m)
        small=m;
    else
        small=n;
        
    for(int i=1; i<=small; i++)
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