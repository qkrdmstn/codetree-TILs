#include <iostream>
#include <algorithm>
using namespace std;

class Student
{
public:
    int height, weight;
    int index;

public:
    Student(int h = 0, int w = 0, int i = -1)
    {
        height = h;
        weight = w;
        index = i;
    }

    void Print()
    {
        cout << height << " " << weight << " " << index << endl;
    }

};

bool Compare(Student a, Student b)
{
    if(a.height == b.height)
        return a.weight > b.weight;
    return a.height < b.height;
}

int main() {
    int n;
    Student students[1000];

    cin >> n;
    for(int i=0; i<n; i++)
    {
        int h, w;
        cin >> h >> w;

        students[i] = Student(h, w, i+1);
    }

    sort(students, students + n, Compare);

    for(int i=0; i<n; i++)
        students[i].Print();

    return 0;
}