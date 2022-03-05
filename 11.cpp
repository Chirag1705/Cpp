#include<iostream>
using namespace std;

int main(){
    // Pointer --> data type which holds the address of other datatypes.

    int a = 3;
    int* b = &a;
    cout<<b<<endl;

    // & --> (Address of) Operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * --> (Value at) Operator or Derefernce Operator
    cout<<"The value at address b is "<<*b<<endl;
     
    //  Pointer to Pointer --> For address of pointer
    
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) "<<**c<<endl;
    return 0;
}