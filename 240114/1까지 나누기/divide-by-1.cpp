#include <iostream>

int main() {
    int n;
    scanf("%d", &n);

    int i=1;
    while(n/i>1)
    {
        n/=i;
        i++;
    }

    printf("%d", i);
    return 0;
}