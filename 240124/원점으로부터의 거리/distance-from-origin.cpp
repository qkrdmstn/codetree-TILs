#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

class Point
{
public:
int x, y;
int dist;
int num;

public:
Point(int _x = 0, int _y = 0, int _num = -1)
{
    x = _x;
    y = _y;
    num = _num;

    dist = abs(x) + abs(y);
}

void Print()
{
    cout << num << endl;
}
};

bool Compare(Point a, Point b)
{
    if(a.dist == b.dist)
        return a.num < b.num;
    return a.dist < b.dist;
}

int main() {
    int n;
    Point points[1000];

    cin >> n;
    for(int i=0; i<n; i++)
    {
        int _x, _y;
        cin >> _x >> _y;

        points[i] = Point(_x, _y, i+1);
    }

    sort(points, points + n, Compare);

    for(int i=0; i<n; i++)
        points[i].Print();
    return 0;
}