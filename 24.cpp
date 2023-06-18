#include <iostream>
#include <string>
using namespace std;


int main(){
    long double r, p;
    int n;
    long double term = 1.0, salary;
    cin >> r >> n >> p;
    while((n--)>0){
        term *= (1+r);
    }
    if(r==0)
        salary = p;
    else
        salary = p*(1.0+r)*(term-1.0)/r;

    cout << (long long)salary << endl;


    return 0;
}
