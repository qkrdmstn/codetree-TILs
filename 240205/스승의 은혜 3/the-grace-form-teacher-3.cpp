#include <iostream>
#include <algorithm>
using namespace std;

struct Student
{
    int present = 0;
    int delivCost = 0;
    int sum;
};

bool Compare(Student a, Student b)
{
    return a.sum < b.sum;
}

int main() {
    //변수 선언
    int N, B;
    Student students[1000];

    //입력
    cin >> N >> B;
    for(int i=0; i<N; i++)
    {
        cin >> students[i].present >> students[i].delivCost;
        students[i].sum = students[i].present + students[i].delivCost;
    }
    
    sort(students, students + N, Compare); //배송비 + 선물 가격 합계로 오름차순 정렬

    int i=0;
    bool discount = false;
    while(B > 0)
    {
        B -= students[i].sum;

        if(!discount && B < 0)
        {
            B += students[i].present/2;
            discount = true;
        }

        if(B >= 0)
            i++;
    }

    cout << i;
    return 0;
}