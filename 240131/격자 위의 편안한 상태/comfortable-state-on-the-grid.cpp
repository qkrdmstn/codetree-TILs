#include <iostream>
using namespace std;

int n, m; //전역변수
bool InRange(int r, int c) //n*n 범위 확인
{
    return (r <= n && r >= 1 && c <= n && c >= 1);
}

int main() {
    bool arr[101][101] = {false};

    int dr[4] = {-1, 0, 1, 0};
    int dc[4] = {0, 1, 0, -1};

    //입력
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        int r,c;
        cin >> r >> c;

        arr[r][c] = true; //색칠

        //편안한 상태 확인
        int cnt = 0;
        for(int j=0; j<4; j++)
        {
            int nr = r + dr[j];
            int nc = c + dc[j];

            if(!InRange(nr, nc))    //격자 범위 밖이라면 skip
                continue;
            if(arr[nr][nc])
                cnt++;
        }
        if(cnt == 3)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}