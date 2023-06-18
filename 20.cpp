#include <iostream>
#include <string>
using namespace std;

void longsum(const string& a, const string& b);


int main(){
    int testnum, alen, blen, len;
    string a, b;
    cin >> testnum;

    for(int i=0; i<testnum; i++){
        cin >> a >> b;
        alen = a.length();  blen = b.length();
        
        for(int i=0; i<40-alen; i++)
            a = "0" + a;
        for(int i=0; i<40-blen; i++)
            b = "0" + b;
        //cout << a << endl << b << endl;

        longsum(a, b);
    }
    return 0;
}

void longsum(const string& a, const string& b){
    int len = a.length(), carry = 0, starttoprint = 0;
    int bit;
    char result[50] = {0};
    for(int i=len-1; i>=0; i--){
        bit = (a[i] - '0') + (b[i] - '0') + carry; 
        //cout << a[i] << b[i] << " " << bit << endl;
        if(bit > 9){
            carry = 1;
            bit = bit - 10;
        }
        else
            carry = 0;
        
        result[i] = char(bit+'0');
    }

    for(int i=0; i<len; i++){
        if(result[i] == '0' && !starttoprint)
            continue;
        starttoprint = 1;
        cout << result[i];
    }
    cout << endl;
}

