#include <iostream>
using namespace std;

void f1(int n)
{
    if(n==0)
        return;

    f1(n-1);
    cout << n << " ";
}

void f2(int n)
{
    if(n==0)
        return;

    cout << n << " ";
    f2(n-1);
}

int main() {
    int n;
    cin >> n;

    f1(n);
    cout << endl;
    f2(n);
    return 0;
}