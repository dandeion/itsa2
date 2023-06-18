#include <iostream>
#include <string>
using namespace std;


int main(){
    int times = 0, pos = 0;
    string target, s;
    cin >> target >> s;

    while((pos = s.find(target, pos)) != string::npos){
        times++;
        pos++;
    }
    
    cout << times << "\n";

    return 0;
}