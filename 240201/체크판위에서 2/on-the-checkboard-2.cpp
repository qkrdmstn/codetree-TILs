#include <iostream>
using namespace std;

int main() {
    int r,c;
    char grid[16][16];

    int curR = 1, curC = 1;
    int cnt = 0;

    cin >> r >> c;
    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
            cin >> grid[i][j];
    }

    for(int i=1; i<r; i++) //첫 번째 점프 지점 (i,j)
    {
        for(int j=1; j<c; j++)
        {
            if(grid[1][1] == grid[i][j]) //출발지와 색이 달라야 함.
                continue;

            curR = i; //점프
            curC = j;
            for(int k=curR + 1; k<r; k++) //두 번째 점프 지점 (k, l)은 도착지점 r, c보다 작은 곳
            {
                for(int l=curC + 1; l<c; l++)
                {
                    if(grid[curR][curC] == grid[k][l]) //첫 번째 지점과 색이 같음
                        continue;
                    if(grid[k][l] == grid[r][c]) //도착지점과 색이 같음
                        continue;

                    cnt++;
                }
            }
        }
    }

    cout << cnt;
    return 0;
}