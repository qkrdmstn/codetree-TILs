#include <iostream>
#include <algorithm>
using namespace std;

struct HandInfo
{
    int time = 251;
    int num1 = -1;
    int num2 = -1;
};

bool Compare(HandInfo a, HandInfo b)
{
    return a.time < b.time;
}

int main() {
    int N, K, P, T;
    int handCount[100] = {0}; //감염된 뒤 악수 횟수
    bool infection[100] = {false}; //감염 여부
    HandInfo info[250];

    cin >> N >> K >> P >> T;
    for(int i=0; i<T; i++)
    {
        int t, x, y;
        cin >> t >> x >> y;

        info[i].time = t;
        info[i].num1 = x;
        info[i].num2 = y;
    }

    sort(info, info + T, Compare);
    infection[P] = true;
    
    int cnt = 0;
    for(int i=0; i<T; i++)
    {
        int x = info[i].num1;
        int y = info[i].num2;

        if(!infection[x] && !infection[y]) //비감염자끼리의 악수 skip
            continue;

        if(infection[x]) //x가 감염
        {
            handCount[x]++;     //x의 악수 횟수 증가
            handCount[y]++;
            if(handCount[x]>K) //k번 보다 더 악수한 상태
                continue;
            else
                infection[y] = true; //악수 상대 감염
        }
        else if(infection[y])
        {
            handCount[x]++;     //x의 악수 횟수 증가
            handCount[y]++;
            if(handCount[y]>K)
                continue;
            else
                infection[x] = true;
        }
    }

    for(int i=1; i<=N; i++)
        cout << infection[i];

    return 0;
}