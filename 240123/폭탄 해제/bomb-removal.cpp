#include <iostream>
#include <string>
using namespace std;

class Bomb
{
public:
string code;
char color;
int sec;

Bomb(string _code = "asd", char _color = 'R', int _sec = 0)
{
    code = _code;
    color = _color;
    sec = _sec;
}

void Print()
{
    cout << "code : " << code << endl;
    cout << "color : " << color << endl;
    cout << "second : " << sec << endl;
}
};

int main() {
    string _code;
    char _color;
    int _sec;
    
    cin >> _code >> _color >> _sec;
    Bomb bomb1(_code, _color, _sec);

    bomb1.Print();
    return 0;
}