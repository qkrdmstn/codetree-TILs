#include <iostream>
using namespace std;

struct Info
{
    int num;
    int cnt1, cnt2;
};

int N;
Info info[10];

int CalCnt1(int num[], int digit[]) //같은 자리 수에 같은 수가 있으면 cnt1++
{
    int cnt1 = 0;
    for(int i=0; i<3; i++)
    {
        if(num[i] == digit[i])
            cnt1++;
    }

    return cnt1;
}

int CalCnt2(int num[], int digit[]) //다른 자리 수에 같은 수가 있으면 cnt2++
{
    int cnt2 = 0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i==j) continue;
            if(num[i] == digit[j])
                cnt2++;
        }
    }

    return cnt2;
}

bool Condition(int n100, int n10, int n1) 
{
    int n[3] = {n1, n10, n100}; 

    for(int i=0; i<N; i++) //주어진 수가 모든 정보에 대해 부합하는지 확인
    {
        int num = info[i].num;
        int iCnt1 = info[i].cnt1;
        int iCnt2 = info[i].cnt2;

        int digit[3];  //Get Digit
        for(int j=0; j<3; j++)
        {
            digit[j] = num%10;
            num/=10;
        }

        int cnt1 = CalCnt1(n, digit);
        int cnt2 = CalCnt2(n, digit);
        if(cnt1 != iCnt1 || cnt2 != iCnt2) //다르면 X
            return false;
    }

    return true;
}

int main() {

    //입력
    cin >> N;
    for(int i=0; i<N; i++)
        cin >> info[i].num >> info[i].cnt1 >> info[i].cnt2;

    //주어진 정보에 맞는지 모든 세 자리 수에 대해 탐색
    int cnt = 0;
    for(int i=1; i<=9; i++)
    {
        for(int j=1; j<=9; j++)
        {
            for(int k=1; k<=9; k++)
            {
                if(i==j || j==k || k==i) continue;

                if(Condition(i, j, k))
                    cnt++;
            }
        }
    }

    //출력
    cout << cnt;
    return 0;
}