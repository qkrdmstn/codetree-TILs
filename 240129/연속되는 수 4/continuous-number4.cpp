#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[1000] = {0};
    int max = 0; int cnt = 0;

    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];

        if(i == 0 || arr[i] > arr[i-1])
        {
            cnt++;
            if(max < cnt)
                max = cnt;
        }
        else
            cnt = 1;
    }

    cout << max;
    return 0;
}