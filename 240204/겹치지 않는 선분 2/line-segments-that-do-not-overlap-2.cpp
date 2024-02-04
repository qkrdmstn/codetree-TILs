#include <iostream>
using namespace std;

struct Segment
{
    int start;
    int end;
};

int n;
Segment segments[100];
bool isCross(int i, int j)
{
    int xi1 = segments[i].start;
    int xi2 = segments[i].end;
    int xj1 = segments[j].start;
    int xj2 = segments[j].end;

    if((xi1 < xj1 && xi2 > xj2) || (xi1 > xj1 && xi2 < xj2))
        return true;
    return false;
}

int main() {
    //입력
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> segments[i].start >> segments[i].end;

    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        bool overlap = false;
        for(int j=0; j<n; j++)
        {
            if(i==j) continue; //자기 자신 제외
            if(isCross(i, j)) //겹침 체크
            {
                overlap = true;
                break;
            }
        }
        if(!overlap) //겹침 X count 증가
            cnt++;
    }

    //출력
    cout << cnt;
    
    
    return 0;
}