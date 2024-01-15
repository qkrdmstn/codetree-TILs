#include <iostream>

int main() {
    int n;
    scanf("%d", &n);

    int a[10][10];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==0 || j==0)
                a[i][j] = 1;
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==0 || j==0)
                continue;
            else
            {
                a[i][j]=a[i-1][j] + a[i][j-1] + a[i-1][j-1];
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