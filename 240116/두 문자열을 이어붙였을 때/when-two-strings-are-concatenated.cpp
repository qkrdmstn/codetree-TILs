#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;

    cin >> a >> b;

    string c = a+b;
    string d = b+a;

    if(c == d)
        cout << "true";
    else
        cout << "false";
    return 0;
}