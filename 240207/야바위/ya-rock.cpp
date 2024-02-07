#include <iostream>
using namespace std;

void Change(int a, int b, int cup[])
{
    int temp = cup[a];
    cup[a] = cup[b];
    cup[b] = temp;
}

int main() {
    //변수 선언
    int n;
    int a[100] = {0};
    int b[100] = {0};
    int c[100] = {0};
    
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i] >> b[i] >> c[i];
    
    int maxScore = 0;
    for(int i=1; i<=3; i++){
        int cup[4] = {0};
        cup[i] = 1;
        int score = 0;
        for(int j=0; j<n; j++){
            Change(a[j], b[j], cup);
            if(cup[c[j]] == 1)
                score++;
        }
        if(score > maxScore)
            maxScore = score;
    }

    cout << maxScore;
    return 0;
}