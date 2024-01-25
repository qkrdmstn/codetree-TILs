#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[20];

    cin >> n;
    int i=0;
    while (true) {
        if(n < 2) {
            arr[i++] = n;
            break;
        }
    
        arr[i++] = n % 2;
        n /= 2;
    }

    for(int j=i-1; j>=0; j--)
        cout << arr[j];

    return 0;
}