#include<iostream>
using namespace std;

int main(){
    // int chiru[20];

    // cout << "Element  -  Value" <<endl;

    // for(int i = 0; i <10; i++){
    //     chiru[i] = 17;
        
    //     cout << i << " ---------- " << chiru[i] << endl; 
    // }
    // for(int i = 10; i <20; i++){
    //     chiru[i] = 17;
        
    //     cout << i << " --------- " << chiru[i] << endl; 
    // } 
    
    // array in calculations

    int temp[4] = {24,45,76,28};
    int sum = 0;

    for(int i = 0; i<4; i++){
        sum += temp[i];
        cout << sum << endl; 
    }

    return 0;
}