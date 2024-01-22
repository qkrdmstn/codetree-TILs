#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(str1.length() != str2.length())
    {
        cout << "No";
        return 0;
    }

    for(int i=0; i<str1.length(); i++)
    {
        if(str1[i] != str2[i])
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}