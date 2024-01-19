#include <iostream>
using namespace std;

void ArrAbs(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(a[i] < 0)
            a[i] *=-1;
    }
}

int main() {
    int n;
    int arr[50];

    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    ArrAbs(arr, n);

    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}