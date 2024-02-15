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

    if(IsOverlap())
        cout << abs(a-d);
    else
        cout << abs(a-b) + abs(c-d);
    
    return 0;

}