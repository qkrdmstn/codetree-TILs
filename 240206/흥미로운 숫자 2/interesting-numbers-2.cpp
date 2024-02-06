#include <iostream>
using namespace std;

bool isInteresting(int x)
{
    int digit[10] = {0};
    int i=0;
    while(x>0){
        digit[x%10]++; //0-9 count
        x /=10;
        i++; //자리수
    }

    bool flag = false;
    for(int j=0; j<10; j++){
        if(i-1 == digit[j]) //자리수 - 1개만큼 숫자가 있어야 함.
            return true;
    }
    return false;
}

int main() {
    //변수 선언
    int x, y;

    //입력
    cin >> x >> y;

    //계산
    int cnt = 0;
    for(int i=x; i<=y; i++){
        if(isInteresting(i))
            cnt++;
    }
    
    //출력
    cout << cnt;
    return 0;
}