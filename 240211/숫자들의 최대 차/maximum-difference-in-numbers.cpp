#include <iostream>
using namespace std;

int n, k;
int a[1000] = {0};
int CountNum(int l, int r) //(l,r) 범위 내의 수 count
{
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(a[i] >= l && a[i] <= r)
            cnt++;
    }
    return cnt;
}

int main() {
    //입력
    cin >> n >> k;
    for(int i=0; i<n; i++)
        cin >> a[i];

    //계산
    int maxCnt = 0;
    for(int i=0; i<n; i++){
        int cnt = CountNum(a[i], a[i] + k);

        if(cnt > maxCnt)
            maxCnt = cnt;
    }

    //출력
    cout << maxCnt;
    return 0;
}