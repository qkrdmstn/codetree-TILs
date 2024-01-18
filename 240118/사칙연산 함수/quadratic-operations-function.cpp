#include <iostream>
using namespace std;

int Add(int a, int b)
{
    return a+b;
}

int Sub(int a, int b)
{
    return a-b;
} 

int Multi(int a, int b)
{
    return a*b;
}

int Div(int a, int b)
{
    return a/b;
}

int main() {
    int a, b;
    char op;

    cin >> a >> op >> b;

    if(op == '+')
        cout << a << " + " << b << " = " << Add(a, b);
    else if(op == '-')
        cout << a << " - " << b << " = " << Sub(a, b);
    else if(op == '*')
        cout << a << " * " << b << " = " << Multi(a, b);
    else if(op == '/')
        cout << a << " / " << b << " = " << Div(a, b);
    else
        cout << "False";

    return 0;
}