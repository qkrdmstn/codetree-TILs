#include <iostream>
#include <string>
using namespace std;

int main() {
    //변수 선언
    int n;
    string str;
    bool cPos[100] = {false};
    bool oPos[100] = {false};
    bool wPos[100] = {false};

    //COW 위치 check
    cin >> n;
    cin >> str;
    for(int i=0; i<n; i++)
    {
        if(str[i] == 'C')
            cPos[i] = true;
        else if(str[i] == 'O')
            oPos[i] = true;
        else if(str[i] == 'W')
            wPos[i] = true;
    }
    
    //C-O-W 순으로 찾기
    int cnt = 0;
    for(int i=0; i<n-2; i++)
    {
        if(!cPos[i]) // i번째 C
            continue;
        for(int j=i+1; j<n-1; j++)  //i보다 뒤부터 O 찾기
        {
            if(!oPos[j]) //j번째 O
                continue;
            for(int k=j+1; k<n; k++) //j보다 뒤부터 W 찾기
            {
                if(!wPos[k])
                    continue;
                cnt++;
            }
        }
    }

    //출력
    cout << cnt;
    return 0;
}