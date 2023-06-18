#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string text;
    int len, shiftnum;
    getline(cin, text);
    cin >> shiftnum;
    len = text.length();

    for(int i=0; i<len; i++){
        if(isalpha(text[i])){
            if(isupper(text[i]))
                text[i] = (text[i] - 'A' + shiftnum) % 26 + 'A';
            else
                text[i] = (text[i] - 'a' + shiftnum) % 26 + 'a';
        }

        if(isdigit(text[i]))
            text[i] = (text[i] - '0' + shiftnum) % 10 + '0';
    }

    cout << text << "\n";

    return 0;

}
















