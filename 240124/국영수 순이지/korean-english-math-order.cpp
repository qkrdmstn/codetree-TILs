#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Student
{
public:
string name;
int kor, eng, math;

Student(string _name = "a", int _kor = 0, int _eng = 0, int _math = 0)
{
    name = _name;
    kor = _kor;
    eng = _eng;
    math = _math;
}

void Print()
{
    cout << name << " " << kor << " " << eng << " " << math << endl;
}
};

bool Compare(Student a, Student b)
{
    if(a.kor == b.kor)
    {
        if(a.eng == b.eng)
            return a.math > b.math;
        return a.eng > b.eng;
    }
    return a.kor > b.kor;
}

int main() {
    int n; 
    Student students[10];

    cin >> n;
    for(int i=0; i<n; i++)
    {
        string _name;
        int _kor, _eng, _math;
        cin >> _name >> _kor >> _eng >> _math;

        students[i] = Student(_name, _kor, _eng, _math);
    }

    sort(students, students + n, Compare);

    for(int i=0; i<n; i++)
        students[i].Print();
    return 0;
}