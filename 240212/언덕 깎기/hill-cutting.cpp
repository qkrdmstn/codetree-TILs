#include <iostream>
using namespace std;

int main() {
    int n;
    int height[1000] = {0};

    //입력
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> height[i];

    int minCost = 100000000;
    for(int i=0; i<=100; i++){
        int cost = 0;
        for(int j=0; j<n; j++){
            if(height[j] > i+17)
                cost += (height[j] - (i + 17))*(height[j] - (i + 17));
            if(height[j] < i)
                cost += (height[j] - i)*(height[j] - i);
        }
        if(cost < minCost)
            minCost = cost;
    }

    cout << minCost;
    return 0;
}