#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int arr[10] = {0}, tmp, maxcount = -1, score = -1, total = 0;
    int *target;
    for(int i=0; i<4; i++){
        cin >> tmp;
        total+=tmp;
        arr[tmp]++;
    }

    for(int i=1; i<7; i++){
        if(maxcount <= arr[i]){
            maxcount = arr[i];
            if(score < i)
                score = i;
        }
    }


    if(maxcount == 4)  cout << "WIN" << endl;
    else if(maxcount == 3 || maxcount == 1) cout << "R" << endl;
    else{
        if(find(arr, arr+6, 1) != arr+6)         // case 1
            cout << total - maxcount*score << endl;
        else{                            // case 2
            target = find(arr, arr+6, 2);
            score = target-arr;
            cout << total - maxcount*score << endl;
        }


    }


    return 0;

}
















