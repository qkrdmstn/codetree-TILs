#include <iostream>
#include <algorithm>
using namespace std;

int n, m, p;
char c[101];
int u[101];

int main() {

    cin >> n >> m >> p;
    for(int i=1; i<=m; i++)
        cin >> c[i] >> u[i];

    if(u[p] == 0)
        return 0;

    for(int i=65; i<65+n; i++){
        char person = i;
        bool read = false;

        for(int j=1; j<=m; j++){
            if(u[j] >= u[p] && c[j] == person)
                read = true;
        }

        if(read == false)
            cout << person << " ";
    }

    return 0;
}