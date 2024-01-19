#include <iostream>
#include <string>
using namespace std;

bool function(string s)
{
    for(int i=0; i<s.length(); i++)
    {
        if(s[0] !=s[i])
            return true;
    }
    return false;
}

int main() {
    string str;
    cin >> str;

    if(function(str))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}