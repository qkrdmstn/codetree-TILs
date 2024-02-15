#include <iostream>
using namespace std;

int x1, y1, x2, y2;
int a1, b1, a2, b2;

bool IsOverlapLine(int a, int b, int c, int d)
{
    if(a<c && b<c)
        return false;
    else if(c < a && d < a)
        return false;

    return true;
}

bool IsOverlapAABB()
{
    if(IsOverlapLine(x1, x2, a1, a2) && IsOverlapLine(y1, y2, b1, b2))
        return true;
    else    
        return false;
}

int main() {

    cin >> x1 >> y1 >> x2 >> y2;
    cin >> a1 >> b1 >> a2 >> b2;

    if(IsOverlapAABB())
        cout << "overlapping";
    else
        cout << "nonoverlapping";
    return 0;
}