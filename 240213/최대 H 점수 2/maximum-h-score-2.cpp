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
    for(int i=0; i<max; i++){ //H점수 가정
        int temp[100] = {0};
        for(int k=0; k<n; k++)
            temp[k] = arr[k];

        int cnt = 0;
        int flag = false;
        while(true){
            if(cnt > l) break; //더한 횟수가 l보다 크면 break
            if(IsPossible(temp, i)){ //H점수가 계산 가능하면 break
                flag = true;
                break;
            } 

            for(int j=0; j<n; j++){ //h점수보다 1 낮은 수 더하기
                if(temp[j] == i-1){
                    temp[j]++;
                    break;
                } 
            }
            cnt++; //더한 횟수 count
        }
        if(cnt <= l && flag){ //더한 횟수가 l번 이내이고, H점수 계산 가능
            if(i > score) //점수 최대값
                score = i; 
        }
    }

    //출력
    cout << score;
    return 0;
}