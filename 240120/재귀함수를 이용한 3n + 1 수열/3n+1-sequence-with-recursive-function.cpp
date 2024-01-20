#include <iostream>
using namespace std;

int func(int n)
{
    if(n == 1)
        return 0;
    if(n%2 == 0)
        return func(n/2) + 1;
    else
        return func(3*n + 1) + 1;
}

int main() {
    int n;
    cin >> n;

    cout << func(n);
    return 0;
}