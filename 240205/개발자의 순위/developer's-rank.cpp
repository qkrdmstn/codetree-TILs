#include <iostream>
using namespace std;

int K, N;
int rankInfo[10][21];
bool alwaysVictory(int a, int b) //모든 경기에서 a가 b를 이겼느냐.
{
    for(int i=0; i<K; i++)
    {
        bool isVitory = true;
        int aRank, bRank;
        for(int j=0; j<N; j++)
        {
            if(rankInfo[i][j] == a)
                aRank = j;
            else if(rankInfo[i][j] == b)
                bRank = j;
        }  
        if(aRank > bRank) //a가 뒷순위라면
            return false;
    }
    return true;

}
int main() {
    //입력
    cin >> K >> N;
    for(int i=0; i<K; i++)
    {
        for(int j=0; j<N; j++)
            cin >> rankInfo[i][j];
    }

    int cnt = 0;
    for(int a=1; a<=N; a++) //a번 개발자
    {
        for(int b=1; b<=N; b++) //b번 개발자
        {
            if(a==b) continue; //자신 제외

            if(alwaysVictory(a,b)) //a가 b한테 항상 승리
            {
                cnt++;
            }
        }
    }

    //출력
    cout << cnt;
    return 0;
}