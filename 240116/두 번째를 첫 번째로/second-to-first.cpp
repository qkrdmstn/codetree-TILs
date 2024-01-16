#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;

    char c2 = a[1];

    for(int i=0; i<a.length(); i++)
    {
        if(a[i] == c2)
            a[i] = a[0];
    }

    cout << a;

    return 0;
}