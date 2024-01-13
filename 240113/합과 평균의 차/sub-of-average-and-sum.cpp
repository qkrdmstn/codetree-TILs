#include <iostream>

int main() {
    int a, b, c;
    int sum, avg;
    scanf("%d %d %d", &a, &b, &c);
    sum = a+b+c;
    avg = sum/3;
    printf("%d\n%d\n%d", sum, avg, sum-avg);
    return 0;
}