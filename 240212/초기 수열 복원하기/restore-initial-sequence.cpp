#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[1000] = {0};
int sum[1000] = {0};
bool IsPossible(int a0)
{
    arr[0] = a0;
    bool flag[1001] = {false};
    for(int i=1; i<n; i++){
        arr[i] = sum[i-1] - arr[i-1];
        if(arr[i] > n || arr[i] < 1 || flag[arr[i]])
            return false;
        flag[arr[i]] = true;
    }
    return true;
}

int main() {

    cin >> n;
    for(int i=0; i<n-1; i++)
        cin >> sum[i];

    for(int i=1; i<=n; i++){ //A0 값 i (수열의 시작)
        if(IsPossible(i)){
            for(int i=0; i<n; i++)
                cout << arr[i] << " ";
            return 0;
        }
    }
    return 0;
}