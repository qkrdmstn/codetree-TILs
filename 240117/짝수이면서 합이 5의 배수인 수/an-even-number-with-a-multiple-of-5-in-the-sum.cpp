#include <iostream>
using namespace std;

bool function(int n)
{
    int n1 = n%10;
    int n10 = n/10;

    if(n % 2 == 0 && (n1+n10)%5 == 0)
        return true;
    else
        return false;
}
int main() {
    int n;
    cin >> n;

    if(function(n))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}