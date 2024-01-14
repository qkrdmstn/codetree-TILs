#include <iostream>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<2*n-1; i++)
    {
        if(i<n)
        {
            for(int j=0; j<i+1; j++)
                printf("*");
            printf("\n");
        }
        else
        {
            for(int j=0; j<n -(i-n) - 1; j++)
                printf("*");
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}