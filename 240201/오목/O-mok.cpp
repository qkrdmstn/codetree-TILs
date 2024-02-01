#include <iostream>
using namespace std;

int grid [19][19] = {0};
int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1}; //북쪽부터 시계방향 8방향
int dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};

bool InRange(int x, int y)
{
    return (x>=1 && x<=19 && y>=1 && y<=19);
}

int CheckVictory(int y, int x, int &cenY, int &cenX)
{
    int color = grid[y][x];
    if(!color)
        return 0;
    
    for(int dir=0; dir<8; dir++) //8방향 탐색
    {
        bool victory = true;
        int curX = x;
        int curY = y;

        for(int j=0; j<4; j++) //dx, dy 방향으로 4번 이동
        {
            int nx = x + dx[dir]; //범위 확인
            int ny = y + dy[dir];
            if(!InRange(nx, ny))
                break;
  
            curX += dx[dir]; //이동
            curY += dy[dir];

            if(j==1) //중간점 저장
            {
                cenX = curX;
                cenY = curY;
            }

            if(grid[curY][curX] != color) //색이 다르면
            {
                victory = false;
                break;
            }
        }
        if(victory)
            return color;
    }
    return 0; //승리 X
}

int main() {
    int cenX, cenY;

    //오목판 그리기
    for(int i=1; i<=19; i++)
    {
        for(int j=1; j<=19; j++)
            cin >> grid[i][j];
    }

    //승리 찾기
    for(int i=1; i<=19; i++)
    {
        for(int j=1; j<=19; j++)
        {
            int victory = CheckVictory(i, j, cenY, cenX);
            if(victory)
            {
                cout << victory << endl;
                cout << cenY << " " << cenX;
                return 0;
            }
        }
    }

    cout << 0;
    return 0;
}