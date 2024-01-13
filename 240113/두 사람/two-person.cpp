#include <iostream>

int main() {
    int a[2];
    char g[2];

    scanf("%d %c", &a[0], &g[0]);
    scanf("%d %c", &a[1], &g[1]);

    if((a[0] >= 19 && g[0] == 'M') || (a[1] >= 19 && g[1] == 'M'))
        printf("1");
    else
        printf("0");
    return 0;
}