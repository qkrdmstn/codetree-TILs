#include <iostream>
#include <string>
using namespace std;

int main() {
    string weeks[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int daysOfMonth[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int m1, d1, m2, d2;
    string A;

    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;
    if(d1 == d2 && m1 == m2) //날짜가 같으면 return
    {
        cout << 0;
        return 0;
    }

    int index = 0; //A와 동일한 날짜로 이동
    while(A != weeks[index])
        index++;

    d1 += index;
 
    if(d1 > daysOfMonth[m1])
    {
        d1 -= daysOfMonth[m1];
        m1++;
    }

    int days = 0; //m2, d2 날짜까지 day count
    for(int i=m1; i<m2; i++)
        days += daysOfMonth[i];
    days += d2 - d1;

    cout << days / 7 + 1;
    return 0;
}