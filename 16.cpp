#include<iostream>
using namespace std;

/*  1. Inline functions are used to reduce the function call.

2. When one function is being called multiply times in the program it increases the execution time, 
so inline function is used to reduce time and increase program efficiency. 

3. If the inline function is being used when the function is called, 
Inline function expands the whole function code at the point of a function call, instead of running the function.

4. Inline functions are considered to be used when the function is small otherwise it will not perform well.*/

// inline int product(int x, int y){
//     return x*y;
// }

// Inline is not recommended when static variables are being used in the function.

//  int product(int x, int y){
//     static int c=0; ---> This function run only one.
//     c = c+1; ---> Next time this function will run. The value of c will be retained.
//     return x*y+c;
// }

// Default Arguments in C++
/* Default arguments are those values which are used by the function if we don’t input our value.
It is recommended to write default arguments after the other arguments. */

float moneyReceived(int currentmoney, float factor = 1.04){
    return currentmoney*factor;
}

int main(){

    // int a, b;

    // cout<<"Enter the value of a and b "<<endl;
    // cin>>a>>b;

    // cout<<"The product of a and b is "<<product(a,b);

    int money = 100000;

    cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money)<<" Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money, 1.1)<<" Rs after 1 year";

// Constant Arguments in C++
// Constant arguments are used when you don’t want your values to be changed or modified by the function.

// int strlen(const char *p){

// }

    return 0;
}