#include <iostream>

int main() {
    int n, cnt=0, index;
    int a[100];

    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] == 2)
        {
            cnt++;
            if(cnt==3)
                index = i;
        }

    }

    printf("%d", index + 1);
    return 0;
}