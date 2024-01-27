#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[2000] = {0};
    int dist;
    char dir;

    //선분 표시
    cin >> n;
    int curPoint = 1000;
    for(int i=0; i<n; i++)
    {
        cin >> dist >> dir;
        if(dir == 'L')
        {
            dist *= -1;
            for(int j = curPoint + dist; j < curPoint; j++)
                arr[j]++;
        }
        else
        {
            for(int j = curPoint; j < curPoint + dist; j++)
                arr[j]++;
        }
        curPoint += dist;
    }

    //겹치는 곳 count
    int cnt = 0;
    for(int i=0; i<2000; i++)
    {
        if(arr[i] >= 2)
            cnt++;
    }

    
    //출력
    cout << cnt;
    return 0;
}