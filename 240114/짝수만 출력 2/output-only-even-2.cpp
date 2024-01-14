#include <iostream>

int main() {
    int b,a;
    scanf("%d %d", &b, &a);
    
    for(int i=b; i>=a; i--)
    {
        if(i % 2==0)
            printf("%d ", i);
    }
    return 0;
}