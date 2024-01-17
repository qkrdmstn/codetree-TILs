#include <iostream>
using namespace std;

void PrintStar()
{
    cout << "**********" << endl;
}

int main() {
    for(int i=0; i<5; i++)
        PrintStar();
    return 0;
}