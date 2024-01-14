#include <iostream>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<2*n-1; i++)
    {
        if(i <= n-1)
        {
            for(int j=0; j<n-i-1; j++)
                printf(" ");
            for(int k=0; k<2*i+1; k++)
            {
                if(k%2 == 0)
                    printf("*");
                else
                    printf(" ");
            }
        }
        else
        {
            for(int j=0; j<i+1-n; j++)
                printf(" ");
            for(int k=0; k<2*(2*n-2 - i)+1; k++)
            {
                if(k%2 == 0)
                    printf("*");
                else
                    printf(" ");
            }
        }

        printf("\n");
    }
    return 0;
}