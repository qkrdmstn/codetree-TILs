#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, sum = 0, cnt = 0;
    string str[20];
    char c;

    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> str[i];
    }
    cin >> c;

    for(int i=0; i<n; i++)
    {
        if(str[i][0] == c)
        {
            sum+=str[i].length();
            cnt++;
        }         
    }
    printf("%d %.2f", cnt, (float)sum/cnt);
    return 0;
}