#include <iostream>
#include <algorithm>
using namespace std;

struct Candy
{
    int x;
    int count;
};

bool Compare(Candy a, Candy b) //정렬
{
    return a.x < b.x;
}

bool InRange(int a, int b, Candy c) //c가 [a,b] 구간에 속하는지 판단
{
    return (c.x >= a && c.x <=b);
}

int main() {
    //변수 선언
    int n, k;
    Candy candy[100];

    //입력
    cin >> n >> k;
    for(int i=0; i<n; i++)
        cin >> candy[i].count >> candy[i].x;

    //위치 오름차순 정렬
    sort(candy, candy + n, Compare);


    int max = 0;
    for(int i=0; i<=100; i++) //중심점 i
    {
        int sum = 0;
        for(int j=0; j<n; j++)
        {
            if(InRange(i-k, i+k, candy[j])) //[i-k, i+k] 구간에 속하면,
                sum += candy[j].count;
        }
        
        //최댓값
        if(sum > max)
            max = sum;
    }

    //출력
    cout << max;
    return 0;
}