#include <iostream>
using namespace std;

void Change(int a, int b, int cup[])
{
    int temp = cup[a];
    cup[a] = cup[b];
    cup[b] = temp;
}

int main() {
    //변수 선언
    int n;
    int a[100] = {0};
    int b[100] = {0};
    int c[100] = {0};
    
    //입력
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i] >> b[i] >> c[i];
    
    int maxScore = 0;
    for(int i=1; i<=3; i++){
        int cup[4] = {0};
        cup[i] = 1;
        int score = 0;
        for(int j=0; j<n; j++){
            Change(a[j], b[j], cup); //a컵 b컵 교환
            if(cup[c[j]] == 1) //c번 컵 확인
                score++;
        }
        if(score > maxScore) //최대 점수
            maxScore = score;
    }

    //출력
    cout << maxScore;
    return 0;
}