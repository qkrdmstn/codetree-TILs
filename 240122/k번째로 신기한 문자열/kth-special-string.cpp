#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    string str[100];
    string strT;

    cin >> n >> k;
    cin >> strT;

    for(int i=0; i<n; i++)
        cin >> str[i];
    
    sort(str, str+n);

    int idx;
    for(int i=0; i<n; i++)
    {
        bool flag = true;
        for(int j=0; j<strT.length(); j++)
        {
            if(str[i][j] != strT[j])
            {
                flag = false;
                break;
            }
        }

        if(flag)
        {
            idx = i;
            break;
        }
    }

    cout << str[idx + k - 1];
    return 0;
}