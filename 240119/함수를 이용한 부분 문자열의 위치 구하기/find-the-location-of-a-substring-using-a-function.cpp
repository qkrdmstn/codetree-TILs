#include <iostream>
#include <string>
using namespace std;

string str1, str2;

int Compare()
{
    for(int i=0; i<str1.length(); i++)
    {
        bool flag = true;
        for(int j=0; j<str2.length(); j++)
        {
            if(str1[i+j] != str2[j])
            {
                flag = false;
                break;
            }
        }
        if(flag)
            return i;
    }
}

int main() {
    cin >> str1 >> str2;

    cout << Compare();
    return 0;
}