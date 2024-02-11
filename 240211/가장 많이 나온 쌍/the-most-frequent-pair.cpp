#include <iostream>
using namespace std;

int n, m;
int a[100] = {0};
int b[100] = {0};
int CountPair(int ai, int bi)
{
    int cnt = 0;
    for(int i=0; i<m; i++){
        if(a[i] == ai && b[i] == bi)
            cnt++;
        if(a[i] == bi && b[i] == ai)
            cnt++;
    }

    return cnt;
}

int main() {

    cin >> n >> m;
    for(int i=0; i<m; i++)
        cin >> a[i] >> b[i];

    int maxCnt = 0;
    for(int i=0; i<m; i++){
        int cnt = CountPair(a[i], b[i]);

        if(cnt > maxCnt)
            maxCnt = cnt;
    }

    cout << maxCnt;
    return 0;
}