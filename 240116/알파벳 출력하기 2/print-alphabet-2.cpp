#include <iostream>

int main() {
    int n, cnt=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
            printf("  ");
        for(int j=0; j<n-i; j++)
        {
            printf("%c ", 'A'+ cnt);
            cnt++;
            if(cnt > 26)
                cnt = 0;
        }
        printf("\n");
    }
    return 0;
}