#include <iostream>
using namespace std;

int abs(int a)
{
    if(a<0)
        a*=-1;
    return a;
}

int main() {
    int n;
    int num[100] = {0};
    int max = 0;

    cin >> n;
    for(int i=0; i<n; i++)
        cin >> num[i];
    
    for(int i=0; i<n; i++)
    {
        int sum = 0;
        for(int j=0; j<n; j++)
        {
            if(i==j)
                continue;
            if(abs(i-j) <= 1)
                continue;
            
            sum = num[i] + num[j];
            if(sum > max)
                max = sum;
        }
    }

    cout << max;
    return 0;
}