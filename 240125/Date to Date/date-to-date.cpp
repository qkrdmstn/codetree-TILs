#include <iostream>
using namespace std;

int main() {
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int days = 0;
    for(int i=m1; i<m2; i++)
        days += num_of_days[i];

    days += d2-d1;

    cout << days;
    return 0;
}