#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[1004] = {0};
    int min = 99999999;

    //입력
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> arr[i];

    for(int i=1; i<=n; i++) //i번 방에서 시작
    {
        int sum = 0;
        for(int j=0; j<n; j++) //j만큼 반시계방향으로 이동한 방
        {
            int curRoom = (i+j)%n + 1;
            int dist = arr[curRoom] * j;
            sum += dist;
        }
        if(sum < min) //최소값
            min = sum;
    }

    //출력
    cout << min;
    return 0;
}