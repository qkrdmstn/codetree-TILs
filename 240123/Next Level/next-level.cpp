#include <iostream>
#include <string>
using namespace std;

class info
{
public:
string id;
int level;

info(string _id = "codetree", int _level = 10)
{
    id = _id;
    level = _level;
}

void Print()
{
    cout << "user " << id << " lv " << level << endl;
}
};

int main() {
    string id1;
    int level1;

    cin >> id1 >> level1;
    
    info a;
    info b = info(id1, level1);

    a.Print();
    b.Print();
    return 0;
}