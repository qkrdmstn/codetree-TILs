#include <iostream>
#include <algorithm>
using namespace std;

int a, b, c, d;
bool IsOverlap()
{
    if(a<b && c<b)
        return false;
    else if(c<a && d<a)
        return false;
    return true;
}

int main() {
    bool arr[101] = {false};

    cin >> a >> b >> c >> d;
    for(int i=a; i<=b; i++)
        arr[i] = true;
    for(int i=c; i<=d; i++)
        arr[i] = true;

    if(IsOverlap()){
        cout << abs(a-d);
        return 0;
    }

    int cnt = 0;
    for(int i=0; i<=100; i++){
        if(arr[i])
            cnt++;
    }

    cout << cnt - 2;
    return 0;
}