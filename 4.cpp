#include <iostream>
using namespace std;

int main(){
    int h1, m1, h2, m2, time, cost;
    cin >> h1 >> m1 >> h2 >> m2;
    time = (60*h2+m2) - (60*h1+m1);
    if(time < 0)                // park till another day
        time = 1440 - time;
    time /= 30;                 // change to half hour
    if(time <= 4)
        cost = 30 * time;
    else if(time <= 8)
        cost = 30 * 4 + 40 * (time-4);
    else
        cost = 30 * 4 + 40 * 4 + 60 * (time-8);
    
    cout << cost << "\n";
    
    return 0;
}