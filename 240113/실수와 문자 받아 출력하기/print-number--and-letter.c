#include <stdio.h>

int main() {
    //변수 선언
    char c;
    float a, b;

    //입력
    scanf("%c %f %f", &c, &a, &b);
    
    //출력
    printf("%c\n%.2f\n%.2f", c, a, b);
    return 0;
}