#include <iostream>
using namespace std;

int main() {
    int N, C, G, H;
    int Ta[1000] = {0};
    int Tb[1000] = {0};
    int maxSum = 0;

    cin >> N >> C >> G >> H;
    for(int i=0; i<N; i++)
        cin >> Ta[i] >> Tb[i];

    for(int t=0; t<=1000; t++){
        
        int workSum = 0;
        for(int i=0; i<N; i++){        
            if(t < Ta[i])
                workSum += C;
            else if(t >= Ta[i] && t <= Tb[i])
                workSum += G;
            else if(t > Tb[i])
                workSum += H;
        }
        if(workSum > maxSum)
            maxSum = workSum;
    }

    cout << maxSum;
    return 0;
}