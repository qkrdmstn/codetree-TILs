#include <iostream>
using namespace std;

bool isInteresting(int x)
{
    int digit[10] = {0};
    int i=0;
    while(x>0){
        digit[x%10]++;
        x /=10;
        i++;
    }

    bool flag = false;
    for(int j=0; j<10; j++){
        if(i-1 == digit[j])
            return true;
    }

    return false;;
}

int main() {
    int x, y;

    cin >> x >> y;

    int cnt = 0;
    for(int i=x; i<=y; i++){
        if(isInteresting(i))
            cnt++;
    }

    cout << cnt;
    return 0;
}