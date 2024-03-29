#include <iostream>
#include <climits>
using namespace std;

int main() {
    //변수 선언
    int n, k;
    int arr[100] = {0};
    
    //입력
    cin >> n >> k;
    for(int i=0; i<n; i++)
        cin >> arr[i];

    int minCost = INT_MAX;
    for(int i=0; i<=10000; i++){ //시작점 i 설정 [i,i+k] 범위 내로 수들을 수정 
        int cost = 0;
        for(int j=0; j<n; j++){ //수정 비용 계산
            if(arr[j] > i+k)
                cost += (arr[j] - (i+k));
            if(arr[j] < i)
                cost += (i - arr[j]);
        }
        
        if(cost < minCost) //최소 비용 계산
            minCost = cost;
    }

    //출력
    cout << minCost;
    return 0;
}