#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

const vector<int> split(const string& str, const char& delim){
    int num;
    vector<int> result;
    stringstream ss(str);
    string token;

    while(getline(ss, token, delim)){
        sscanf(token.c_str(), "%d", &num);
        result.push_back(num);
    }
    return result;
}  


int main(){
    int size;
    double average;
    string str;
    vector<int> arr;
    while(getline(cin, str)){
        int sum = 0;
        str = str + " ";
        arr = split(str, ' ');

        size = arr.size();
        for(int i=0; i<size; i++)
            sum += arr[i];
        average = sum*1.0/size;
        cout << "Size: " << size << endl;
        cout << fixed << setprecision(3) << "Average: " << average << endl;



    }
    return 0;
}