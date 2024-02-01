#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[101] = {0};
    int min = 1000000;
    int sum = 0;

    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> arr[i];
    
    for(int i=1; i<=n; i++)
    {
        sum = 0;
        for(int j=1; j<=n; j++)
        {
            int dist = j-i;
            if(dist < 0)
                dist *= -1;
            
            sum += dist * arr[j];
        }
        if(sum < min)
            min = sum;
    }

    cout << min;
    return 0;
}