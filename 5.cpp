#include <iostream>
#include <vector>
using namespace std;

void func1(int num, vector<int>& arr);
void func2(int num, vector<int>& arr);

int main(){
    int num;
    vector<int> arr;

    cin >> num;
    if(num >= 0)        // positive case
        func1(num, arr);

    else                  // negative case
        func1(-num-1, arr);

    func2(num, arr);

    
    return 0;
}

void func1(int num, vector<int>& arr){
    int size;
    while(num){
        arr.push_back(num%2);
        num /= 2;
    }
    size = arr.size();
    for(int i=0; i<8-size; i++)
        arr.push_back(0);

}

void func2(int num, vector<int>& arr){
    if(num >= 0){
        for(auto it=arr.rbegin(); it<arr.rend(); it++)
            cout << *it;
        cout << "\n";
    }

    else{
        for(auto it=arr.rbegin(); it<arr.rend(); it++)
            cout << !(*it);
        cout << "\n";
    }

}