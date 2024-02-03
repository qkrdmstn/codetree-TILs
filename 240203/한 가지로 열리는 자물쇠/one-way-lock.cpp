#include <iostream>
using namespace std;

int password[3] = {0};

bool InRange(int a, int b)
{
    return (a-b <= 2 && a-b >=-2);
}

bool Unlock(int a, int b, int c)
{
    return (InRange(password[0], a) || InRange(password[1], b) || InRange(password[2], c));
}

int main() {
    //변수 선언
    int n;

    //입력
    cin >> n;
    for(int i=0; i<3; i++)
        cin >> password[i];

    //조합 완전탐색
    int cnt = 0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            for(int k=1; k<=n; k++)
            {
                if(Unlock(i,j,k))
                    cnt++;
            }
        }
    }

    //출력
    cout << cnt;
    return 0;
}