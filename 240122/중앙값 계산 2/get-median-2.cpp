#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int a[100];

    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];


    }
    
    for(int i=0; i<n; i++)
    {
        if((i+1)%2 == 1)
        {
            sort(a, a + i + 1);
            cout << a[i/2] << " ";
        }
    }
    return 0;
}