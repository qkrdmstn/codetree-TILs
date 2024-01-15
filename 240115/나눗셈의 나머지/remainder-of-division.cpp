#include <iostream>

int main() {
    int a, b, sum=0;
    int n[10] = {0};
    scanf("%d %d", &a, &b);

    while(a>1)
    {
        n[a%b]++;
        a/=b;
    }

    for(int i=0; i<b; i++)
        sum += n[i]*n[i];
    printf("%d", sum);
    return 0;
}