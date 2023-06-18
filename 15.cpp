#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(){
    string sentence;
    char c;
    int output[30] = {0};
    int len;
    getline(cin, sentence);
    len = sentence.length();

    for(int i=0; i<len; i++){
        c = sentence[i];
        if(c == ' ')
            output[0]++;
        else{
            output[tolower(c) - 'a' + 1]++;
            //printf("%d\n", tolower(c) - 'a' + 1);
        }
    }

    cout << output[0]+1 << "\n";
    for(int i=1; i<27; i++){
        if(output[i]){
            c = 'a'-1+i;
            cout << c << " : " << output[i] << "\n";
        }
    }

    return 0;

}
