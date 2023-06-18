#include <iostream>
using namespace std;

int main(){
    int x, y, rad_2;
    cin >> x >> y;
    rad_2 = x*x + y*y;
    if(rad_2 <= 10000)
        cout << "inside" << '\n';
    else
        cout << "outside" << '\n';

    return 0;
}