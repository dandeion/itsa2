#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class data{
    public:
        int num, sum;
        void cal_sum(){
            int tmp = num;
            sum = 0;
            while(tmp){
                sum += tmp%10;
                tmp/=10;
            }
        }
};

bool mycmp1(data a, data b){
    return a.num < b.num;
}

bool mycmp2(data a, data b){
    return a.sum < b.sum;
}


int main(){
    data arr[10];
    int datanum;
    cin >> datanum;
    for(int i=0; i<datanum; i++){
        cin >> arr[i].num;
        arr[i].cal_sum();
    }

    stable_sort(arr, arr+datanum, mycmp1);
    stable_sort(arr, arr+datanum, mycmp2);


    
    for(int i=0; i<datanum; i++){
        if(i == datanum - 1){
            cout << arr[i].num << "\n";
            break;
        }
        cout << arr[i].num << " ";
    }
    

    return 0;
}





