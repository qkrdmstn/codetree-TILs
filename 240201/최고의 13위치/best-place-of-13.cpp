#include <iostream>
using namespace std;

int n;
int arr[20][20];
int Sum(int i, int j)
{
    return arr[i][j] + arr[i][j+1] + arr[i][j+2];
}

int main() {
    int max = 0;

    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=n-3; j++)
        {
            int sum = Sum(i, j);
            if(sum > max)
                max = sum;
        }
    }

    cout << max;
    return 0;
}