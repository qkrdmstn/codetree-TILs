#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int a[2000];

    cin >> n;
    for(int i=0; i<2*n; i++)
        cin >> a[i];

    sort(a, a + 2*n);

    int max = 0;
    for(int i=0; i<n; i++)
    {
        if(max < a[i] + a[2*n-1-i])
            max = a[i] + a[2*n-1-i];
    }
    
    cout << max;
    return 0;
}