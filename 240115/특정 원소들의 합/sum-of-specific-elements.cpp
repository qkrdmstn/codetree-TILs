#include <iostream>

int main() {
    int a[4][4];
    int sum=0;

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            scanf("%d", &a[j][i]);
        }
    }

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<=i; j++)
        {
            sum += a[j][i];
        }
    }

    printf("%d", sum);
    return 0;
}