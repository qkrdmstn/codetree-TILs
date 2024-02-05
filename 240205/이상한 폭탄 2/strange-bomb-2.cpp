#include <iostream>
using namespace std;

int main() {
    //변수 선언
    int N, K;
    int arr[101];
    int maxNum = 0;

    //입력
    cin >> N >> K;
    for(int i=0; i<N; i++)
        cin >> arr[i];

    //거리 비교
    bool flag = false;
    for(int i=0; i<N; i++)
    {
        int num;
        for(int j=i+1; j<N; j++)
        {
            if(arr[i] == arr[j] && j-i <= 3) //번호가 같고, 거리가 3 이내
                num = arr[i];
        }
        if(num > maxNum)
            maxNum = num;
    }
    
    cout << maxNum;
    return 0;
}