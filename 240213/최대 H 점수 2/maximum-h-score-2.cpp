#include <iostream>
using namespace std;

int n, l;
int arr[100] = {0};
bool IsPossible(int temp2[], int a) //H 점수가 가능한 원소인가.
{
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(temp2[i] >= a)
            cnt++;
    }
    if(cnt >= a)
        return true;
    else
        return false;
}

int main() {
    int max = 0;

    //입력
    cin >> n >> l;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] > max) max = arr[i];
    }

    int score = 0;
    for(int i=0; i<max; i++){
        int temp[100] = {0};
        for(int k=0; k<n; k++)
            temp[k] = arr[k];

        int cnt = 0;
        int flag = false;
        while(true){
            if(cnt > l) break;
            if(IsPossible(temp, i)){
                flag = true;
                break;
            } 

            for(int j=0; j<n; j++){
                if(temp[j] == i-1){
                    temp[j]++;
                    break;
                } 
            }
            cnt++;
        }
        if(cnt <= l && flag){
            if(i > score)
                score = i;
        }
    }

    cout << score;
    return 0;
}