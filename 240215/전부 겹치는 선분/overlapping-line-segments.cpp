#include <iostream>
using namespace std;

bool IsOverlap(int a, int b, int c, int d)
{
    if(a<c && b<c)
        return false;
    else if(c<a && d<a)
        return false;
    return true;
}

int main() {
    int n;
    int arr[101] = {0};

    cin >> n;
    for(int i=0; i<n; i++){
        int x1, x2;
        cin >> x1 >> x2;
        for(int j=x1; j<=x2; j++){
            arr[j]++;
        }
    }

    bool flag = false;
    for(int i=0; i<=100; i++){
        if(arr[i] == n){
            flag = true;
            break;
        }
    }

    if(flag)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}