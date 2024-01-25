#include <iostream>
using namespace std;

int main() {
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int a, b, c;
    cin >> a >> b >> c;

    int d = a-11;
    int h = d*24 + (b-11);
    int m = h*60 + (c-11);

    if(m<0)
    {
        cout << -1;
        return 0;
    }
    
    cout << m;
    return 0;
}