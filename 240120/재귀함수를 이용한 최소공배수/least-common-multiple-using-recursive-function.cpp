#include <iostream>
using namespace std;

int n;
int a[10];
int func(int cur)
{
    for(int i=0; i<n; i++)
    {
        if(cur % a[i] != 0)
            return func(cur+1);
    }

    return cur;
}

int main() {
    int max = 0;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(max < a[i])
            max = a[i];
    }

    cout << func(max);
    return 0;
}