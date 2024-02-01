#include <iostream>
#include <string>
using namespace std;

//변수 선언
int n, m;
string str[51];
int dc[8] = {0, 1, 1, 1, 0, -1, -1, -1}; //8방향 dx, dy
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
        int nr1 = r + dr[dir]; //현재 방향의 2번째 위치
        int nc1 = c + dc[dir];
        int nr2 = nr1 + dr[dir]; //현재 방향의 3번째 위치
        int nc2 = nc1 + dc[dir];

        if(!InRange(nr1, nc1) || !InRange(nr2, nc2)) //범위 확인
            continue;

        char c1 = str[r][c]; //현재 위치 문자
        char c2 = str[nr1][nc1]; //2번째 문자
        char c3 = str[nr2][nc2]; //3번째 문자
        
        temp +=c1;
        temp +=c2;
        temp +=c3;

        if(temp == "LEE") //LEE라면 count
            cnt++;
    }
    return cnt;
}

int main() 
{
    //입력
    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin >> str[i];
    
    //Count
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cnt += CheckLee(i,j); //모든 위치에 대해 check
        }
    }

    //출력
    cout << cnt;
    return 0;
}