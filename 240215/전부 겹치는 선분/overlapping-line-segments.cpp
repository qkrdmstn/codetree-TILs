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
    int x1[100] = {0};
    int x2[100] = {0};

    cin >> n;
    for(int i=0; i<n; i++)
        cin >> x1[i] >> x2[i];

    bool flag = true;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(!IsOverlap())
                flag = true;
        }
    }

    if(flag)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}