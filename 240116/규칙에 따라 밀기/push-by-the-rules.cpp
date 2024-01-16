#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, c;
    cin >> a;
    cin >> c;

    for (int i = 0; i < c.length(); i++)
    {
        char temp;
        if (c[i] == 'L')
        {
            temp = a[0];
            for (int j = 0; j < a.length() - 1; j++)
                a[j] = a[j + 1];
            a[a.length() - 1] = temp;
        }
        else
        {
            temp = a[a.length() - 1];
            for (int j = a.length() - 1; j >= 0; j--)
                a[j + 1] = a[j];
            a[0] = temp;
        }
    }

    cout << a;
    return 0;
}