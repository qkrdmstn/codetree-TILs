#include <iostream>
#include <string>
using namespace std;

class Product
{
public:
string name;
int code;

Product(string _name = "codetree", int _code = 50)
{
    name = _name;
    code = _code;
}

void Print()
{
    cout << "product " << code << " is " << name << endl;
}
};

int main() {
    string _name;
    int _code;
    Product products[2];
    
    cin >> _name >> _code;

    products[1] = Product(_name, _code);

    for(int i=0; i<2; i++)
        products[i].Print();
    return 0;
}