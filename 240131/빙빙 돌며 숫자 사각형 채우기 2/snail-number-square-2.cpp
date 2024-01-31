#include <iostream>
using namespace std;

int n, m;
bool InRange(int r, int c)
{
    return (r >= 1 && r <= n && c >= 1 && c <= m);
}

int main() {
    int arr[101][101] = {0};
    bool visit[101][101] = {false};

    int dr[4] = {1, 0, -1, 0}; //index 증가 -> 반시계방향 회전
    int dc[4] = {0, 1, 0, -1};
    int dir = 0;

    //초기 setting
    int r = 1, c = 1;
    int cnt = 2;

    //시작 지점
    arr[r][c] = 1;
    visit[r][c] = true;

    cin >> n >> m;
    for(int i=0; i<n*m - 1; i++)
    {
        int nr = r + dr[dir];
        int nc = c + dc[dir];
        
        if(!InRange(nr, nc) || visit[nr][nc]) //이미 방문했거나, 범위 밖이면 방향 변환
            dir++;
        dir %= 4;

        r += dr[dir];
        c += dc[dir];

        arr[r][c] = cnt++;
        visit[r][c] = true;
    }
    
    //출력
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}