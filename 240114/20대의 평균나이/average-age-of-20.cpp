#include <iostream>

int main() {
    int age;
    int sum=0, cnt=0;

    while(true)
    {
        scanf("%d", &age);

        if(age>29 || age < 20)
            break;
        sum+=age;
        cnt++;
    }

    printf("%.2f", (float)sum/cnt);
    return 0;
}