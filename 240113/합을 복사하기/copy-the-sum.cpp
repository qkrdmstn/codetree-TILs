#include <iostream>

int main() {
    //변수 선언
    int a = 1, b = 2, c = 3;
    int sum = a + b + c;

    //합 복사
    a = b = c = sum;

    //출력
    printf("%d %d %d", a, b, c);
    return 0;
}