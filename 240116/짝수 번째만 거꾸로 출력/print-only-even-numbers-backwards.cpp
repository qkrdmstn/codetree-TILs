#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int len = str.length();
    if(len%2 == 1)
        len--;

    for(int i=len-1; i>=0; i-=2)
    {

        cout<<str[i];
  
    }

    return 0;
}