#include <iostream>
#include <string>
using namespace std;

int main() {
    //변수 선언
    int n;
    string str;

    //입력
    cin >> n >> str;

    for(int i=0; i<n; i++){

        bool twice = false; 
        for(int j=0; j<=n-i; j++){
            for(int k=j+1; k<=n-i; k++){ //자기 자신을 제외하면 한 번만 더 check하면 됨.
                bool isSame = true;
                for(int l=0; l<i; l++){
                    if(str[j+l] != str[k+l])
                        isSame = false;
                }
                if(isSame) twice = true;
            }
        }

        if(twice)
            ans = i+1;
        else
            break;
    }

    //출력
    cout << ans;

    
    return 0;
}