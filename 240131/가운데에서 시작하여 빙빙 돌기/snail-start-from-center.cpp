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
    int r = n/2 + 1, c = n/2 + 1;

    arr[r][c] = 1;

    int cnt = 2;
    int num = 1;
    for(int k=0; k<n; k++)
    {
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<num; j++)
            {
                if(cnt > n*n)
                    break;
                int nr = r + dr[dir];
                int nc = c + dc[dir];

                r += dr[dir];
                c += dc[dir];

                arr[r][c] = cnt;
                cnt++;

            }
            dir++;
            dir %= 4;
        }
        num++;
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}