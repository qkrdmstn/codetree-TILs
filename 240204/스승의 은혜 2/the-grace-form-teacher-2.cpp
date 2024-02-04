#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    //변수 선언
    int n, b;
    int price[1000];

    //입력
    cin >> n >> b;
    for(int i=0; i<n; i++)
        cin >> price[i];

    sort(price, price + n); //가격 오름차순 정렬

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
        
        if(b >= 0)
            i++;
        else
            break;
    }

    //출력
    cout << i;
    return 0;
}