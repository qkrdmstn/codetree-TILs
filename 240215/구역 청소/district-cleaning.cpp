#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    bool arr[101] = {false};

    cin >> a >> b >> c >> d;
    for(int i=a; i<=b; i++)
        arr[i] = true;
    for(int i=c; i<=d; i++)
        arr[i] = true;

    int cnt = 0;
    for(int i=0; i<=100; i++){
        if(arr[i])
            cnt++;
    }

    cout << cnt - 1;
    return 0;
}