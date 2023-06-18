#include <iostream>
using namespace std;


int main(){
    int month, date, day;
    cin >> month >> date;
    day = 30*month + 1*date;

    if(day <= 50)
        cout << "Capricorn\n";      // 1
    else if(day <= 78)
        cout << "Aquarius\n";      // 2
    else if(day <= 110)
        cout << "Pisces\n";         // 3
    else if(day <= 140)
        cout << "Aries\n";       // 4
    else if(day <= 171)
        cout << "Taurus\n";       // 5
    else if(day <= 201)
        cout << "Gemini\n";        // 6
    else if(day <= 232)
        cout << "Cancer\n";       // 7
    else if(day <= 263)
        cout << "Leo\n";       // 8
    else if(day <= 293)
        cout << "Virgo\n";       // 9
    else if(day <= 323)
        cout << "Libra\n";       // 10
    else if(day <= 352)
        cout << "Scorpio\n";       // 11
    else if(day <= 381)
        cout << "Sagittarius\n";       // 12
    else
        cout << "Capricorn\n";       // 1



    return 0;

}
















