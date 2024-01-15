#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;

    int max, min;
    max = a.length();
    if(max < b.length()) max = b.length();
    if(max < c.length()) max = c.length();
   
    min = a.length();
    if(min > b.length()) min = b.length();
    if(min > c.length()) min = c.length();
    
    cout << max - min;
    return 0;
}