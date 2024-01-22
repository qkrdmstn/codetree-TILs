#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n;
    string str1, str2;

    cin >> n;
    cin >> str1 >> str2;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for(int i=0; i<n; i++)
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