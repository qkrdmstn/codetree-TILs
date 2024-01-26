#include <iostream>
using namespace std;

int main() {
    //변수 선언
    int a, b;
    string n;

    //입력
    cin >> a >> b;
    cin >> n;

    //a진수 -> 10진수
    int cnt = 1;
    int decimal = 0;
    for(int i=n.length()-1; i>=0; i--)
    {
        decimal += cnt*(n[i] - '0');
        cnt *= a;
    }

    //10진수 -> b진수
    int Bnum[15];
    int i=0;
    while(true)
    {
        if(decimal < b)
        {
            Bnum[i++] =  decimal;
            break;
        }
        Bnum[i++] = decimal % b;
        decimal /= b;
    }

    for(int j=i - 1; j>=0; j--)
        cout << Bnum[j];
    return 0;
}