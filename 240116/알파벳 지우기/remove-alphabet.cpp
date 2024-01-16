#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1;
    cin >> str2;

    string s1, s2;
    for(int i=0; i< str1.length(); i++)
    {
        if(str1[i] <= '9' && str1[i] >= '0')
            s1 += str1[i];
    }
    for(int i=0; i< str2.length(); i++)
    {
        if(str2[i] <= '9' && str2[i] >= '0')
            s2 += str2[i];
    }

    int sum = stoi(s1) + stoi(s2);
    cout << sum;
    return 0;
}