#include <iostream>
using namespace std;

int main() {
    int n;
    int x[100] = {0};
    int y[100] = {0};

    cin >> n;
    for(int i=0; i<n; i++)
        cin >> x[i] >> y[i];

    int minMaxCnt = 100;
    for(int i=0; i<=100; i+=2){ //원점 좌표 i, j (짝수)
        for(int j=0; j<=100; j+=2){
            int section[5] = {0};

            for(int k=0; k<n; k++){ //사분면 count
                if(x[k] - i > 0 && y[k] - j > 0)
                    section[1]++;
                else if(x[k] - i < 0 && y[k] - j > 0)
                    section[2]++;
                else if(x[k] - i < 0 && y[k] - j < 0)
                    section[3]++;
                else if(x[k] - i > 0 && y[k] - j < 0)
                    section[4]++;
            }

            int maxCnt = 0; //사분면 중 가장 많은 점의 개수 count
            for(int l=1; l<=4; l++){
                if(section[l] > maxCnt)
                    maxCnt = section[l];
            }

            if(maxCnt < minMaxCnt) //최소값
                minMaxCnt = maxCnt;
        }
    }

    cout << minMaxCnt;
    return 0;
}