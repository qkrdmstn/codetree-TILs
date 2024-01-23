#include <iostream>
#include <string>
using namespace std;

class A
{
public:
string code;
char place;
int time;

public:
A(string _code, char _place, int _time)
{
    code = _code;
    place = _place;
    time = _time;
}

~A()
{ }

void Print()
{
    cout << "secret code : " << code << endl;
    cout << "meeting point : " << place << endl;
    cout << "time : " << time;
}
};

int main() {
    string c;
    char p;
    int t;

    cin >> c >> p >> t;

    A a(c, p, t);
    a.Print();
    return 0;
}