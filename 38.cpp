#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    int deg;
    double price, sumprice;
    cin >> deg;
    if(deg <= 120){
        price = 2.1*deg;
        sumprice = 2.1*deg;
    }
    else if(deg <= 330){
        price = 2.1*120 + 2.68*(deg-120);
        sumprice = 2.1*120 + 3.02*(deg-120);
    }
    else if(deg <= 500){
        price = 2.1*120 + 2.68*210 + 3.61*(deg-330);
        sumprice = 2.1*120 + 3.02*210 + 4.39*(deg-330);
    }
    else if(deg <= 700){
        price = 2.1*120 + 2.68*210 + 3.61*170 + 4.01*(deg-500);
        sumprice = 2.1*120 + 3.02*210 + 4.39*170 + 4.97*(deg-500);
    }
    else{
        price = 2.1*120 + 2.68*210 + 3.61*170 + 4.01*200 + 4.5*(deg-700);
        sumprice = 2.1*120 + 3.02*210 + 4.39*170 + 4.97*200 + 5.63*(deg-700);
    }

    cout << fixed << setprecision(2) << "Summer months:" << sumprice << endl;
    cout << fixed << setprecision(2) << "Non-Summer months:" << price << endl;

    return 0;

}
















