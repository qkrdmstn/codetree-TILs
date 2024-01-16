#include <iostream>
#include <string>
using namespace std;

int main() {
    int cnt=0;
    string a, b;

    cin >> a;
    cin >> b;

    for(int j=0; j<a.length()-1; j++)
    {
        cnt++;
        char temp = a[a.length()-1];
        for(int i=a.length()-1; i>=0; i--)
            a[i+1] = a[i];
        a[0]=temp;

        if(a==b)
            break;
        
        if(j == a.length()-2)
            cnt = -1;
    }

    cout << cnt;
    return 0;
}