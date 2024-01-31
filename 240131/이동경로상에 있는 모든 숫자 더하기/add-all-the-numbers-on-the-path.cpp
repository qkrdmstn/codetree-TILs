#include <iostream>
#include <string>
using namespace std;

int n, t;
bool InRange(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < n);
}

int main() {
    int arr[100][100] = {0};
    string str;

    int dx[4] = {0, 1, 0, -1}; //시계 방향
    int dy[4] = {-1, 0, 1, 0};
    int dir = 0;

    cin >> n >> t;
    cin >> str;

    int curX = n/2;
    int curY = n/2;

    //격자 정보 입력
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin >> arr[i][j];
    }

    int sum = arr[curY][curX]; //시작 지점 더하기
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == 'L') //방향 전환
        {
            dir--;
            if(dir < 0)
                dir = 3;
        }
        else if(str[i] == 'R')
        {
            dir++;
            if(dir > 3)
                dir = 0;
        }
        else if(str[i] == 'F') //이동
        {
            int nx = curX + dx[dir];
            int ny = curY + dy[dir];
            if(!InRange(nx, ny)) //다음 위치가 범위 밖이면 skip
                continue;

            curX += dx[dir];
            curY += dy[dir];

            sum += arr[curY][curX];
        }
    }

    //출력
    cout << sum;
    return 0;
}