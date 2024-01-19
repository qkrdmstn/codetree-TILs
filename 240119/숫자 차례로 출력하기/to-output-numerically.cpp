#include <iostream>
using namespace std;

void f1(int n)
{
    if(n==0)
        return;

    cout << n << " ";
    f1(n-1);
}

void f2(int n)
{
    if(n==0)
        return;

    f1(n-1);
    cout << n << " ";
}

int main() {
    int n;
    cin >> n;
    
    f1(n);
    cout << endl;
    f2(n);
    return 0;
}