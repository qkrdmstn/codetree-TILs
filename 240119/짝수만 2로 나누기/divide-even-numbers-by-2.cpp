#include <iostream>
using namespace std;

void function(int *arr, int size)
{
    for(int i=0; i< size; i++)
    {
        if(arr[i] % 2 == 0)
            arr[i]/=2;
    }
}

int main() {
    int n;
    int arr[50];

    cin>>n;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    function(arr, n);

    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}