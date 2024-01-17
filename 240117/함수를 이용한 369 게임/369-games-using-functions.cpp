#include <iostream>
using namespace std;

int game(int a, int b)
{
    int cnt = 0;
    for(int i=a; i<=b; i++)
    {
        if(i == 3 || i == 6 || i == 9 || i%3 == 0)
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