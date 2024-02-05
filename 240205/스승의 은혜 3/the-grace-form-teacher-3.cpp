#include <iostream>
#include <algorithm>
using namespace std;

struct Student
{
    int num;
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
        students[i].num = i;
    }

    int maxCnt = 0;
    for(int i=0; i<N; i++) //할인 받을 학생 번호
    {
        int cost = B;
        for(int j=0; j<N; j++)
        {
            if(students[j].num == i)
                students[j].sum = students[j].present/2 + students[j].delivCost; //할인
            else
                students[j].sum = students[j].present + students[j].delivCost;                   
        }

        sort(students, students + N, Compare); //배송비 + 선물 가격 합계로 오름차순 정렬

        int k=0;
        while(cost > 0)
        {
            cost -= students[k].sum; //구매
            if(cost >= 0) //구매 성공
                k++;
        }
        
        if(k > maxCnt) //최대값
            maxCnt = k;
    }

    //출력
    cout << maxCnt;
    return 0;
}