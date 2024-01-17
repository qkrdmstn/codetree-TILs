#include <iostream>
using namespace std;

int FindMin(int a, int b, int c)
{
    int arr[3] = {a, b, c};
    int min = 111;
    for(int i=0; i<3; i++)
    {
        if(arr[i]<min)
            min = arr[i];
    }

    return min;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout<<FindMin(a, b, c);
    return 0;
}