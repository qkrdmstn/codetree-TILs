#include <iostream>
using namespace std;

int main() {
    //변수 선언
    int x1[3], x2[3];
    int y1[3], y2[3];
    int arr[2000][2000] = {0};

    //입력
    for(int i=0; i<3; i++)
    {
        cin >> x1[i] >> y1[i];
        cin >> x2[i] >> y2[i];

        x1[i] += 1000;
        x2[i] += 1000;
        y1[i] += 1000;
        y2[i] += 1000;
    }
    
    //사각형 그리기
    for(int i=0; i<3; i++)
    {
        for(int j=x1[i]; j<x2[i]; j++)
        {
            for(int k=y1[i]; k<y2[i]; k++)
            {
                a[j][k] = i+1;
            }
        }
    }

    //넓이 계산 -> 1번째, 2번째 사각형만 count
    int s = 0;
    for(int i=0; i<2000; i++)
    {
        for(int j=0; j<2000; j++)
        {
            if(arr[i][j] == 1 || arr[i][j] == 2)
                s++;
        }
    }

    //출력
    cout << s;
    return 0;
}