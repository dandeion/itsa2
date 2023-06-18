#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    if(num < 2)
        cout << "NO\n";
        else{
            for(int i=2; i<=num; i++){
                
                if(num % i == 0 && num != i){
                    cout << "NO\n";
                    break;
                }
                if(i == num)
                    cout << "YES\n";
                    
            }
        }
    


    return 0;
}