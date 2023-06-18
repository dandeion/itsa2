#include <iostream>
using namespace std;

int recursive_f(int num){
    if(num == 0 || num == 1)
        return num+1;
    else{
        return recursive_f(num-1) + recursive_f(num/2); 
    }
}



int main(){
    int k, ans;
    cin >> k;

    ans = recursive_f(k);
    cout << ans << "\n";

    return 0;
}