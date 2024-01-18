#include <iostream>
#include <string>
using namespace std;

bool isYoon(int y)
{
    if(y % 4 == 0)
    {
        if(y%100 == 0)
        {
            if(y%400 == 0)
                return true;
            else
                return false;
        }
        return true;
    }
}

int LastDay(int y, int m)
{
    if(m == 2)
    {
        if(isYoon(y))
            return 29;
        else
            return 28;
    }
    else if(m == 4 || m == 6 || m == 9 || m == 11)
    {
        return 30;
    }
    
    return 31;
}

bool isExist(int y, int m, int d)
{
    if(d<=LastDay(y, m))
        return true;
    return false;
}

string Season(int m)
{
    if(m >= 3 && m <= 5)
        return "Spring";
    else if(m >= 6 && m <= 8)
        return "Summer";
    else if(m >= 9 && m <= 11)
        return "Fall";
    else
        return "Winter";
}

int main() {
    int y, m, d;
    cin >> y >> m >> d;

    if(isExist(y, m, d))
        cout << Season(m);
    else
        cout << -1;
    return 0;
}