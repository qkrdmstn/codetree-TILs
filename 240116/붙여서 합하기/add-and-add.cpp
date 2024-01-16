#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a;
    cin >> b;
    
    int ab = stoi(a+b);
    int ba = stod(b+a);

    cout << ab + ba;
    return 0;
}