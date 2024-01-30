#include <iostream>
using namespace std;

int main() {
    int n, m;
    int k;
    int students[101] = {0};

    cin >> n >> m;
    cin >> k;
    for(int i=0; i<m; i++)
    {
        int num;
        cin >> num;

        students[num]++;
        if(students[num] >= k)
        {
            cout << num;
            return 0;
        }
    }

    cout << "-1";
    return 0;
}