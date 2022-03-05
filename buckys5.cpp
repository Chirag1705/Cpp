#include<iostream>
using namespace std;

void arraybehenchod(int arrayindex[], int arraykiaukad);

int main(){

    int alsa[6] = {56, 67, 87, 98, 34, 29};
    int chinnu[4] = {848, 56465, 467, 9842};

    arraybehenchod(alsa, 6);
    arraybehenchod(chinnu, 4);

    
    return 0;
}

void arraybehenchod(int arrayindex[], int arraykiaukad){
    for(int i = 0; i < arraykiaukad; i++){
        cout << arrayindex[i] << endl;
    }
}