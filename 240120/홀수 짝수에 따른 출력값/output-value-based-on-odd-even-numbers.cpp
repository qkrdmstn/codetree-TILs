#include <iostream>
using namespace std;

int func(int n)
{
    if(n<=0)
        return 0;
    return func(n-2) + n;
}

int main() {
    int n;
    cin >> n;

    cout << func(n);
    return 0;
}