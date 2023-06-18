#include <iostream>
using namespace std;

int main(){
    int num, terms, sum;
    cin >> num;
    terms = num/3;
    sum = terms*(terms+1) / 2 * 3;
    cout << sum << "\n";


    return 0;
}