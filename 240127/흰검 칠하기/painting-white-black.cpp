#include <iostream>
using namespace std;

#define MAXSIZE 200000
int main() {
    int n;
    int curPoint = MAXSIZE/2;
    int blackCnt[MAXSIZE] = {0};
    int whiteCnt[MAXSIZE] = {0};
    char color[MAXSIZE] = {0};

    cin >> n;
    for(int i=0; i<n; i++)
    {
        int dist;
        char dir;
        cin >> dist >> dir;
        
        if(dir == 'L')
        {
            dist *= -1;

            for(int j=curPoint; j>curPoint + dist; j--)
            {
                whiteCnt[j]++;
                color[j] = 'W';
            }
            dist += 1;
        }
        else
        {

            for(int j=curPoint; j<curPoint+dist; j++)
            {
                blackCnt[j]++;
                color[j] = 'B';
            }
            dist -= 1;
        }
        curPoint += dist;
    }

    int black = 0;
    int white = 0;
    int gray = 0;
    for(int i=0; i<MAXSIZE; i++)
    {
        if(blackCnt[i] >= 2 && whiteCnt[i] >= 2)
            gray++;
        else if(color[i] == 'W')
            white++;
        else if(color[i] == 'B')
            black++;
    }

    cout << white << " " << black << " " << gray;

    return 0;
}