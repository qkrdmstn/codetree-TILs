#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, b;
    int price[1000];

    cin >> n >> b;
    for(int i=0; i<n; i++)
        cin >> price[i];

    sort(price, price + n);



    int i=0;
    bool flag = true;
    while(b > 0)
    {
        b -= price[i];
        if(b < 0 && flag)
        {
            b += price[i]/2;
            flag = false;
        }
        i++;
        if(!flag)
            break;
    }

    cout << i;
    return 0;
}