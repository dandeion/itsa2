#include <iostream>
#include <vector>
using namespace std;

int main(){
    int num, start, end;
    vector<int> time;
    time.resize(30);

    cin >> num;
    for(int i=0; i<num; i++){
        cin >> start >> end;
        for(start; start<end; start++)
            time[start]++;

    }

    int max = 0;
    for(int i=0; i<25; i++){
        if(time[i] > max)
            max = time[i];

    }
    cout << max << endl;

    return 0;

}
