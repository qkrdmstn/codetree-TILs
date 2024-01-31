#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    int time = 0;

    int curX = 0, curY = 0; //현재 위치

    int dx[4] = {0, 1, 0, -1}; //index 증가 -> 시계방향 90도 회전
    int dy[4] = {1, 0, -1, 0};
    int dir = 0;

    cin >> n;
    for(int i=0; i<n.length(); i++)
    {
        time++;
        if(n[i]=='L')
        {
            dir--;
            if(dir < 0)
                dir = 3;
        }
        else if(n[i] == 'R')
        {
            dir++;
            if(dir > 3)
                dir = 0;
        }
        else if(n[i] == 'F')
        {
            curX += dx[dir];
            curY += dy[dir];
            if(curX == 0 && curY == 0)
            {
                cout << time;
                return 0;
            }
        }
    }

    cout << -1;
    return 0;
}