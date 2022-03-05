//  TWO DIMENSIONAL ARRAY
#include<iostream>
using namespace std;

int main(){
    int marks[3][2];
    for(int i=0; i < 3; i++){
        cout << "Enter the marks of the student "<< (i+1) << endl;
        for(int j=0; j < 2; j++){
            cout << "Subject "<< (j + 1) << endl;
            cin >> marks[i][j];
        }
    }
    for(int i=0; i<3; i++){
        cout << "The marks of the student are : "<< (i+1) << endl;
        for (int j=0; j<2; j++){
            cout << "Subject "<< (j+1) << ":";
            cout << marks[i][j] << endl;
        }
        cout << endl;
    }
    return 0;
}