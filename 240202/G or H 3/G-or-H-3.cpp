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

int Dist(People a, People b)
{
    int result = a.x - b.x;
    if(result < 0)
        result *= -1;
    return result;
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

    int max = 0;
    int i=0;

    while(true)
    {
        int j=i;
        int sum = 0;
        int dist = 0;

        while(dist <= k)
        {
            if(people[j].c == 'G')
                sum += 1;
            else if(people[j].c == 'H')
                sum += 2;

            dist += Dist(people[j], people[j+1]);
            j++;
        }
        i++;
        if(sum > max)
            max = sum;

        if(j >= n)
            break;
    }

    cout << max;
    return 0;
}