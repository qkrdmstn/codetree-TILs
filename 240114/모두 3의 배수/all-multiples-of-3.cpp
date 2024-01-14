#include <iostream>

int main() {
   int a[5];
   bool flag true;

   for(int i=0; i<5; i++)
   {
        scanf("%d", &a[i]);
        if(a[i] % 3 != 0)
        {
            flag = false;
            break;
        }
   }

    if(flag)
        printf("1");
    else
        printf("0");
    return 0;
}