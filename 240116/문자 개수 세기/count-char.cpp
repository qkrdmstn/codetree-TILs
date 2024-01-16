#include <iostream>
#include <string>
using namespace std;

int main() {
    int cnt = 0;
    string str;
    char c;

    getline(cin, str);
    cin >> c;

    for(int i=0; i<str.length(); i++)
    {
        if(c == str[i])
            cnt++;
    }

    cout << cnt;
    return 0;
}