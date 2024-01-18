#include <iostream>
using namespace std;

bool isExist(int M, int D)
{
    if(M > 12 || D > 31)
        return false;

    if(M==2)
    {
        if(D > 28)
            return false;
        else
            return true;
    }
    else if(M < 8)
    {
        //1 3 5 7
        if(M % 2 == 1 && D <= 31)
            return true;
        else if(M % 2 == 0 && D<=30)
            return true;
        else
            return false;

    }
    else
    {
        //8 10 12
        if(M % 2 == 0 && D <= 31)
            return true;
        else if(M % 2 == 1 && D<=30)
            return true;
        else
            return false;
    }

}

int main() {
    int M, D;
    cin >> M >> D;

    if(isExist(M, D))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}