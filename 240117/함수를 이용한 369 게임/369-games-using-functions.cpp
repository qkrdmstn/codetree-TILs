#include <iostream>
using namespace std;

int game(int a, int b)
{
    int cnt = 0;
    for(int i=a; i<=b; i++)
    {
        int i1 = i%10;
        int i10 = i/10;
        if((i1 % 3 == 0 && i1 != 0) || (i10 % 3 == 0 && i10 != 0)|| i%3 == 0)
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