#include <iostream>
using namespace std;

int arr[15] = {0};
bool isCondition(int a, int b, int c, int d)
{
    if(a==b || a==c || a==d || b==c || b==d || c==d) return false;

    bool result[15] = {false};
    int A = arr[a], B = arr[b], C = arr[c], D = arr[d];
    int AB = A+B, BC = B+C, CD = C+D, DA = D+A, AC = A+C, BD = B+D;
    int ABC = A+B+C, ABD = A+B+D, ACD = A+C+D, BCD = B+C+D;
    int ABCD = A+B+C+D;

    for(int i=0; i<15; i++){
        if(i==a || i==b || i==c || i==d) continue;
        
        if(arr[i] == AB || arr[i] == BC || arr[i] == CD ||
            arr[i] == DA || arr[i] == AC || arr[i] == BD)
            result[i] = true;
        
        if(arr[i] == ABC || arr[i] == ABD || arr[i] == ACD ||arr[i] == BCD
            ||arr[i] == ABCD)
            result[i] = true;
    }

    bool flag = true;
    for(int i=0; i<15; i++){
        if(i==a || i==b || i==c || i==d) continue;
        if(!result[i]) flag = false;
    }

    return flag;
}

int main() {
    
    for(int i=0; i<15; i++)
        cin >> arr[i];

    for(int a=0; a<15; a++){
        for(int b=0; b<15; b++){
            for(int c=0; c<15; c++){
                for(int d=0; d<15; d++){
                    if(!(arr[a] <= arr[b] && arr[b] <= arr[c] && arr[c] <= arr[d])) continue;
                    if(isCondition(a,b,c,d)){
                        cout << arr[a] << " " << arr[b] << " " << arr[c] << " " << arr[d] <<endl;
                        return 0;
                    }

                }
            }
        }
    }
    return 0;
}