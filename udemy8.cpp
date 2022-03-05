// How to print Half pyramid
#include<iostream>
using namespace std;

int main(){
    char x = 'A';
    char input;
    cout << "Enter the alphabet: ";
    cin >> input;
    for(int i = 1; i <= (input -'A'+ 1); i++ ){
        for(int j = 1; j<=i; j++){
            cout << x;
        }
        x++;
        cout << endl;
    }
    return 0;
}