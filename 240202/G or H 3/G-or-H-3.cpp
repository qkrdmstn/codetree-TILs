#include <iostream>
#include <algorithm>
using namespace std;

struct People
{
    int x = 0;
    char c;
};

bool Compare(People a, People b)
{
    return a.x < b.x;
}

int main() {
    int n, k;
    People people[101];

    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
        cin >> people[i].x;
        cin >> people[i].c;
    }

    sort(people, people + n, Compare);

    for(int i=0; i<n; i++)
    {
        cout << people[i].x <<" ";
        cout << people[i].c <<endl;
    }

    int max = 0;
    for(int i=0; i<n-k; i++)
    {
        int sum = 0;
        for(int j=i; j<i+k; j++)
        {
            if(people[j].c == 'G')
                sum += 1;
            else if(people[j].c == 'H')
                sum += 2;
        }
        if(sum > max)
            max = sum;
    }

    cout << max;
    return 0;
}