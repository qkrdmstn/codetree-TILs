#include <iostream>
#include <algorithm>
using namespace std;

int a, b, c, d;
bool IsOverlap()
{
    if(a<c && b<c)
        return false;
    else if(c<a && d<a)
        return false;
    return true;
}

int main() {
    cin >> a >> b >> c >> d;

    if(IsOverlap()){
        if(a<=c && d<=b)
            cout << abs(a-b);
        else if(c<=a && b<=d)
            cout << abs(c-d);
        else if(a < c)
            cout << abs(a-d);
        else if(c < a)
            cout << abs(c-b);
    }
    else
        cout << abs(a-b) + abs(c-d);
    
    return 0;
}