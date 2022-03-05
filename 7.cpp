#include<iostream>
#include<iomanip>
using namespace std;
int main(){
// **************Constants in C++*****************

    //  const int a = 34;
    // const is a keyword which means constant value of a 
    // cout<<"The value of a was: "<<a<<endl;

    // a = 24; Here we will get an error since a is constant
    // cout<<"The value of a is: "<<a<<endl;

    //*******Manipulators in C++**********
    // 1. endl --> used to break the line
    // 2. setw ---> It comes from iomanip, used to provide width

    int a = 167, b = 675, c = 389;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;
    
    cout<<"The value of a without setw is: "<<setw(10)<<a<<endl;
    cout<<"The value of b without setw is: "<<setw(10)<<b<<endl;
    cout<<"The value of c without setw is: "<<setw(10)<<c<<endl;

    // *****Operator Precedence******
    int x = 7, y = 2;
    int z = ((((x*3) + y) - 67) + 60); 
    cout<<z;
     
    return 0;      
}