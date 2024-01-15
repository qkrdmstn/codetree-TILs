#include <iostream>

int main() {
    int n, cnt=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(cnt >= 9)
                cnt=0;
            printf("%d", 9-cnt);
            cnt++;
        }
        printf("\n");
    }
    return 0;
}