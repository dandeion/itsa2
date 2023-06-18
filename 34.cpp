#include <iostream>
#include <iomanip>
using namespace std;

 
int main(){
    int height, sex;

    while(cin >> height >> sex){
        if(sex == 1)
            cout << fixed << setprecision(1) << (height-80) * 0.7 << endl; 
        else
            cout << fixed << setprecision(1) << (height-70) * 0.6 << endl; 

    }  
    return 0;
}