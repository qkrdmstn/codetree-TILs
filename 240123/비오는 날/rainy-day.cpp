#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Weather
{
public:
string when, week, state;

public:
Weather(string _when = "1234-12-12", string _week = "asd", string _state = "asd")
{
    when = _when;
    week = _week;
    state = _state;
}

void Print()
{
    cout << when << " " << week << " " << state << endl;
}
};

int main() {
    int n;
    Weather weathers[100];
    string whens[100];

    cin >> n;
    int j=0;
    for(int i=0; i<n; i++)
    {
        string _when, _week, _state;

        cin >> _when >> _week >> _state;
        weathers[i] = Weather(_when, _week, _state);

        if(_state == "Rain")
            whens[j++] = _when;
    }

    sort(whens, whens + j);
    
    for(int i=0; i<n; i++)
    {
        if(whens[0] == weathers[i].when)
        {
            weathers[i].Print();
            break;
        }
    }

    return 0;
}