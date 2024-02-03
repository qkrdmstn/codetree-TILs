#include <iostream>
#include <algorithm>
using namespace std;

bool isDuplicate(int a, int b, int c) //중복 확인
{
    return (a==b || a==c || b==c);
}

int main() {
    //변수 선언
    int ability[5];
    int totalSum = 0;
    int minDiff = 1000000;

    //입력
    for(int i=0; i<5; i++)
    {
        cin >> ability[i];
        totalSum += ability[i];
    }

    for(int i=0; i<5; i++) //팀1 (i, j)
    {
        for(int j=0; j<5; j++)
        {
            for(int k=0; k<5; k++) //팀2 (k)
            {
                if(isDuplicate(i,j,k)) continue; //팀원 중복 확인

                int sum1 = ability[i] + ability[j];
                int sum2 = ability[k];
                int sum3 = totalSum - (sum1 + sum2);

                if(isDuplicate(sum1, sum2, sum3)) continue; //능력치 중복 확인

                int minSum = min(sum1, min(sum2, sum3));
                int maxSum = max(sum1, max(sum2, sum3));
                int diff = maxSum - minSum;

                if(diff < minDiff)
                    minDiff = diff;
            }
        }
    }

    //출력
    cout << minDiff;
    return 0;
}