#include <iostream>
#include <algorithm>
using namespace std;

struct People 
{
    int x = 0; //위치
    char c; //문자
};

bool Compare(People a, People b) //위치 기준 정렬
{
    return a.x < b.x;
}

int Dist(People a, People b) //거리 계산
{
    int result = a.x - b.x;
    if(result < 0)
        result *= -1;
    return result;
}

int main() {
    //변수 선언
    int n, k;
    People people[101];

    //입력
    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
        cin >> people[i].x;
        cin >> people[i].c;
    }

    sort(people, people + n, Compare); //위치 오름차순 정렬

    int max = 0;
    int i=0; //시작점
    while(true)
    {
        int j=i;
        int sum = 0;
        int dist = 0;

        while(dist <= k) //dist가 k보다 작은 동안
        {
            if(people[j].c == 'G')
                sum += 1;
            else if(people[j].c == 'H')
                sum += 2;

            dist += Dist(people[j], people[j+1]);
            j++;
        }
        i++;

        if(sum > max) //최댓값
            max = sum;
        if(j >= n) //j가 범위 밖 break;
            break;
    }

    //출력
    cout << max;
    return 0;
}