#include <iostream>
using namespace std;

int x1, x2, x3, x4;
bool IsOverlap()
{
    if(x1 < x3 && x2 < x3)
        return false;
    else if(x3 < x1 && x4 < x2)
        return false;
    
    return true;
}

int main() {
    
    cin >> x1 >> x2;
    cin >> x3 >> x4;

    if(IsOverlap())
        cout << "intersecting";
    else  
        cout << "nonintersecting";
    return 0;
}