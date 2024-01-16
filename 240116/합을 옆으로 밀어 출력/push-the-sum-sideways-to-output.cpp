#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, a, sum = 0;

    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        sum+=a;
    }

    string str = to_string(sum);

    char temp = str[0];
    for(int i=0; i<str.length() - 1; i++)
        str[i] = str[i+1];
    str[str.length() - 1] = temp;

    cout << str;
    return 0;
}