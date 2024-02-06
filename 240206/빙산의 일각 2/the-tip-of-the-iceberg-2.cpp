#include <iostream>
using namespace std;

//변수 선언
int n;
int iceBerg[100][1000] = {{0},{0}};
int maxH = 0;
int countIce(int surface)
{
    bool ice = false;
    bool beforeIce = false;
    int cnt = 0;

    for(int i=0; i<n; i++){
        if(iceBerg[i][surface+1] == 0){
            beforeIce = ice;
            ice = false;
        }
        else if(iceBerg[i][surface+1] == 1){
            beforeIce = ice;
            ice = true;            
        }

        if(ice && !beforeIce) //이전 위치는 빙산X 현재 위치는 빙산O일 때, 덩어리 count
            cnt++;
    }

    return cnt;
}

int main() {
    //입력
    cin >> n;
    for(int i=0; i<n; i++){
        int h;
        cin >> h;
        for(int j=1; j<=h; j++)
            iceBerg[i][j] = 1;

        if(h > maxH)
            maxH = h;
    }

    //모든 해수면 높이에 대해 덩어리 count
    int maxCnt = 0;
    for(int i=0; i<=maxH; i++){
        int cnt = countIce(i);
        if(cnt > maxCnt) //최대값
            maxCnt = cnt;
    }

    //출력
    cout << maxCnt;
    return 0;
}