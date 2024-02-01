#include <iostream>
using namespace std;

int n;
int arr[20][20] = {0};

int abs(int a) //절댓값
{
    if(a<0)
        a *= -1;
    return a;
}

bool InRange(int r, int c) //범위 확인
{
    return (r>=0 && r<n && c>=0 && c<n);
}

int CoinCount(int r, int c) //r,c 위치로부터 1*3의 Coin 개수
{
    int cnt = 0;
    for(int i=0; i<3; i++)
    {
        cnt += arr[r][c+i];
    }

    return cnt;
}

int main() {
    int max = 0;

    //격자 입력
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin >> arr[i][j];
    }

    for(int r1=0; r1<n; r1++) //서로 다른 두 위치 (r1, c1) (r2, c2) 찾기
    {
        for(int c1=0; c1<n; c1++)
        {
            for(int r2=0; r2<n; r2++)
            {
                for(int c2=0; c2<n; c2++)
                {
                    if(r1 == r2 && abs(c1-c2) < 3) //두 격자가 겹치는 조건
                        continue;

                    int sum = CoinCount(r1, c1) + CoinCount(r2, c2);
                    if(sum > max) //최댓값
                        max = sum;
                }
            }
        }
    }

    //출력
    cout << max;
    return 0;
}