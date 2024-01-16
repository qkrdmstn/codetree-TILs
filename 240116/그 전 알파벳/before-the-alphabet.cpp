#include <iostream>
using namespace std;

int main() {
    char a;
    scanf("%c", &a);
    
    if(a == 'a')
        cout << 'z';
    else
        printf("%c", a-1);
    return 0;
}