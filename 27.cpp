#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int A, B;
    char ans[5], input[5];
    cin >> ans;
    while(1){
        A = 0;
        B = 0;
        cin >> input;
        if(!strcmp(input, "0000"))
            break;
        for(int i=0; i<4; i++){
            if(strchr(ans, input[i]))
                B++;
            if(ans[i] == input[i]){
                A++;
                B--;
            }
        }
        cout << A << "A" << B << "B" << endl;


    }

    return 0;

}
