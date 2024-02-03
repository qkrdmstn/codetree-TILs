#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int n;
int p1[3]; //조합 1
int p2[3]; //조합 2

int GetDist(int a, int b) //원형 자물쇠에서의 거리
{
    int largeNum = max(a, b);
    int smallNum = min(a, b);

    int dist1 = abs(largeNum-smallNum);
    int dist2 = abs(smallNum - largeNum + n);
    
    if(dist1 < dist2)
        return dist1;
    else
        return dist2;  
}

bool Unlock(int a, int b, int c) 
{
    int a1 = GetDist(p1[0], a); //조합 1과의 거리
    int b1 = GetDist(p1[1], b);
    int c1 = GetDist(p1[2], c);

    int a2 = GetDist(p2[0], a); //조합 2와의 거리
    int b2 = GetDist(p2[1], b);
    int c2 = GetDist(p2[2], c);

    if((a1<=2 && b1<=2 && c1<=2)  || (a2<=2 && b2<=2 && c2<=2)) //거리가 2 이내
        return true;
    else
        return false;
}

int main() {
    //입력
    cin >> n;
    for(int i=0; i<3; i++)
        cin >> p1[i];
    for(int i=0; i<3; i++)
        cin >> p2[i];  
  
    int cnt = 0;
    for(int i=1; i<=n; i++) //모든 세 자리에 대해 시도
    {
        for(int j=1; j<=n; j++)
        {
            for(int k=1; k<=n; k++)
            {
                if(Unlock(i, j, k))
                    cnt++;
            }   
        }
    }

    //출력
    cout << cnt;
    return 0;
}