#include<iostream>
using namespace std;

int main(){
    int var[3] = {10, 100, 1000};
    int *ptr;
    ptr = var;
    for(int i=0; i < 3; i++){
        cout << "Address of var["<<i<<"]"<< endl;
        cout << ptr << endl;
        cout << "Value of var["<<i<<"]"<< endl;
        cout << *ptr << endl;

        ptr++;
    }
    return 0;
}