#include <iostream>
using namespace std;

int Plowing(int curH, int destH)
{
    int cost = curH - destH;
    if(cost < 0)
        cost *= -1;

    return cost;
}

int main() {
    int n, h, t;
    int farm[100];

    cin >> n >> h >> t;
    for(int i=0; i<n; i++)
        cin >> farm[i];
    
    int min = 20000;
    for(int i=0; i<n-t; i++) //시작점 i
    {
        int cost = 0;
        for(int j=i; j<i+t; j++) //i부터 t개만큼 고르게 하기
        {
            cost += Plowing(farm[j], h);
        }
        if(cost < min)
            min = cost;
    }

    cout << min;
    return 0;
}