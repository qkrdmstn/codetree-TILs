#include <iostream>
using namespace std;

int main() {
    int n, t;
    int arr[1000] = {0};
    int max = 0; int cnt = 0;

    cin >> n >> t;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];

        if(arr[i] > t)
        {
            cnt++;
            if(max < cnt)
                max = cnt;
        }
        else
            cnt = 0;
    }

    cout << max;
    return 0;
}