#include <iostream>
#include <string>
using namespace std;

int n;
string str;
int GetClosestDist(string str)
{
    int minDist = 100;
    for(int i=0; i<n-1; i++){
        if(str[i] != '1') continue;
        int dist = 1;
        while(str[i+dist] == '0'){
            dist++;
            if(i+dist >= n)
                dist = 100;
        }
        if(dist < minDist)
            minDist = dist;
    }
    return minDist;
}

int main() {
    //입력
    cin >> n;
    cin >> str;

    int maxDist = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j) continue;
            if(str[i] == '1' || str[j] == '1') continue;
            
            string temp = str;
            temp[i] = '1';
            temp[j] = '1';

            int closestDist = GetClosestDist(temp);
            if(closestDist > maxDist)
                maxDist = closestDist;
        }
    }

    cout << maxDist;
    return 0;
}