#include <iostream>
using namespace std;

int main() {
    int ax1, ay1, ax2, ay2;
    int bx1, by1, bx2, by2;
    int mx1, my1, mx2, my2;
    int arr[2000][2000] = {0};

    cin >> ax1 >> ay1 >> ax2 >> ay2;
    cin >> bx1 >> by1 >> bx2 >> by2;
    cin >> mx1 >> my1 >> mx2 >> my2;

    ax1 += 1000; ay1 += 1000; ax2 += 1000; ay2 += 1000;
    bx1 += 1000; by1 += 1000; bx2 += 1000; by2 += 1000;
    mx1 += 1000; my1 += 1000; mx2 += 1000; my2 += 1000;
    
    for(int i=ax1; i<ax2; i++)
    {
        for(int j=ay1; j<ay2; j++)
        {
            arr[i][j]=1;
        }
    }

    for(int i=bx1; i<bx2; i++)
    {
        for(int j=by1; j<by2; j++)
        {
            arr[i][j]=2;
        }
    }

    for(int i=mx1; i<mx2; i++)
    {
        for(int j=my1; j<my2; j++)
        {
            arr[i][j]=3;
        }
    }

    int s = 0;
    for(int i=0; i<2000; i++)
    {
        for(int j=0; j<2000; j++)
        {
            if(arr[i][j] == 1 || arr[i][j] == 2)
                s++;
        }
    }

    cout << s;
    return 0;
}