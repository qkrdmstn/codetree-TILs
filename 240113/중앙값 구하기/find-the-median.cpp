#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a > b)
    {
        if(a<c)
            printf("%d", a);
        else
        {
            if(b<c)
                printf("%d", b);
            else    
                printf("%d", c);

        }
    }
    else
    {
        if(a>c)
            printf("%d", a);
        else
        {
            if(b>c)
                printf("%d", c);
            else   
                printf("%d", b);
        }
    }
    return 0;
}