#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    int lis, read, speak, testnum, failnum;
    cin >> testnum;
    while(testnum--){
        failnum = 0;
        cin >> lis >> read >> speak;
        if(lis < 60)    failnum++;
        if(read < 60)    failnum++;
        if(speak < 60)    failnum++;

        if(failnum == 0){
            cout << "P" << endl;
            continue;
        }

        else if(failnum == 1){
            if(lis + read + speak >= 220){
                cout << "P" << endl;
                continue;
            }
            else{
                cout << "M" << endl;
                continue;
            }
        }
        else if(failnum == 2){
            if(lis >= 80 || read >= 80 || speak >= 80){
                cout << "M" << endl;
                continue;
            }
        }

        cout << "F" << endl;
    
    
    }




    return 0;

}
















