#include<iostream>
using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<<glo;
}
int main(){
    int glo = 9;
    glo = 78;
    // int a= 3;
    // int b= 4;
    int a = 14, b = 15;
    float pi = 3.14;
    char c = 'c';
    bool is_true = false;
    sum();
    cout<<glo<<is_true;
    // cout<<"This is tutorial 3. \nThe value of a is "<<a<<". \nThe value of b is "<<b;
    // cout<<"\nThe value of pi is "<<pi;
    // cout<<"\nThe value of c is "<<c;

    // \n is used to break the line. We can use endl instead.
    // \n is called escape sequence character.
    // Local Variable takes precedence over global variable.
    // We can create global and local variable of same name, glo variable is example.
    return 0;
}