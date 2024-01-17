#include <iostream>
using namespace std;

int FindMin(int a, int b, int c)
{
    int min = a;
    if(b<min)
        min = b;
    if(c<min)
        min = c;

    return min;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout<<FindMin(a, b, c);
    return 0;
}