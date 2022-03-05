#include<iostream>
// There are two types of Header Files:
// 1. System Defined Header Files: It comes with the compiler
// 2. User Defined Header Files: It is written by the programmer
using namespace std;
int main(){
    cout<<"Operators in C++"<<endl;
    cout<<endl;
    cout<<"Following are the operators in C++"<<endl;

    // Arithmetic Operators
    int a=3, b=4;
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a ++  is "<<a++<<endl;
    cout<<"The value of a --  is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;

    // Assignment Operators
    char c= 'c';
    cout<<"The value of c is "<<c<<endl;
    cout<<endl;

    // Comparison Operators
    cout<<"Following are the Comparison Operators in C++"<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<endl;

    // Logical Operators
    cout<<"Following are the Logical Operators is C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
    
    return 0;
}