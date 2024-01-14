#include <iostream>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        printf("*");
        if((i+1)%2==0)
        {
            for(int j=0; j<i; j++)
                printf(" *");
        }
        printf("\n");

    }
    return 0;
}