#include <iostream>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            for(int j=0; j<n; j++)
                printf("* ");
        }
        else
        {
            for(int j=0; j<i; j++)
                printf("* ");
            for(int j=0; j<n-i-1; j++)
                printf("  ");
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}