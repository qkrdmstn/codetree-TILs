#include <iostream>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=1; i<n+1; i++)
    {
        for(int j=n; j>0; j--)
            printf("%d ", j*i);
        printf("\n");
    }
    return 0;
}