#include <iostream>

int main() {
    int n;
    scanf("%d", &n);

    int a[10][10];
    for(int i=0; i<n; i++)
    {
        a[i][0] = 1;
        a[0][i] = 1;
    }

    for(int i=1; i<n; i++)
    {
        for(int j=1; j<n; j++)
        {
                a[i][j]=a[i-1][j] + a[i][j-1] + a[i-1][j-1];
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