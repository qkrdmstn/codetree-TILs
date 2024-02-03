#include <iostream>
using namespace std;

int GetDiff(int a, int b)
{
    if(a-b < 0)
        return b-a;
    else
        return a-b;
}

int main() {
    int ability[6] = {0};
    int totalSum = 0;
    int min = 1000000;

    for(int i=0; i<6; i++)
    {
        cin >> ability[i];
        totalSum += ability[i];
    }

    //1팀 조합 i, j, k
    for(int i=0; i<6; i++)
    {
        for(int j=i+1; j<6; j++)
        {
            int sum1 = 0;
            int sum2 = 0;
            for(int k=j+1; k<6; k++)
            {
                sum1 = ability[i] + ability[j] + ability[k]; //1팀 능력치
                sum2 = totalSum - sum1; //2팀 능력치 
            }
            int diff = GetDiff(sum1, sum2);
            if(min < diff)
                min = diff;
        }
    }

    //출력
    cout << diff;
    return 0;
}