#include <iostream>
#include <string>
using namespace std;

int main() {
    int cnt=0;
    string a, b;
    cin >> a >> b;

    for(int i=0; i < a.length() - b.length()+1; i++)
    {
        string c;
        for(int j=0; j<b.length(); j++)
            c += a[i+j];

        if(c == b)
            cnt++;
    }

    cout << cnt;
    return 0;
}