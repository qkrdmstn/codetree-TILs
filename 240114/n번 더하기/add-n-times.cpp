#include <iostream>

int main() {
    int a, n;
    scanf("%d %d", &a, &n);
    for(int i=0; i<n; i++)
    {
        a+=n;
        printf("%d\n", a);
    }
    return 0;
}