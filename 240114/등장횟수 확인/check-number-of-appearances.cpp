#include <iostream>

int main() {
    int a[5];
    int cnt = 0;
    for(int i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0)
            cnt++;
    }

    printf("%d", cnt);
    return 0;
}