#include <iostream>
using namespace std;


int main(){
    int year;
    cin >> year;
    
    if(!(year%400))
        cout << "Bissextile Year\n";
    else if(!(year%100))
        cout << "Common Year\n";
    else if(!(year%4))
        cout << "Bissextile Year\n";
    else
        cout << "Common Year\n";


    return 0;

}
















