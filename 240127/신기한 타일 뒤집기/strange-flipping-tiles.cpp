#include <iostream>
using namespace std;

#define MAXSIZE 200000

int main() {
    //변수 선언
    int n;
    int curPoint = MAXSIZE/2;
    char color[MAXSIZE] = {'0'};

    //입력 및 타일 뒤집기
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
                color[j] = 'W';
            dist += 1;
        }
        else
        {
            for(int j=curPoint; j<curPoint+dist; j++)
                color[j] = 'B';
            dist -= 1;
        }
        curPoint += dist;
    }

    //타일 색 count
    int black = 0;
    int white = 0;
    for(int i=0; i<MAXSIZE; i++)
    {
        if(color[i] == 'W')
            white++;
        else if(color[i] == 'B')
            black++;
    }

    //출력
    cout << white << " " << black;
    return 0;
}