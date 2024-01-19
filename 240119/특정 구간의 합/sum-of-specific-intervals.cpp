#include <iostream>
using namespace std;


int arr[100];
int main() {
    int n, m;
    int a1, a2;

    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    for(int i=0; i<m; i++)
    {
        cin >> a1 >> a2;
        int sum=0;
        for(int j=a1-1; j<a2; j++)
        {
            sum += arr[j];
        }
        cout << sum << endl;
    }
    
    return 0;
}