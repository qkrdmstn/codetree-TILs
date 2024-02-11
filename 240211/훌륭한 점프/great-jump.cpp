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
    for(int i=0; i<n; i++)
        cin >> arr[i];

    int minimax = 0;
    for(int i=0; i<max(arr[0], arr[n]); i++){
        int min = 0;
        if(IsPossible(i))
            min = i;
        if(min > minimax)
            minimax = min;
    }

    cout << minimax;
    return 0;
}