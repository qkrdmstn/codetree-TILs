#include <iostream>
using namespace std;

int n;
int a[100];

int func(int maxIdx, int cur)
{
    if(cur == n)
        return a[maxIdx];

    if(a[maxIdx] < a[cur])
        maxIdx = cur;

    return func(maxIdx, cur+1);
}

int main() {
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];

    cout << func(0, 0);
    return 0;
}