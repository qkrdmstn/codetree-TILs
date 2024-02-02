#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];

    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];

    int cnt = 0;
    for(int k=1; k<=n; k++) //구간의 크기 k
    {   
        int sum = 0;
        int aver = 0;
        for(int i=0; i<n-k; i++)
        {
            for(int j=i; j<i+k; j++)
                sum += arr[j];
            aver = sum/k;
            
            for(int j=i; j<i+k; j++)
            {
                if(aver == arr[j])
                    cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}