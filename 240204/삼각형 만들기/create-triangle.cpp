#include <iostream>
#include <algorithm>
using namespace std;

struct Point
{
    int x;
    int y;
};

bool Condition(Point a, Point b, Point c)
{
    bool parallelX = false;
    bool parallelY = false;

    if(!(a.x - b.x) || !(b.x - c.x) || !(c.x - a.x))
        parallelY = true;
    if(!(a.y - b.y) || !(b.y - c.y) || !(c.y - a.y))
        parallelX = true;

    if(parallelX && parallelY)
        return true;
    else
        return false;
}

int CalS(Point a, Point b, Point c)
{
    return abs((a.x*b.y + b.x*c.y + c.x*a.y) - (b.x*a.y + c.x*b.y + a.x*c.y));
}

int main() {
    Point points[100];
    int n;

    //점 입력
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> points[i].x >> points[i].y;

    int maxS = 0;
    //서로 다른 세 점 i, j, k 찾기
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<n; k++)
            {
                if(i==j || j==k || k==i) continue;

                if(Condition(points[i], points[j], points[k])) //평행 조건
                {
                    int s = CalS(points[i], points[j], points[k]); //넓이 계산
                    if(s > maxS) //최댓값
                        maxS = s;
                }
            }
        }
    }

    cout << maxS;
    return 0;
}