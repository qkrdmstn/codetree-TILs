#include <iostream>

int main() {
    int n=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2*i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}