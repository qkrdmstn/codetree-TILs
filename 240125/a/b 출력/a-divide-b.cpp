#include <iostream>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    cout << fixed;
    cout.precision(5);
    cout << a/b;

    for(int i=0; i<15; i++)
    {
        cout<< "0";
    }
    return 0;
}