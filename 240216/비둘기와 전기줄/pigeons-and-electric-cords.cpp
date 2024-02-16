#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 0;
    int pos[11];
    
    for(int i=0; i<11; i++)
        pos[i] = -1;

    cin >> n;
    for(int i=0; i<n; i++){
        int index;
        cin >> index;

        int temp = pos[index]; //이전 위치
        cin >> pos[index];

        if(temp != -1 && pos[index] != temp){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}