#include <iostream>
using namespace std;

int main(){
    int row, a, b, c, d;
    char opr;
    cin >> row;
    for(int i=0; i<row; i++){
        cin >> opr >> a >> b >> c >> d;
        if(opr == '+')
            cout << a+c << " " << b+d << "\n";
        else if(opr == '-')
            cout << a-c << " " << b-d << "\n";
        else if(opr == '*')
            cout << a*c-b*d << " " << a*d+b*c << "\n";

    }



    return 0;
}