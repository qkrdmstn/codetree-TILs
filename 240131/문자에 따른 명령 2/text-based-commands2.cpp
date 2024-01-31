#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    int index = 0;
    int nx = 0;
    int ny = 0;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    cin >> n;
    for(int i=0; i<n.length(); i++)
    {
        if(n[i] == 'L')
        {
            index--;
            if(index < 0)
                index = 3;
        }
        else if(n[i] == 'R')
        {
            index++;
            if(index > 3)
                index = 0;
        }
        else if(n[i] == 'F')
        {
            nx += dx[index];
            ny += dy[index];
        }
    }

    cout << nx << " " << ny;
    return 0;
}