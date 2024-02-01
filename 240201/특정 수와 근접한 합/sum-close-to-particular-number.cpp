#include <iostream>
using namespace std;

int s, n;
int arr[100] = {0};

int Difference(int a)
{
    int result = s-a;
    if(result < 0)
        result *= -1;

    return result;
}

int main() {
    int minDiff = 999999;

    cin >> n >> s;
    
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int sum = 0;
            for(int k=0; k<n; k++)
            {
                if(k == i || k == j)
                    continue;
                sum += arr[k];
            }

            int diff = Difference(sum);
            if(diff < minDiff)
                minDiff = diff;
        }
    }

    cout << minDiff;
    return 0;
}