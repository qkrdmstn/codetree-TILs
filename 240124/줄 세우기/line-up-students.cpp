#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Student
{
public:
int height, weight, number;

Student(int _h = 0, int _w = 0, int _n = -1)
{
    height = _h;
    weight = _w;
    number = _n;
}

void Print()
{
    cout << height << " " << weight << " " << number << endl;
}
};

bool Compare(Student a, Student b)
{
    if(a.height == b.height)
    {
        if(a.weight == b.weight)
            return a.number < b.number;
        return a.weight > b.weight;
    }
    return a.height > b.height;
}


int main() {
    int n;
    Student students[1000];

    cin >> n;
    for(int i=0; i<n; i++)
    {
        int _h, _w;
        cin >> _h >> _w;

        students[i] = Student(_h, _w, i+1);
    }

    sort(students, students + n, Compare);

    for(int i=0; i<n; i++)
        students[i].Print();
    return 0;
}