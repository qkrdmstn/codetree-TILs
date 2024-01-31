#include <iostream>
using namespace std;

int n, t;
bool InRange(int x, int y)
{
    return (x >= 1 && x <= n && y >= 1 && y <= n);
}

int main() {
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {-1, 0, +1, 0};
    int r = 0, c = 0;
    char d;

    cin >> n >> t;
    cin >> r >> c >> d;
    int dir = -1;

    if( d == 'U')
        dir = 0;
    else if(d == 'D')
        dir = 2;
    else if(d == 'R')
        dir = 1;
    else if(d == 'L')
            dir = 3;

    for(int i=0; i<t; i++)
    {
        int nc = c + dx[dir];
        int nr = r + dy[dir];

        if(!InRange(nc, nr))
        {
            dir += 2;
            dir %= 4;
            continue;
        }
        c = c + dx[dir];
        r = r + dy[dir];
    }

    cout << r << " " << c;
    return 0;
}