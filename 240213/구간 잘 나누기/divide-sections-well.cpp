#include <iostream>
using namespace std;

int main() {
    int n, m;
    int arr[100] = {0};

    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin >> arr[i];

    int max = 1;
    while(true){
        int index = 0;
        for(int j=0; j<m; j++){
            int sum=0;
            while(true){
                if(sum + arr[index] > max)
                    break;
                sum += arr[index++];
            }
        }
        if(index > n-1)
            break;
        max++;
    }

    cout << max;
    
    return 0;
}