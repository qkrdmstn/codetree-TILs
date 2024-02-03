#include <iostream>
#include <algorithm>
using namespace std;

bool isDuplicate(int a, int b, int c, int d)
{
    return (a==b || a==c || a == d || b == c || b == d || c == d);
}

int main() {
    int ability[6];
    int totalSum = 0;
    int minDiff = 1000000;

    for(int i=0; i<6; i++)
    {
        cin >> ability[i];
        totalSum += ability[i];
    }

    for(int i=0; i<6; i++) //팀1 (i, j)
    {
        for(int j=0; j<6; j++)
        {
            for(int k=0; k<6; k++) //팀2 (k, l)
            {
                for(int l=0; l<6; l++)
                {
                    if(isDuplicate(i, j, k, l)) continue; //팀원 중복 확인
                    int sum1 = ability[i] + ability[j];
                    int sum2 = ability[k] + ability[l];
                    int sum3 = totalSum - (sum1 + sum2);

                    int minSum = min(sum1, min(sum2, sum3));
                    int maxSum = max(sum1, max(sum2, sum3));
                    int diff = maxSum - minSum; 
                    
                    if(diff < minDiff)
                        minDiff = diff;
                }
            }
        }
    }

    //출력
    cout << minDiff;
    return 0;
}