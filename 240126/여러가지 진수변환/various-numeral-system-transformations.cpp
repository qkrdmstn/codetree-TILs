#include <iostream>
using namespace std;

int main() {
    int N, B;
    cin >> N >> B;

    int a[10] = {0};
    int i=0;
    while(true)
    {
        if(N < B)
        {
            a[i++] = N;
            break;
        }
        a[i++] = N%B;
        N /= B;

    }

    for(int j=i-1; j>=0; j--)
        cout << a[j];
    return 0;
}