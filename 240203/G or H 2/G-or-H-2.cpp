#include <iostream>
#include <algorithm>
using namespace std;

struct People
{
    int x;
    char c;
};

bool Compare(People a, People b)
{
    return a.x < b.x;
}

bool InRange(int a, int b, People p)
{
    return (p.x >= a && p.x <= b);
}

int main() {
    //변수 선언
    int n;
    People people[100];

    //입력
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> people[i].x >> people[i].c;

    sort(people, people + n, Compare);

    int maxSize = 0;
    for(int i=0; i<n; i++) //칸수 
    {
        for(int j=0; j<n-i; j++) //범위
        {
            int cntG = 0;
            int cntH = 0;
            for(int k=j; k<=j+i; k++)
            {
                if(people[k].c == 'G')
                    cntG++;
                else if(people[k].c == 'H')
                    cntH++;
            }
            if(cntG == cntH || cntG == 0 || cntH == 0)
            {
                if(maxSize < people[j+i].x - people[j].x)
                {
                    maxSize = people[j+i].x - people[j].x;
                }
            }
        }
    }

    cout << maxSize;
    return 0;
}