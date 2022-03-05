#include<iostream>
using namespace std;

int main(){
    int length, sum = 0;
    cout << "Enter the no. of students in the grp :"<< endl;
    cin >> length;
    int *marks = new int[length];

    for(int i=0; i<length; i++){
        cin >> *(marks + i);
    }
    for(int i=0; i<length; i++){
        sum += *(marks + i);
    }
    cout << "sum is " << sum;
    return 0;
}