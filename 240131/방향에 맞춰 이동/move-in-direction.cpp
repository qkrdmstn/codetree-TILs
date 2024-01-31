#include <iostream>
using namespace std;
int main() {
    int n;
    int nx = 0, ny = 0;

    cin >> n;
    for(int i=0; i<n; i++)
    {
        char dir;
        int dist;
        cin >> dir >> dist;

        if(dir == 'W')
            nx -= dist;
        else if(dir == 'S')
            ny -= dist;
        else if(dir == 'N')
            ny += dist;
        else if(dir == 'E')
            nx += dist;
    }

    cout << nx << " " << ny;
    return 0;
}