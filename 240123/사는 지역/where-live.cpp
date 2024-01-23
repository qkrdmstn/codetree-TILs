#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Information
{
public:
string name;
int addr1, addr2;
string city;

public:
Information(string _name = "asd", int _addr1 = 0, int _addr2 = 0, string _city = "asd")
{
    name = _name;
    addr1 = _addr1;
    addr2 = _addr2;
    city = _city;
}

void Print()
{
    cout << "name " << name << endl;
    cout << "addr " << addr1 << addr2 << endl;
    cout << "city " << city << endl;
    
}
};

int main() {
    int n;
    Information info[10];
    string names[10];
    
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string _name, _city;
        int _addr1, _addr2;
        
        cin >> _name >> _addr1 >> _addr2 >> _city;
        info[i] = Information(_name, _addr1, _addr2, _city);
        names[i] = _name;
    }

    sort(names, names + n);

    for(int i=0; i<n; i++)
    {
        if(info[i].name == names[n-1])
        {
            info[i].Print();
            break;
        }
    }
    return 0;
}