#include <iostream>
using namespace std;

void function(int &a, int &b)
{
    if(a>b)
    {
        a *= 2;
        b += 10;
    }
    else
    {
        b *= 2;
        a += 10;
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    function(a, b);

    cout << a << " " << b;
    return 0;
}