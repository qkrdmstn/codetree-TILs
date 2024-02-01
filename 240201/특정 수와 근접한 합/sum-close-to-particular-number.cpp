#include <iostream>
using namespace std;

int s, n;
int arr[100] = {0};

int Difference(int a) //s와의 차이 계산
{
    int result = s-a;
    if(result < 0)
        result *= -1;

    return result;
}

int main() {
    int minDiff = 999999;

    cin >> n >> s;
    
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    for(int i=0; i<n; i++) //서로 다른 두 i, j 찾기
    {
        for(int j=i+1; j<n; j++)
        {
            int sum = 0;
            for(int k=0; k<n; k++)
            {
                if(k == i || k == j) //i와 j번째 수를 제외
                    continue;
                sum += arr[k]; //나머지 더하기
            }

            int diff = Difference(sum);
            if(diff < minDiff) //차이가 최소
                minDiff = diff;
        }
    }

    //출력
    cout << minDiff;
    return 0;
}