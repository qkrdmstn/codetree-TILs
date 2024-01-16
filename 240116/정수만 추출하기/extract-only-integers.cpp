#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a;
    cin >> b;

    int idx1=0, idx2=0;
    for(int i=0; i<a.length(); i++)
    {
        if(a[i] <= '9' && a[i] >= '0')
            idx1++;
        else
            break;
    }   

    for(int i=0; i<b.length(); i++)
    {
        if(b[i] <= '9' && b[i] >= '0')
            idx2++;
        else
            break;
    }  

    int ai = stoi(a.substr(0,idx1));
    int bi = stoi(b.substr(0, idx2));

    cout << ai+bi;
    return 0;
}