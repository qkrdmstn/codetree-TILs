#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
string name;
int score;

public:
Student(string _name = "a", int _score = 0)
{
    name = _name;
    score = _score;
}

void Print()
{
    cout << name << " " << score;
}
};

int main() {
    Student s[5];
    int min = 100;
    int idx = 0;

    for(int i=0; i<5; i++)
    {
        string name;
        int score;
        cin >> name >> score;

        s[i] = Student(name, score);
        if(s[i].score < min)
        {
            min = s[i].score;
            idx = i;
        }
    }

    s[idx].Print();
    return 0;
}