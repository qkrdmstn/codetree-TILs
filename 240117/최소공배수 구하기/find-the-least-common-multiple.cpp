#include <iostream>
using namespace std;

void solve(int n, int m)
{
    int sol = 1;
    while(true)
    {
        if(sol%n == 0 && sol%m == 0)
            break;
        sol++;
    }
    cout << sol;
}
int main() {
    int n, m;
    cin >> n >> m;

    solve(n,m);
    return 0;
}