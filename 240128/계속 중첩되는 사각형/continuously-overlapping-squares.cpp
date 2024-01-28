#include <iostream>
using namespace std;

#define OFFSET 100

int main() {
    //변수 선언
    int n;
    int arr[200][200] = {0};

    //입력 및 사각형 그리기
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += OFFSET;
        y1 += OFFSET;
        x2 += OFFSET;
        y2 += OFFSET;

        for(int j=x1; j<x2; j++)
        {
            for(int k=y1; k<y2; k++)
            {
                if(i%2 == 0)    //빨간색 사각형
                    arr[j][k] = 1;
                else            //파란색 사각형
                    arr[j][k] = 2;
            }
        }
    }

    //파란색 사각형 넓이 계산
    int s = 0;
    for(int i=0; i<200; i++)
    {
        for(int j=0; j<200; j++)
        {
            if(arr[i][j] == 2)
                s++;
        }
    }

    //출력
    cout << s;
    return 0;
}