#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int arr[100] = {0};
bool IsPossible(int max)
{
    int indices[100] = {0};
    int cnt = 0;

    for(int i=0; i<n; i++){
        if(arr[i] <= max)
            indices[cnt++] = i;
    }

    for(int i=0; i<cnt; i++){
        int dist = indices[i] - indices[i-1];
        if(dist > k)
            return false;
    }

    return true;
}

int main() {

    //입력
    cin >> n >> k;
    int maxArr = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] > maxArr)
            maxArr = arr[i];
    }

    int minimax = 100;
    for(int i=max(arr[0], arr[n]); i<=maxArr; i++){
        int max = 100;
        if(IsPossible(i))
            max = i;
        //cout << i << " " << max <<endl;
        if(max < minimax)
            minimax = max;
    }

    cout << minimax;
    return 0;
}