#include <iostream>
#include <sstream>
using namespace std;

int func(const int arr[], int term){
    int total = 0;
    for(int i=0; i<=term; i++)
        total += arr[i];
    return total;
}



int main(){
    
    char tmp;
    string s;
    stringstream ss;
    int isbn[10] = {0}, isbn2[10] = {0};
    getline(cin, s);
    ss << s;
    
    for(int i=0; i<10; i++){
        ss >> tmp;
        if(tmp == 'X')
            isbn[i] = 10;
        else    isbn[i] = tmp - '0';
    }
    
    for(int i=0; i<10; i++)
        isbn2[i] = func(isbn, i);
    for(int i=0; i<10; i++)
        isbn[i] = func(isbn2, i);
    
    if(!(isbn[9]%11))
        cout << "YES\n";
    else    cout << "NO\n";




    return 0;

}
















