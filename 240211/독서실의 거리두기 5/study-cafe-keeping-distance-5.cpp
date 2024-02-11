#include <iostream>
#include <string>
using namespace std;

int n;
string arr;
int GetDist(string str){ //가장 가까운 두 사람의 거리 반환

    int minDist = n;
    for(int i=0; i<n; i++){
        if(str[i] == '1'){
            int dist = 1;
            while(str[i+dist] != '1'){
                dist++;
                if(i+dist >= n){
                    dist = n;
                    break;
                }
            }
            if(dist < minDist)
                minDist = dist;
        }
    }

    return minDist;
}

int main() {
    cin >> n;
    cin >> arr;

    //최소거리 계산
    int maxDist = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == '1')   continue;
        arr[i] = '1';
        
        int minDist = GetDist(arr);
        if(minDist > maxDist) //최소값
            maxDist = minDist;
    }

    //출력
    cout << maxDist;
    return 0;
}