#include <iostream>
using namespace std;


int main() {
    int n, t;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
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
        c += dx[dir];
        r += dy[dir];

        if(c < 1 || c > n || r < 1 || r > n)
        {
            c -= dx[dir];
            r -= dy[dir];

            dir += 2;
            dir %= 4;
        }
        
        //cout << i << " " << r << " " << c << endl;
    }

    cout << r << " " << c;
    return 0;
}