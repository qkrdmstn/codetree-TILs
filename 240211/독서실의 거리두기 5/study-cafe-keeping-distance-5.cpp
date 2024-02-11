#include <iostream>
#include <string>
using namespace std;

int n;
string arr;
int GetDist(string str){

    int minDist = n;
    for(int i=0; i<n; i++){
        if(str[i] == '1'){
            int dist = 1;
            while(str[i+dist] != '1'){
                dist++;
                if(i+dist >= n){
                    dist = n;
                    break;
                }
            }
            if(dist < minDist)
                minDist = dist;
        }
    }

    return minDist;
}

int main() {
    cin >> n;
    cin >> arr;

    int maxDist = 0;
    for(int i=0; i<n; i++){
        string str = arr;
        if(str[i] == '1')   continue;
        str[i] = '1';
        
        int minDist = GetDist(str);
        if(minDist > maxDist)
            maxDist = minDist;
    }

    cout << maxDist;
    return 0;
}