#include <iostream>
#include <string>
using namespace std;

int main() {
    //변수 선언
    string a;
    bool openBracket[100] = {false};
    bool closeBracket[100] = {false};
    int pairCnt = 0;
   
    //입력
    cin >> a;

    //괄호 쌍 묶기
    for(int i=0; i<a.length() - 1; i++)
    {
        if(a[i] == a[i+1])
        {
            if(a[i] == '(')
                openBracket[pairCnt] = true;
            else if(a[i] == ')')
                closeBracket[pairCnt] = true;
            pairCnt++;
        }
    }

    int cnt = 0;
    for(int i=0; i<pairCnt; i++) //열린 괄호 i 찾기
    {
        if(!openBracket[i])
            continue;
        for(int j=i; j<pairCnt; j++) //열린 괄호 i보다 뒤에 있는 닫힌 괄호 찾기
        {
            if(!closeBracket[j])
                continue;
            cnt++;
        }
    }

    //출력
    cout << cnt;
    return 0;
}