#include <iostream>
using namespace std;

int ReturnFunc(int n)
{
    int sum=0;
    for(int i=1; i<=n; i++)
        sum += i;
    return sum/10;
}
int main() {
    int n;
    cin >> n;

    cout << ReturnFunc(n);
    return 0;
}