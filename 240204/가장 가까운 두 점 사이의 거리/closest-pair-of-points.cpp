#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};

int DistSquare(Point a, Point b)
{
    return (a.x - b.x) * (a.x - b.x)+(a.y - b.y) * (a.y - b.y);
}


int main() {
    //변수 선언
    int n;
    Point points[100];

    //점 입력
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> points[i].x >> points[i].y;

    //n개의 점 중 두 개의 점을 선택
    int minDist = 2000000;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j) continue;
            int dist = DistSquare(points[i], points[j]);

            if(dist < minDist)
                minDist = dist;
        }
    }

    cout << minDist;
    return 0;
}