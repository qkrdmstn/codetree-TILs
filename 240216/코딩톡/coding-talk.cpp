#include <iostream>
#include <algorithm>
using namespace std;

int n, m, p;
char c[101];
int u[101];

bool IsRead(char name)
{
    for(int i=p; i<=m; i++){
        if(c[i] == name)
            return true;
    }
    return false;
}

int main() {

    cin >> n >> m >> p;
    for(int i=1; i<=m; i++)
        cin >> c[i] >> u[i];

    if(u[p] == 0)
        return 0;
        
    for(int i=65; i<65+n; i++){
        if(!IsRead(i)){
            char name = i;
            cout << name << " ";
        }
    }
    return 0;
}