#include <iostream>

int main() {
    int n, cnt=1;
    int a[10][10];

    scanf("%d", &n);

    for(int i=n-1; i>=0; i--)
    {
        if((i-n-1) % 2 == 0)
        {
            for(int j=n-1; j>=0; j--)
            {
                a[j][i] = cnt;
                cnt++;
            }
        }
        else
        {
            for(int j=0; j<n; j++)
            {
                a[j][i] = cnt;
                cnt++;
            }
        }

    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}