#include <iostream>
using namespace std;

bool isCorrect(int *a, int *b, int n2)
{
    for(int i=0; i<n2; i++)
    {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    int n1, n2; //수열 개수
    int a[100], b[100]; //수열 원소
    bool flag = false;

    cin >> n1 >> n2; //수열 개수 및 원소 입력
    for(int i=0; i<n1; i++)
        cin >> a[i];
    for(int i=0; i<n2; i++)
        cin >> b[i];
   
    for(int i=0; i<n1; i++)
    {
        if(a[i] == b[0])
        {
            if(isCorrect(&a[i], b, n2))
            {
                flag = true;
                break;
            }
        }
    }
    
    if(flag)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}