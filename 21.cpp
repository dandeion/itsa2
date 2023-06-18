#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    float max, min;
    float arr[10];
    for(int i=0; i<10; i++)
        cin >> arr[i];

    for(int i=0; i<10; i++){
        if(i==0){
            min = arr[i];
            max = arr[i];
        }
        else{
            if(arr[i] < min)
                min = arr[i];
            if(arr[i] > max)
                max = arr[i];

        }

    }
    cout << fixed << setprecision(2) << "maximum:" << max << endl;
    cout << fixed << setprecision(2) << "minimum:" << min << endl;


    return 0;
}