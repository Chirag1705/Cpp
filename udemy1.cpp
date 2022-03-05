#include<iostream>
using namespace std;

extern int a, b;
extern int c;
extern float f;

int main(){

    int a, b;
    int c;
    float f;


    a = 13;
    b = 12;
    c = a + b;
    
    cout << c << endl;

    f = 90/30.1;

    cout << f << endl; 

    return 0;
}