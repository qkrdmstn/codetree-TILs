#include <iostream>
#include <string>
using namespace std;

int main() {
    int m1 = 5, d1 = 11, m2 = 4, d2 = 26;
    //cin >> m1 >> d1 >> m2 >> d2;

    string week[7] = {"Mon", "Tue", "Wed" , "Thu", "Fri","Sat", "Sun"};
    int day_of_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int days = 0;
    if(m1 <= m2)
    {
        for(int i=m1; i<m2; i++)
            days += day_of_month[i];
        days += d2 - d1;
    }
    else
    {
        for(int i=m2; i<m1; i++)
            days -= day_of_month[i];
        days -= d1 - d2;
    }

    if(days % 7 <= 0)
        days = 7 + (days%7);

    cout << week[days % 7];
    return 0;
}