#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 5;
    int b = 6;
    int c = 7;
    int temp, temp1;

    temp = b;
    b = a;
    temp1 = c;
    c = temp;  
    a = temp1;

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    return 0;
}