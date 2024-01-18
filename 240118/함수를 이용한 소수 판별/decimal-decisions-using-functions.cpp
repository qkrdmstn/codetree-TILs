#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}

int SumPrime(int a, int b)
{
    int sum = 0;
    for(int i=a; i<=b; i++)
    {
        if(isPrime(i))
            sum+=i;
    }
    return sum;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << SumPrime(a, b);
    return 0;
}