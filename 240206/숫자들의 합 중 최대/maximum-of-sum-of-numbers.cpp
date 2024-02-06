#include <iostream>
using namespace std;

int DigitSum(int n)
{
    int sum = 0;
    while(n > 0){
        sum += n%10;
        n/=10;
    }

    return sum;
}
int main() {
    int x, y;
    
    cin >> x >> y;

    int maxSum = 0;
    for(int i=x; i<=y; i++){
        int sum = DigitSum(i);
        if(sum > maxSum)
            maxSum = sum;    
    }

    cout << maxSum;
    return 0;
}