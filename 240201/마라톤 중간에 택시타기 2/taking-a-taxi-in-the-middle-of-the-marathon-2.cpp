#include <iostream>
using namespace std;

int GetDist(int x1, int y1, int x2, int y2)
{
    int x = x1 - x2;
    int y = y1 - y2;

    if(x < 0)
        x *= -1;
    if(y < 0)
        y *= -1;

    return x + y;
}

int main() {
    int n;
    int x[100] = {0};
    int y[100] = {0};

    cin >> n;
    for(int i=0; i<n; i++)
       cin >> x[i] >> y[i];

    int min = 100000000;
    for(int i=1; i<n-1; i++) //건너뛰는 체크포인트 = i
    {   
        int sum = 0;
        for(int j=0; j<n-1; j++)
        {
            int point1 = j;
            int point2 = j+1;

            if(j==i) //체크 포인트 건너뛰기
                continue;
            if(point2==i)
                point2++;

            sum += GetDist(x[point1], y[point1], x[point2], y[point2]); //두 체크포인트 거리
        }
        if(sum < min) //최소 거리 계산
            min = sum;
    }

    cout << min;
    return 0;
}