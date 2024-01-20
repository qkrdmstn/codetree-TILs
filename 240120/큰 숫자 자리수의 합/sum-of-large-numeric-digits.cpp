#include <iostream>
using namespace std;

int func(int n)
{
    int n1 = n%10;
    if(n==0)
        return n1;
    return func(n/10) + n1;
}

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    cout << func(n1*n2*n3);
    return 0;
}