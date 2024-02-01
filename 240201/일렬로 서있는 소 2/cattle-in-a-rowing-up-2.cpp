#include <iostream>
using namespace std;

bool Condition(int a, int b, int c)
{
    return (a<=b && b<=c);
}

int main() {
    int n;
    int height[101] = {0};
    int cnt = 0;

    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> height[i];
    
    for(int i=1; i<=n; i++)
    {
        for(int k=n; k>i; k--)
        {
            for(int j=i+1; j<k; j++)
            {
                int a = height[i];
                int b = height[j];
                int c = height[k];

                if(Condition(a,b,c))
                    cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}