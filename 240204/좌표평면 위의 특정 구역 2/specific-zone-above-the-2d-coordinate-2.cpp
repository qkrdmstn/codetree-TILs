#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};

int n;
Point point[100];
int CalSquareS(int index)
{
    int maxX = 0, maxY = 0;
    int minX = 40000, minY = 40000;

    for(int i=0; i<n; i++)
    {
        if(i == index) continue;
        if(point[i].x < minX) minX = point[i].x; 
        if(point[i].x > maxX) maxX = point[i].x; 
        if(point[i].y < minY) minY = point[i].y; 
        if(point[i].y > maxY) maxY = point[i].y; 
    }

    return (maxX - minX) * (maxY - minY);
}

int main() {

    //점 입력
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> point[i].x >> point[i].y; 

    int minS =1600000000;
    for(int i=0; i<n; i++)
    {
        int s = CalSquareS(i);
        if(s < minS)
            minS = s;
    }

    cout << minS;
    return 0;
}