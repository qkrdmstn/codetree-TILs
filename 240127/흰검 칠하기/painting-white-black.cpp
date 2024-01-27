#include <iostream>
using namespace std;

#define MAXSIZE 200000
int main() {
    //변수 선언
    int n;
    int curPoint = MAXSIZE/2;
    int blackCnt[MAXSIZE] = {0}; //색칠 횟수
    int whiteCnt[MAXSIZE] = {0};
    char color[MAXSIZE] = {0}; //타일 색

    //입력
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
            dist += 1; //마지막으로 칠한 타일 위에 멈추기
        }
        else
        {
            for(int j=curPoint; j<curPoint+dist; j++)
            {
                blackCnt[j]++;
                color[j] = 'B';
            }
            dist -= 1; //마지막으로 칠한 타일 위에 멈추기
        }
        curPoint += dist; //이동
    }

    //최종 타일 색 count
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

    //출력
    cout << white << " " << black << " " << gray;

    return 0;
}