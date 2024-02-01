#include <iostream>
#include <string>
using namespace std;

string BiTrans(int dec) //10진수 -> 2진수 변환
{
    string temp;
    string result;
    while(dec > 0)
    {
        char num;
        num = dec%2;
        dec /= 2;
        temp += to_string(num);
    }

    for(int i=0; i<temp.length(); i++)
    {
        int j=temp.length() - 1 - i;
        result += temp[j]; 
    }

    return result;
}

string ChangeNum(string str, int index) //2진수 한자리 변환
{
    string result = str;
    
    if(result[index] == '0')
        result[index] = '1';
    else if(result[index] == '1')
        result[index] = '0';

    return result;
}

int main() {
    string a;
    int max = 0;

    cin >> a;
    int length = a.length();
    int decimal = 0;

    while(true)
    {
        string binary;
        binary = BiTrans(decimal); //2진수로 변환 
        if(length < binary.length()) //변환한 2진수가 주어진 수보다 길면 break;
            break;
        
        for(int j=0; j<binary.length(); j++)
        {
            if(ChangeNum(binary, j) == a) //모든 자리를 변환해보면서 같은지 확인
            {
                if(decimal > max) //최대값 찾기
                    max = decimal;
                break;
            }
        }
        decimal++; //10진수 증가
    }
   
    //출력
    cout << max;
    return 0;
}