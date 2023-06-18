#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int testnum, budget, cost, giftnum, allgift;
    int price[110] = {0};
    cin >> testnum;
    while(testnum--){
        cin >> budget >> giftnum >> allgift;
        for(int i=0; i<allgift; i++)
            cin >> price[i];
        sort(price,price+allgift);
        
        cost = 0;
        for(int i=0; i<giftnum; i++)
            cost += price[i];

        if(cost > budget)
            cout << "Impossible\n";
        else
            cout << cost << endl;

    }

    return 0;

}
















