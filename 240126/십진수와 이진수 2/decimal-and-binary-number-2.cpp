#include <iostream>
using namespace std;

int main() {
    string N;
    cin >> N;

    int cnt = 1; //10진수 변환
    int sum = 0;
    for(int i=N.length()-1; i>=0; i--)
    {
        sum += cnt*(N[i] - '0');
        cnt *= 2;
    }

    sum *= 17; //17배

    int binary[15] = {0}; //2진수 변환
    int i=0;
    while(true)
    {
        if(sum<2)
        {
            binary[i++] = sum;
            break;
        }
        binary[i++] = sum%2;
        sum/=2;
    }
    
    for(int j=i-1; j>=0; j--) //출력
        cout << binary[j];
    return 0;
}