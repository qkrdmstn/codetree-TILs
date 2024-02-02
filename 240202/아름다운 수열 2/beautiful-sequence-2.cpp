#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int a[100] = {0};
int b[100] = {0};

bool isBeautiful(int index)
{
    int temp[100] = {0};
    for(int i=0; i<m; i++) //index부터 m개의 수를 오름차순 정렬
        temp[i] = a[index + i];
    
    sort(temp, temp + m);

    bool isSame = true;
    for(int i=0; i<m; i++) //정렬한 두 수열이 같으면 beautiful
    {
        if(temp[i] != b[i])
        {
            isSame = false;
            return isSame;
        }
    }

    return isSame;
}

int main() {
    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<m; i++)
        cin >> b[i];

    sort(b, b+m); //b 배열 오름차순 정렬

    int cnt = 0;
    for(int i=0; i<=n-m; i++)
    {
        if(isBeautiful(i))
            cnt++;
    }

    cout << cnt;
    return 0;
}