#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Student
{
public:
string name;
int score1, score2, score3;
int sum;

Student(string _name = "asd", int _score1 = 0, int _score2 = 0, int _score3 = 0)
{
    name = _name;
    score1 = _score1;
    score2 = _score2;
    score3 = _score3;

    sum = score1 + score2 + score3;
}

void Print()
{
    cout << name << " " << score1 << " " << score2 << " " << score3 << endl;
}
};

bool Compare(Student a, Student b)
{
    return a.sum < b.sum;
}

int main() {
    int n;
    Student students[10];

    cin >> n;
    for(int i=0; i<n; i++)
    {
        string _name;
        int _score1, _score2, _score3;

        cin >> _name >> _score1 >> _score2 >> _score3; 
        students[i] = Student(_name, _score1, _score2, _score3);
    }

    sort(students, students + n, Compare);

    for(int i=0; i<n; i++)
        students[i].Print();
    return 0;
}