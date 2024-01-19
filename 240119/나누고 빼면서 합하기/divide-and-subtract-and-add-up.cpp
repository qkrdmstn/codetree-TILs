#include <iostream>
using namespace std;

int n, m;
int arr[100];

int func()
{
    int sum=0;
    while(m!=1)
    {
        sum += arr[m-1];
        if(m%2 == 0)
            m /= 2;
        else
            m -= 1;
    }
    return sum + arr[0];
}

int main() {
    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin >> arr[i];
        
    cout << func();

    return 0;
}