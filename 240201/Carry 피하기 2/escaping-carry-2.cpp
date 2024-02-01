#include <iostream>
using namespace std;

bool isCarry(int a, int b, int c) //Carry 여부 판단
{
    while(true)
    {
        int numA = a%10;
        int numB = b%10;
        int numC = c%10;
        int sum = numA + numB + numC;

        if(sum >= 10)
            return true;
        if(a/10 == 0 && b/10 == 0 && c/10 == 0)
            return false;
        a/=10;
        b/=10;
        c/=10;
    }
}

int main() {
    //변수 선언
    int n;
    int num[20] = {0};
    int max = 0;

    //입력
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> num[i];

    //서로 다른 3개의 수 고르기
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j==i)
                continue;
            for(int k=0; k<n; k++)
            {
                if(k==j || k==i)
                    continue;

                int a = num[i];
                int b = num[j];
                int c = num[k];

                if(!isCarry(a, b, c)) //carry가 없는 3개의 수
                {
                    int sum = a + b + c;
                    if(sum > max)
                        max = sum;
                }
            }
        }
    }


    //출력
    cout << max;
    return 0;
}