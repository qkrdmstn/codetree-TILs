#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
    int digit[7] = {0};
    int i = 0;
    while(num > 0){
        digit[i++] = num % 10;
        num /= 10;
    }

    for(int j=0; j<i; j++){
        if(digit[j] != digit[i-1-j])
            return false;
    }
    return true;
}

int main() {
    //변수 선언
    int x, y;

    //입력
    cin >> x >> y;

    //팰린드롬 수 count
    int cnt = 0;
    for(int i=x; i<=y; i++){
        if(isPalindrome(i))
            cnt++;
    }

    //출력
    cout << cnt;
    return 0;
}