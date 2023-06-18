#include <iostream>
using namespace std;

int main(){
    char ignore;
    int money, change, apple, orange, peach;
    cin >> money >> ignore >> apple >> ignore >> orange >> ignore >> peach;
    
    change = money - 15 * apple - 20 * orange - 30 * peach;

    if(change < 0)
        printf("0\n");
    else{
        apple = change /50;
        change %= 50;
        orange = change / 5;
        change %= 5;
        cout << change << "," << orange << "," << apple << "\n";

    }




    return 0;

}
















