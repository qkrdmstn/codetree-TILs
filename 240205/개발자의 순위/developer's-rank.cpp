#include <iostream>
using namespace std;

int K, N;
int rankInfo[10][20];
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
    cin >> K >> N;
    for(int i=0; i<K; i++)
    {
        for(int j=0; j<N; j++)
            cin >> rankInfo[i][j];
    }

    int cnt = 0;
    for(int a=0; a<N; a++) //a번 개발자
    {
        for(int b=0; b<N; b++) //b번 개발자
        {
            if(alwaysVictory(a,b))
                cnt++;
        }
    }

    //출력
    cout << cnt;
    return 0;
}