#include <iostream>

int main() {
    int a[10], n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n; i++)
    {
        if(a[i] % 3 == 0)
            printf("%d\n", a[i]);
    }
    return 0;
}