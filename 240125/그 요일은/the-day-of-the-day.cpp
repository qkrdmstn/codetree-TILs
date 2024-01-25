#include <iostream>
#include <string>
using namespace std;

int main() {
    int cnt = 0;
    string weeks[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int daysOfMonth[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int m1, d1, m2, d2;
    string A;

    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;

    int index = 0;
    while(A != weeks[index])
        index++;

    if(d1 > daysOfMonth[m1])
    {
        d1 -= daysOfMonth[m1];
        m1++;
    }

    int days = 0;
    for(int i=m1; i<m2; i++)
        days += daysOfMonth[i];
    days += d2 - (d1 + index);

    cout << days / 7 + 1;
    return 0;
}