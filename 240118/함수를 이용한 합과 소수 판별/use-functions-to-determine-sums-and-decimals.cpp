#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if(n==1)
        return false;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

bool isEven(int n)
{
    int sum = 0;
    while(n>0)
    {
        sum += n%10;
        n/=10;
    }
    
    if(sum%2==0)
        return true;
    else
        return false;
}

int main() {
    int a, b;
    cin >> a >> b;

    int cnt = 0;
    for(int i=a; i<=b; i++)
    {
        if(isPrime(i) && isEven(i))
            cnt++;
    }
    cout << cnt;
    return 0;
}