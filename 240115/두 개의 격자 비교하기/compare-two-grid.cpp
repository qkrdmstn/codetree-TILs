#include <iostream>

int main() {
    int n, m;
    int a[10][10];
    int b[10][10];

    //입력
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i][j] == b[i][j])
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n");
    }


    
    //출력
    
    return 0;
}