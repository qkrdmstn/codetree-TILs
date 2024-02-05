#include <iostream>
#include <algorithm>
using namespace std;

struct Eat{
    int people;
    int cheeseIdx;
    int time;
};

struct Sick
{
    int people;
    int time;
};

int N, M, D, S;
Eat eat[50];
Sick sick[50];
bool CompareE(Eat a, Eat b)
{
    return a.time < b.time;
}

bool CompareS(Sick a, Sick b)
{
    return a.time < b.time;
}

bool EatCheese(int idx)
{ //상한 치즈를 모든 아픈 사람이 아프기 전에 먹어야 함.
//-> 아픈 사람이 아프기 전에 안 먹었으면 false;

    bool isEveryone = true;
    for(int i=0; i<S; i++)
    {
        bool isEat = false;
        for(int j=0; j<D; j++)
        {
            if(eat[j].people == sick[i].people && 
                eat[j].cheeseIdx == idx && 
                eat[j].time < sick[i].time) //아픈 사람이 아프기 전에 먹음.
                {
                    isEat = true;
                    break;
                }           
        }
        if(!isEat) //안 먹음
            isEveryone = false; //모든 아픈 사람이 먹지 않음
    }

    return isEveryone; //아픈 사람이 먹은 적 없거나, 아프고 난 뒤에 먹음
}

int main() {
    int maxCnt = 0;

    cin >> N >> M >> D >> S;
    for(int i=0; i<D; i++) //치즈를 먹은 기록
        cin >> eat[i].people >> eat[i].cheeseIdx >> eat[i].time;

    for(int i=0; i<S; i++) //배가 아픈 기록
        cin >> sick[i].people >> sick[i].time;

    //아픈 사람이 먹은 치즈를 찾기
    for(int i=0; i<S; i++)
    {
        int sickPeople = sick[i].people; //아픈 사람
        int sickTime = sick[i].time; //아픈 시간

        for(int j=0; j<D; j++)
        {
            int rotCheese = 0;
            if(eat[j].people == sickPeople && eat[j].time < sickTime) //아픈 사람이 아프기 전에 먹은 치즈
            {
                rotCheese = eat[j].cheeseIdx; //상한 치즈일 가능성
                int cnt = 0;
                if(EatCheese(rotCheese)) //다른 모든 아픈 사람이 상한 가능성 치즈를 먹었을 경우,
                {
                    for(int i=0; i<D; i++)
                    {
                        if(eat[i].cheeseIdx == rotCheese)
                            cnt++;
                    }
                    if(maxCnt < cnt) //최대값
                        maxCnt = cnt;
                }
            }
        }
    }

    cout << maxCnt;

    return 0;
}