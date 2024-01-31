#include <iostream>
using namespace std;

int n;

bool InRange(int x, int y)
{
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {

    int arr[100][100];

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin >> arr[i][j];
    }

    int cellCnt = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            int oneCnt = 0;
            for(int k=0; k<4; k++)
            {
                int nx = i + dx[k];
                int ny = j + dy[k];

                if(InRange(nx, ny) && arr[nx][ny] == 1)
                {
                    oneCnt++;
                    if(oneCnt >= 3)
                    {
                        cellCnt++;
                        break;
                    }
                }   
            }
        }
    }

    cout << cellCnt;
    return 0;
}