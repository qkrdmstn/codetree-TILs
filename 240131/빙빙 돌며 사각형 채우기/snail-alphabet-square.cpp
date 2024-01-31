#include <iostream>
using namespace std;

int n, m;
bool InRange(int r, int c)
{
    return (r >= 1 && r <= n && c >= 1 && c <= m);
}

int main() {
    char arr[101][101] = {0};
    bool visit[101][101] = {false};

    int dr[4] = {0, 1, 0, -1}; //index 증가 -> 시계방향 회전
    int dc[4] = {1, 0, -1, 0};
    
    //시작 지점 & 방향 setting
    int r = 1, c= 1;
    int dir = 0;

    //시작 지점 초기화
    arr[r][c] = 'A';
    visit[r][c] = true;

    //입력
    cin >> n >> m;

    int cnt = 1;
    for(int i=0; i<n*m-1; i++)
    {
        int nr = r + dr[dir];
        int nc = c + dc[dir];

        if(!InRange(nr, nc) || visit[nr][nc]) //범위 밖 or 이미 방문
            dir++; //방향 전환
        dir %= 4;

        r += dr[dir];
        c += dc[dir];

        arr[r][c] = 'A' + cnt;
        cnt++;
        visit[r][c] = true;

        if(cnt > 26)
            cnt = 0;
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