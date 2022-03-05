#include<iostream>
using namespace std;
int c = 17;
int main(){

    // **********Build in Data Types***********
    int a, b, c;

    cout<<"Enter the value of a: "<<endl;
    cin>>a;

    cout<<"Enter the value of b: "<<endl;
    cin>>b;

    c = a + b;
    cout<<"The sum is "<<c<<endl;
    cout<<"The global c is "<<::c<<endl;
    // '::' is scope resolution operator. By using this operator we can print value of global c.

    // **********Float, Double and Long Double Literals********* 
    float d = 34.4F; //If we put l here after decimal number then literal float will not change.
    long double e = 34.4L; //Similar as above L represents long double.
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;
    // By default decimal literal is double not float.
    // But if we put F or f to decimal number than it will pass as floating point number otherwise it will pass as double point nummber.


    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl; 
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl; 
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl; 
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl; 


    // ************Reference Variables************
    // Chirag ---> Chiru ----> Chigs -----> Dangerous Coder
    float x = 1705;
    float & y = x; 
    cout<<x<<endl;
    cout<<y<<endl;
    
    // *********Typecasting*********

    int j = 68;
    float k = 289.78;

    cout<<"The value of j is "<<(float)j<<endl;
    cout<<"The value of j is "<<float(j)<<endl;

    cout<<"The value of k is "<<(int)k<<endl;
    cout<<"The value of k is "<<int(k)<<endl;
    int i = int(k);

    cout<<"The expression is "<<j + k<<endl;
    cout<<"The expression is "<<j + (int)k<<endl;
    cout<<"The expression is "<<j + int(k)<<endl;
    cout<<"The expression is "<<j + i<<endl;

    return 0;
}