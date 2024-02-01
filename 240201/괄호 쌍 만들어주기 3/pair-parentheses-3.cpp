#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    bool open[100] = {false};
    bool close[100] = {false};
    int bracketCnt = 0;

    cin >> str;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == '(')
            open[bracketCnt++] = true;
        else if(str[i] == ')')
            close[bracketCnt++] = true;
    }

    int cnt = 0;
    for(int i=0; i<bracketCnt; i++)
    {
        if(!open[i])
            continue;
        for(int j=i; j<bracketCnt; j++)
        {
            if(!close[j])
                continue;
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}