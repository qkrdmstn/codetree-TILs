#include <iostream>
using namespace std;

bool isCorrect(int n)
{
    if(n % 2 == 0 || (n % 3==0 && n % 9 != 0) || n % 10 == 5)
        return false;
    else
        return true;
}

int CountNum(int a, int b)
{
    int cnt = 0;
    for(int i = a; i<=b; i++)
    {
        if(isCorrect(i))
            cnt++;
    }

    return cnt;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << CountNum(a, b);
    return 0;
}