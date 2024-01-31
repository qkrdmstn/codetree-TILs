#include <iostream>
using namespace std;

int n;
bool InRange(int r, int c)
{
    return (r >= 1 && r <= n && c >= 1 && c <= n);
}

int main() {
    int arr[101][101] = {0};

    int dr[4] = {0, -1, 0, 1};
    int dc[4] = {1, 0, -1, 0};
    int dir = 0;

    cin >> n;
    
    //시작점 setting
    int r = n/2 + 1, c = n/2 + 1;
    arr[r][c] = 1;
    int cnt = 2;

    int num = 1; //직선 이동 횟수
    while(InRange(r, c))
    {
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<num; j++)
            {
                r += dr[dir];
                c += dc[dir];

                if(!InRange(r, c))
                    break;
                
                arr[r][c] = cnt;
                cnt++;
            }
            dir++; //한 번의 직선 이동이 끝나면 방향 전환
            dir %= 4;
        }
        num++; //방향 전환이 두 번 될 때마다 직선 이동 거리 증가.
    }

    //출력
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}