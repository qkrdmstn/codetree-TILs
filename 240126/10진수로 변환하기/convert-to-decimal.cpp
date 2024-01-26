#include <iostream>
#include <string>
using namespace std;

int main() {
    // 변수 선언 및 입력
    string binary;
    cin >> binary;

    int num = 1;
    int sum = 0;
    for(int i=binary.length()-1; i>=0; i--)
    {
        sum += num*(binary[i] - '0');
        num *= 2;
    }

    cout << sum;
    return 0;
}