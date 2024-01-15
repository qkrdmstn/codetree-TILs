#include <iostream>

int main() {
    int n, min = 100;
    int a[10];

    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
                continue;

            int sub = a[i]-a[j];
            if(sub<0)
                sub *= -1;

            if(sub<min)
                min=sub;
        }
    }
    printf("%d", min);
    return 0;
}