#include <iostream>

int main() {
    int n=0, cnt=0;

    while(true)
    {
        scanf("%d", &n);
        if(n % 2 == 0)
            n = 3 * n + 1;
        else
            n = 2*n + 2;
        cnt++;

        if(n>=1000)
            break;
    }

    printf("%d", cnt);
    return 0;
}