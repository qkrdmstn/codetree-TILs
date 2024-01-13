#include <stdio.h>

int main() {
    // 변수 선언
    int m, d, y;
    scanf("%d-%d-%d", &m, &d, &y);
    printf("%d.%d.%d", y, m, d);
    return 0;
}