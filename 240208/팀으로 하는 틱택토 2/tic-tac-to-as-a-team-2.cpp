#include <iostream>
using namespace std;

int teamCount = 0;
int team[8][2] = {{0}};
bool isDuplicate(int a, int b) //이미 승리한 팀인지 중복 확인
{
    for(int i=0; i<teamCount; i++){
        if(team[i][0] == a && team[i][1] == b)
            return true;
        if(team[i][1] == a && team[i][0] == b)
        return true;
    }
    return false;
}

bool isVictory(int a, int b, int c) //승리 조건 check
{
    if(a==b && a != c){
        if(isDuplicate(a, c)) return false;
        team[teamCount][0] = a;
        team[teamCount][1] = c;
        teamCount++;
        return true;
    }
    if(a==c && a != b){
        if(isDuplicate(a, b)) return false;
        team[teamCount][0] = a;
        team[teamCount][1] = b;
        teamCount++;
        return true;
    }
    if(b==c && b != a){
        if(isDuplicate(b, a)) return false;
        team[teamCount][0] = b;
        team[teamCount][1] = a;
        teamCount++;
        return true;
    }
    return false;
}

int main() {
    int arr[3][3] = {{0}};

    for(int i=0; i<3; i++){
        int num;
        cin >> num;

        for(int j=0; j<3; j++){
            arr[i][2-j] = num%10;
            num /= 10;
        }
    }

    int cnt = 0;
    for(int i=0; i<3; i++){ //가로
        if(isVictory(arr[i][0], arr[i][1], arr[i][2]))
            cnt++;
    }

    for(int i=0; i<3; i++){ //세로
        if(isVictory(arr[0][i], arr[1][i], arr[2][i]))
            cnt++;
    }

    if(isVictory(arr[0][0], arr[1][1], arr[2][2])) //대각선
        cnt++;
    if(isVictory(arr[2][0], arr[1][1], arr[0][2]))
        cnt++;

    cout << cnt;
    return 0;
}