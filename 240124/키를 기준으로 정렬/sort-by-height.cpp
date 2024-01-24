#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class People
{
public :
string name;
int height, weight;

People(string _name = "asd", int _height = 150, int _weight = 50)
{
    name = _name;
    height = _height;
    weight = _weight;
}

void Print()
{
    cout << name << " " << height << " " << weight << endl;
}
};

bool Compare(People a, People b)
{
    return a.height < b.height;
}

int main() {
    int n;
    People people [10];

    cin >> n;
    for(int i=0; i<n; i++)
    {
        string _name;
        int _height, _weight;
        cin >> _name >> _height >> _weight;

        people[i] = People(_name, _height, _weight);
    }

    sort(people, people + n, Compare);

    for(int i=0; i<n; i++)
        people[i].Print();


    return 0;
}