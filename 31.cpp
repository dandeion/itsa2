#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cstring>

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
    string str;
    vector<int> arr;
    while(getline(cin, str)){
        int count = 1, maxcount = 1;
        int num;
        
        str = str + " ";
        arr = split(str, ' ');
        
        if(arr.size() == 1){
            cout << arr[0] << endl;
            continue;
        }
        
        sort(begin(arr), end(arr));

        for(int i=1; i<arr.size(); i++){
            if(arr[i] == arr[i-1]){
                count++;
                if(count > maxcount){
                    maxcount = count;
                    num = arr[i];
                }
            }

            else{
                count = 1;
            }
        }

        if(maxcount > arr.size()/2)
            cout << num << "\n";
        else
            cout << "NO\n";
    
    }
    return 0;
}