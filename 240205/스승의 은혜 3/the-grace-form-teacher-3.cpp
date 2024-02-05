#include <iostream>
#include <algorithm>
using namespace std;

struct Student
{
    int present = 0;
    int delivCost = 0;
    int sum;
    bool buy = false;
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
        B -= students[i].sum; //합계 가격이 낮은 것 순서대로 구매
        students[i].buy = true;

        if(!discount && B < 0) //예산 초과
        {
            B += students[i].sum; //마지막에 산 선물 환불

            for(int j=0; j<N; j++) //할인된 가격 재설정
                students[j].sum = students[j].present/2 + students[j].delivCost;
            
            sort(students, students + N, Compare); //할인된 가격 순으로 오름차순 정렬

            for(int j=0; j<N; j++)
            {
                if(!students[j].buy) //아직 구매하지 않은 것 중
                    B -= students[j].sum; //가장 앞에 있는 것 구매    
            }
            discount = true;
        }

        if(B >= 0)
            i++;
    }

    cout << i;
    return 0;
}