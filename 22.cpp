#include <iostream>
#include <vector>

using namespace std;

int main(){
    int tmp, win = 0;
    vector<int> table;
    for(int i=0; i<9; i++){
        cin >> tmp; 
        table.push_back(tmp);
    }

    for(int i=0; i<3; i++){
        if(table[i] == table[i+3] && table[i+3] == table[i+6])
            win = 1;
        if(table[3*i] == table[3*i+1] && table[3*i+1] == table[3*i+2])
            win = 1;

    }
    if(table[0] == table[4] && table[4] == table[8])
        win = 1;
    if(table[2] == table[4] && table[4] == table[6])
        win = 1;

    if(win)
        cout << "True\n";
    else
        cout << "False\n";





    return 0;
}