#include <iostream>
using namespace std;

int n, k;
bool InRange(int r, int c)
{
    return (r >= 1 && r <= n && c >= 1 && c <= n);
}

void StartSetting(int &r, int &c, int &dir) 
{
    float kf = (float)k/n;
    if(kf <= 1)
    {
        r = 0;
        c = k;
        dir = 2;
    }
    else if(kf <= 2)
    {
        r = k%n;
        c = n+1;
        dir = 3;
    }
    else if(kf<= 3)
    {
        r = n+1;
        c = n - k%(2*n) + 1;
        dir = 0;
    }
    else if(kf <= 4)
    {
        r = n -k%(3*n) + 1;
        c = 0;
        dir = 1;
    }
}

int main() {
    char mirrors[1001][1001];

    int dr[4] = {-1, 0, 1, 0};
    int dc[4] = {0, 1, 0, -1};

    int r = 0, c = 2;
    int dir = -1;

    //거울 위치 입력
    cin >> n; 
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin >> mirrors[i][j];
        }
    }

    cin >> k;
    StartSetting(r, c, dir); //레이저 시작의 행과 열, 방향 계산

    int cnt = 0;
    while(true)
    {   
        int nr = r + dr[dir];
        int nc = c + dc[dir];
        if(!InRange(nr, nc)) //범위 밖을 나갈 때까지 반복
            break;

        r = r + dr[dir];
        c = c + dc[dir];
        cnt++;
        if(mirrors[nr][nc] == '/')
        {
            if(dir % 2 == 0) // 위아래는 시계방향 반사
                dir++;
            else //좌우는 반시계방향 반사
                dir--;
        }
        else if(mirrors[nr][nc] == '\\') //위와 반대
        {
            if(dir % 2 == 0)
                dir--;
            else
                dir++;        
        }

        if(dir > 3) //index 예외 처리
            dir = 0;
        else if(dir < 0)
            dir = 3;
    }

    //출력
    cout << cnt;
    return 0;
}