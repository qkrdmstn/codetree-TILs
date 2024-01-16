#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    bool flag = true;

    cin >> a;
    
    for(int i=0; i<a.length(); i++)
    {
        if(a[i] == 'e' && flag)
        {
            flag = false;
            continue;
        }
        cout << a[i];
    }
    return 0;
}