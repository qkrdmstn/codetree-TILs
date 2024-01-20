#include <iostream>
using namespace std;

int func(int n)
{
    int n1 = n%10;
    if(n/10 == 0)
        return n1*n1;
        
    return func(n/10) + n1*n1;
}

int main() {
    int n;
    cin >> n;

    cout << func(n);
    return 0;
}