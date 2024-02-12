#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int bomb[101] = {0};
int CountBomb(int idx)
{
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(bomb[idx] != bomb[i]) continue;
        if(abs(idx-i) <= k)
            cnt++;
    }
    return cnt;
}

int main() {

    cin >> n >> k;
    for(int i=0; i<n; i++)
        cin >> bomb[i];

    int maxCnt = 0;
    int maxIdx = -1;
    for(int i=0; i<n; i++){
        int cnt = CountBomb(i);
        if(cnt > maxCnt){
            maxCnt = cnt;
            maxIdx = i;
        }
    }

    if(maxIdx == -1)
        cout << 0;
    else
        cout << bomb[maxIdx];
    return 0;
}