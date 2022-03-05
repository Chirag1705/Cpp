#include<iostream>
using namespace std;

int main(){
    
    int bhailu[4][8] = {{6,8,3,2,9,5,4,1}, {12,98,45,37,81,47,23,66},{456,897,237,673,927,637,574,209},{1234,6784,9873,6728,5936,5628,3972,7836}};

    for(int row = 0; row < 4; row++){
        

        for(int column = 0; column < 8; column++){
            
            cout << bhailu[row][column] << " ";
        }
        cout << endl;
    }
    return 0;
}