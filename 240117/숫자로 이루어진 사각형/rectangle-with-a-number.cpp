#include <iostream>
using namespace std;

void PrintNum(int n)
{
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout <<cnt;
            cnt++;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    PrintNum(n)
    return 0;
}