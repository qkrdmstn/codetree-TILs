#include <iostream>
#include <string>
using namespace std;
int main() {
    string a;

    getline(cin, a);
    
    for(int i=2; i<10; i++)
        cout << a[i];
    return 0;
}