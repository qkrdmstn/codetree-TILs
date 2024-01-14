#include <iostream>

int main() {
    int n;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
            printf("*");
        for(int k=0; k<2*i; k++)
            printf(" ");
        for(int l=0; l<n-i; l++)
            printf("*");
        printf("\n");
    }

    return 0;
}