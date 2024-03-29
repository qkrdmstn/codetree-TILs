#include <iostream>
using namespace std;

#define OFFSET 1000

int main() {
    //변수 선언
    int x1[2], y1[2];
    int x2[2], y2[2];
    int arr[2000][2000] = {0};

    //입력 및 사각형 그리기
    for(int i=0; i<2; i++)
    {
       cin >> x1[i] >> y1[i];
       cin >> x2[i] >> y2[i];

        x1[i] += OFFSET;
        y1[i] += OFFSET;
        x2[i] += OFFSET;
        y2[i] += OFFSET;

        for(int j=x1[i]; j<x2[i]; j++)
        {
            for(int k=y1[i]; k<y2[i]; k++)
            {
                arr[j][k] = i+1;
            }
        }
    }

    // 잔해물의 남은 min,max 좌표 계산
    int minX = 2000, maxX = 0;
    int minY = 2000, maxY = 0;
    bool flag = false;
    for(int i=x1[0]; i<x2[0]; i++)
    {
        for(int j=y1[0]; j<y2[0]; j++)
        {
            if(arr[i][j] == 1)
            {
                flag = true;
                if(minX > i)
                    minX = i;
                if(maxX < i)
                    maxX = i;
                if(minY > j)
                    minY = j;
                if(maxY < j)
                    maxY = j;
            }
        }
    }

    //잔해물이 없는 경우
    if(!flag)
    {
        cout << "0";
        return 0;
    }

    //넓이 출력
    cout << (maxX - minX + 1)*(maxY - minY + 1);
    return 0;
}