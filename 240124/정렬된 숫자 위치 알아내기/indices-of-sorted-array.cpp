#include <iostream>
#include <algorithm>
using namespace std;

class Num
{
public:
    int num;
    int index; //입력 순서
    int order; //오름차순 순서
public:
    Num(int _n = 0, int _i = 0)
    {
        num = _n;
        index = _i;
    }

    void Print()
    {
        cout << order << " ";
    }
};

bool UpSort(Num a, Num b) //오름차수 정렬
{
    if(a.num == b.num)
        return a.index < b.index;
    return a.num < b.num;
}

bool InputSort(Num a, Num b) //입력 순서 정렬
{
    return a.index < b.index;
}

int main() {
    Num numbers[1000]; //변수 및 객체 선언
    int n;

    cin >> n;
    for(int i=0; i<n; i++)
    {
        int _number;
        cin >> _number;

        numbers[i] = Num(_number, i+1);
    }

    sort(numbers, numbers + n, UpSort); //오름차수 정렬, 객체 변수 입력
    for(int i=0; i<n; i++)
        numbers[i].order = i+1;

    sort(numbers, numbers + n, InputSort); //입력 순서 정렬 및 출력
    for(int i=0; i<n; i++)
        numbers[i].Print();
    return 0;
}