#include <iostream>

int main() {
    int a[10], index;

    for(int i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%3==0 && index == 0)
            index = i;
    }

    printf("%d", a[index-1]); 
    return 0;
}