#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[1000];
    int cnt = 0;
    int max = 0;

    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];

        if(i == 0 || arr[i] == arr[i-1])
        {
            cnt++;
            if(max < cnt)
                max = cnt;
        }
    }

    cout << max;
    return 0;
}