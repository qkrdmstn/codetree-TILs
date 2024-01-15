#include <iostream>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    for(int i=1; i<=4; i++)
    {
        for(int j=b; j>=a; j--)
        {
            printf("%d * %d = %d", j, 2*i, 2*j*i);
            if(j != a)
                printf(" / ");
        }
        printf("\n");
    }
    return 0;
}