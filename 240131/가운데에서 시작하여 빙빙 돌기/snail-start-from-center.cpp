#include <iostream>
using namespace std;

int n;
bool InRange(int r, int c)
{
    return (r >= 1 && r <= n && c >= 1 && c <= n);
}

int main() {
    int arr[101][101] = {0};
    bool visit[101][101] = {false};

    int dr[4] = {0, -1, 0, 1};
    int dc[4] = {-1, 0, 1, 0};
    int dir = 0;

    cin >> n;
    int r = n, c = n;

    arr[r][c] = n*n;
    visit[r][c] = true;

    int cnt = 1;
    for(int i=0; i<n*n-1; i++)
    {
        int nr = r + dr[dir];
        int nc = c + dc[dir];

        if(!InRange(nr, nc) || visit[nr][nc])
            dir++;
        dir %= 4;

        r += dr[dir];
        c += dc[dir];

        arr[r][c] = n*n - cnt;
        cnt++;
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}