#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[200] = {0};
    int x1, x2;

    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x1 >> x2;
        x1+=100;
        x2+=100;

        for(int j=x1; j<x2; j++)
            arr[j]++;
    }

    int max = 0;
    for(int i=0; i<200; i++)
    {
        if(max < arr[i]);
            max = arr[i];
    }
    return 0;
}