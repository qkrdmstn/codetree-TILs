#include <iostream>
using namespace std;

int main() {
    //변수 선언
    int n;
    int arr[200][200] = {0};

    //입력 및 사각형 표시
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        //offset
        x1+=100;
        x2+=100;
        y1+=100;
        y2+=100;
        
        for(int j=x1; j<x2; j++)
        {
            for(int k=y1; k<y2; k++)
            {
                arr[j][k]++;
            }
        }
    }

    //넓이 계산
    int s = 0;
    for(int j=0; j< 200; j++)
    {
        for(int k=0; k<200; k++)
        {
            if(arr[j][k] > 0)
                s++;
        }
    } 

    //출력
    cout << s;
    return 0;
}