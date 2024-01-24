#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Info
{
public:
string name;
int h;
float w;

Info(string _n = "asd", int _h = 0, float _w = 0)
{
    name = _n;
    h = _h;
    w = _w;
}

void Print()
{
    cout << name << " ";
    printf("%d %.1f\n", h, w);
}
};

bool NameSort(Info a, Info b)
{
    return a.name < b.name;
}

bool HeightSort(Info a, Info b)
{
    return a.h > b.h;
}

int main() {
    Info info[5];

    for(int i=0; i<5; i++)
    {
        string n;
        int h;
        float w;
        cin >> n >> h >> w;

        info[i] = Info(n, h, w);
    }

    sort(info, info + 5, NameSort);
    cout << "name" << endl;
    for(int i=0; i<5; i++)
        info[i].Print();

    cout << endl;

    sort(info, info + 5, HeightSort); 
    cout << "height" << endl;
    for(int i=0; i<5; i++)
        info[i].Print();
    return 0;
}