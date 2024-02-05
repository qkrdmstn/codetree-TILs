#include <iostream>
using namespace std;

struct Segment
{
    int a, b;
};

int n;
int line[101] = {0};
Segment seg[10];

void DeleteSegment(int idx1, int idx2, int idx3)
{
    for(int i=0; i<=100; i++)
        line[i] = 0;
    for(int i=0; i<n; i++)
    {
        if(i==idx1 || i==idx2 || i==idx3) continue; //선분 세 개 빼고
        for(int j=seg[i].a; j<= seg[i].b; j++) //그리기
            line[j]++;
    }
}

bool isOverlap()
{
    for(int i=0; i<=100; i++)
    {
        if(line[i] > 1)
            return true;
    }
    return false;
}

int main() {
    //입력
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> seg[i].a >> seg[i].b;

    int cnt = 0;
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++) //3개의 선분 i, j, k
            {
                DeleteSegment(i, j, k); //세 개의 선분 빼고 그리기
                if(!isOverlap())
                    cnt++;

            }
        }
    }

    cout << cnt;
    return 0;
}