#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class People
{
public:
string name;
int h, w;

People(string _n = "asd", int _h = 0, int _w = 0)
{
    name = _n;
    h = _h;
    w = _w;
}

void Print()
{
    cout << name << " " << h << " " << w << endl;
}
};

bool Compare(People a, People b)
{
    if(a.h == b.h)
        return a.w > b.w;
    return a.h < b.h;
}

int main() {
    int n;
    People people[10];

    cin >> n;
    for(int i=0; i<n; i++)
    {
        string n;
        int h, w;
        cin >> n >> h >> w;

        people[i] = People(n, h, w);
    }

    sort(people, people + n, Compare);

    for(int i=0; i<n; i++)
        people[i].Print();
    return 0;
}