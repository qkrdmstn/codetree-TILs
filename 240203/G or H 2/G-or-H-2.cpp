#include <iostream>
#include <algorithm>
using namespace std;

struct People
{
    int x;
    char c;
};

bool Compare(People a, People b) //정렬
{
    return a.x < b.x;
}

int main() {
    //변수 선언
    int n;
    People people[100];

    //입력
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> people[i].x >> people[i].c;

    sort(people, people + n, Compare); //위치 오름차순 정렬

    int maxSize = 0;
    for(int i=0; i<n; i++) //칸수 (index)
    {
        for(int j=0; j<n-i; j++) //시작점 j
        {
            int cntG = 0;
            int cntH = 0;
            for(int k=j; k<=j+i; k++) //i칸수만큼 구간 순회
            {
                if(people[k].c == 'G') //G, H 개수 count
                    cntG++;
                else if(people[k].c == 'H')
                    cntH++;
            }
            if(cntG == cntH || cntG == 0 || cntH == 0) //조건
            {
                if(maxSize < people[j+i].x - people[j].x) //최댓값
                    maxSize = people[j+i].x - people[j].x;
            }
        }
    }

    //출력
    cout << maxSize;
    return 0;
}