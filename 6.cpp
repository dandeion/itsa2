#include <iostream>
using namespace std;

int main(){
    int month;
    cin >> month;
    if(month <= 2 || month == 12)
        cout << "Winter\n";
    else if(month <= 5)
        cout << "Spring\n";
    else if(month <= 8)
        cout << "Summer\n";
    else if(month <= 11)
        cout << "Autumn\n";

    return 0;
}