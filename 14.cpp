#include <iostream>
#include <string>
using namespace std;


int main(){
    int end, len;
    string s;
    cin >> s;
    len = s.length();
    end = len/2;
    for(int i=0; i<=end; i++){
        if(s.at(i) != s.at(len-1-i))
            break;
        if(i==end){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}