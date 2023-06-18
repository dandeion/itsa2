#include <iostream>
#include <string>
using namespace std;

int main(){
    char id[11];
    cin >> id;
    int p = 0, x1, x2;
    int table[] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};
    x1 = table[id[0]-'A'] / 10;
    x2 = table[id[0]-'A'] % 10;

    for(int i=1; i<9; i++){
        p += (9-i)*(id[i]-'0');

    }
    p += (id[9]-'0') + x1 + 9*x2;

    if(!(p%10))
        cout << "CORRECT!!!\n";
    else
        cout << "WRONG!!!\n";

    return 0;

}
















