#include <iostream>
using namespace std;

int main(){
    int row, col, elenum;
    int arr[1000] = {0};
    cin >> row >> col;
    elenum = row * col;

    for(int i=0; i<elenum; i++)
        cin >> arr[i];

    for(int i=0; i<col; i++){
        for(int j=0; j<row-1; j++)
            cout << arr[i+j*col] << " ";
        cout << arr[i+elenum-col];
        cout << "\n";

    }




    return 0;
}
