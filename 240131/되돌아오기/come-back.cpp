#include <iostream>
using namespace std;

int Direction(char dir)
{
    if(dir == 'W')
        return 3;
    else if(dir == 'S')
        return 2;
    else if(dir == 'N')
        return 0;
    else if(dir == 'E')
        return 1;
}

int main() {
    int n;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int curX = 0, curY = 0;
    int time = 0;
    int flag = false;
    
    cin >> n;
    for(int i=0; i<n; i++)
    {
        char dir;
        int dist;
        int idx;
        cin >> dir >> dist;

        idx = Direction(dir);
        for(int j=0; j<dist; j++)
        {
            curX += dx[idx];
            curY += dy[idx];
            time++;
            
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