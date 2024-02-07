#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;
    int i = c/a;
    int j = c/b;

    int maxSum = 0;
    for(int k=0; k<i; k++){
        for(int l=0; l<j; l++){
            int sum = a*k + b*l;
            if(sum > c) continue;

            if(sum > maxSum)
                maxSum = sum;
        }
    }

    cout << maxSum;
    return 0;
}