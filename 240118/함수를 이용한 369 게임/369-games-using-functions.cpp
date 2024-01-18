#include <iostream>
using namespace std;

bool Judge369(int n)
{
    while(1)
    {
        if(n % 10 == 3 || n % 10 == 6 || n % 10 == 9)
            return true;
        if(n/10 == 0)
            break;
        n/=10;
    }
    return false;

}

int game(int a, int b)
{
    int cnt = 0;
    for(int i=a; i<=b; i++)
    {
        if(Judge369(i) || i % 3 == 0)
            cnt++;
    }
    return cnt;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << game(a,b);
    return 0;
}