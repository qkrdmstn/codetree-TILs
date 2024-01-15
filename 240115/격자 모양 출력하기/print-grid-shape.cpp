#include <iostream>

int main() {
    int n, m;
    int a[10][10] = {0};
    scanf("%d %d", &n, &m);


    for(int i=0; i<m; i++)
    {
        int row,col;
        scanf("%d %d", &row, &col);

        a[row-1][col-1] = row*col;
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}