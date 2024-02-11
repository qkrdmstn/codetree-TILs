#include <iostream>
using namespace std;

int n;
int a[10] = {0};
int b[10] = {0};
bool isCondition(int x)
{
    for(int i=0; i<n; i++){
        x *= 2;
        if(x < a[i] || x > b[i])
            return false;
    }
    return true;
}

int main() {

    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i] >> b[i];

    int x = 1;
    while(true){
        if(isCondition(x))
            break;
        x++;
    }

    cout << x;
    return 0;
}