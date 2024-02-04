#include <iostream>
using namespace std;

struct Worker
{
    int starT;
    int endT;
};

//변수
int n;
Worker workers[100];
int CalWorkingTime(int index)
{
    int maxEndT = 0;
    bool time[1001] = {false};

    for(int i=0; i<n; i++) //운행되고 있는 시간표 작성
    {
        if(i==index) continue; //한 명 제외
        for(int j=workers[i].starT; j<workers[i].endT; j++)
            time[j] = true;
        if(workers[i].endT > maxEndT)
            maxEndT = workers[i].endT;
    }

    int cnt = 0;
    for(int i=1; i<maxEndT; i++) //시간 count
    {
        if(time[i])
            cnt++;
    }

    return cnt;
}

int main() {

    //입력
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> workers[i].starT >> workers[i].endT;

    int maxWorkingTime = 0;
    for(int i=0; i<n; i++) //i 해고
    {
        int workingTime = CalWorkingTime(i);
        if(workingTime > maxWorkingTime) //최대값
            maxWorkingTime = workingTime;
    }

    cout << maxWorkingTime;
    return 0;
}