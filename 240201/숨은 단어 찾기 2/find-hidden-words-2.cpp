#include <iostream>
#include <string>
using namespace std;

int n, m;
string str[51];
int dc[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int dr[8] = {-1, -1, 0, 1, 1, 1, 0, -1};

bool InRange(int r, int c)
{
    return (r>=0 && r<n && c>=0 && c<m);
}

int CheckLee(int r, int c)
{
    int cnt = 0;
    for(int dir=0; dir<8; dir++)
    {
        string temp;
        int nr1 = r + dr[dir];
        int nc1 = c + dc[dir];
        int nr2 = nr1 + dr[dir];
        int nc2 = nc1 + dc[dir];

        if(!InRange(nr1, nc1) || !InRange(nr2, nc2))
            continue;

        char c1 = str[r][c];
        char c2 = str[nr1][nc1];
        char c3 = str[nr2][nc2];
        
        temp +=c1;
        temp +=c2;
        temp +=c3;

        if(temp == "LEE")
            cnt++;
    }
    return cnt;
}

int main() {

    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin >> str[i];
    
    char a = str[2][0];
    char b = str[2][1];
    char c = str[2][2];

    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cnt += CheckLee(i,j);
        }
    }

    cout << cnt;
    return 0;
}