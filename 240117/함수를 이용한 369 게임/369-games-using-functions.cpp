#include <iostream>
using namespace std;

int game(int a, int b)
{
    int cnt = 0;
    for(int i=a; i<=b; i++)
    {
        int i1 = i%10;
        int i10 = i/10;
        if(i%3 == 0)
        {
            cnt++;
            continue;
        }
        
        if(i1 == 3 || i1 == 9 || i1 == 6)
        {
            cnt++;
            continue;
        }

        if(i10 == 3 || i10 == 9 || i10 == 6)
        {
            cnt++;
            continue;
        }
    }
    return cnt;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << game(a,b);
    return 0;
}