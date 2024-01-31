#include <iostream>
using namespace std;

int n,m;
bool InRange(int r, int c)
{
    return (r >=0 && r < n && c >= 0 && c < m);
}

int main() {
    int arr[100][100] = {0};
    bool visit[100][100] = {false};

    int dr[4] = {-1, 0, 1, 0};
    int dc[4] = {0, 1, 0, -1};
    
    int dir = 1;
    int cnt = 2;
    int r = 0, c = 0;

    arr[0][0] = 1;
    visit[0][0] = true;

    cin >> n >> m;
    for(int i=0; i<n*m - 1; i++)
    {
        int nr = r + dr[dir];
        int nc = c + dc[dir];

        if(!InRange(nr, nc) || visit[nr][nc])
        {
            dir++;
            dir %= 4;
        }
        
        r = r + dr[dir];
        c = c + dc[dir];

        visit[r][c] = true;
        arr[r][c] = cnt;
        cnt++;
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}