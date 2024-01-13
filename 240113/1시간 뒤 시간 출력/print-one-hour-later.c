#include <stdio.h>

int main() {
    //변수 선언
    int h, m;

    //입력
    scanf("%d:%d", &h, &m);

    //출력
    printf("%d:%d", h+1, m);
    return 0;
}