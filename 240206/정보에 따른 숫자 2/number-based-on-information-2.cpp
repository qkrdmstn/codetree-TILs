#include <iostream>
#include <algorithm>
using namespace std;

int T, a, b;
char c[100];
int pos[100] = {0};
bool isSpecial(int x)
{
    int d1 = 1000, d2 = 1000;
    for(int i=0; i<T; i++){ //모든 알파벳 순회
        int dist1 = 1000;
        int dist2 = 1000;

        if(c[i] == 'S') //거리 계산
            dist1 = abs(pos[i] - x);
        else if(c[i] == 'N')
            dist2 = abs(pos[i] - x);

        if(dist1 < d1) d1 = dist1; //거리 최소
        if(dist2 < d2) d2 = dist2;
    }

    if(d1 <= d2) //조건 만족
        return true;
    else
        return false;
}

int main() {
    //입력
    cin >> T >> a >> b;
    for(int i=0; i<T; i++)
        cin >> c[i] >> pos[i];

    //계산
    int cnt = 0;
    for(int i=a; i<=b; i++){
        if(isSpecial(i))
            cnt++;
    }

    //출력
    cout << cnt;
    return 0;
}