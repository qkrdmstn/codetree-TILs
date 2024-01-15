#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;

    int max, min;
    if(a.length() > b.length())
    {
        if(a.length() > c.length())
            max = a.length();
        else
            max = c.length();

        if(b.length() < c.length())
            min = b.length();
        else   
            min = c.length();
    }
    else
    {
        if(b.length() > c.length())
            max = b.length();
        else
            max = c.length();
        
        if(a.length() < c.length())
            min = a.length();
        else   
            min = c.length();
    }
    cout << max - min;
    return 0;
}