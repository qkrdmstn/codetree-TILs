#include <iostream>
using namespace std;

int main() {
    int x;
    int curV = 1;
    int curPos = 0;

    cin >> x;
    int time = 0;
    while(curPos != x){
        curPos += curV;

        if(curPos < x/2)
            curV++;
        else if(curV == 1)
            curV = curV;
        else if(curPos >= x/2)
            curV--;

        if(curPos > x)
            break;
        time++;
    }
    
    cout << time;

    return 0;
}