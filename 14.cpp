#include<iostream>
using namespace std;

// Function is very important part of top down structured programming.
// Function means to divide the function into parts, and make each play different roles.
// main itself is a function from where c++ program's execution started.

// int sum(int a, int b){
// int c = a+b;
// return c;
// }

// Function Prototype
// Syntax ---> type function-name(arguments);

// Function prototype assures compiler that the required function is there in the program, just search for it.

// int sum(int a, int b); // ---> Acceptable
// int sum(int a, b); // ---> Not Acceptable
int sum(int, int); // ---> Acceptable

// void g(void); // ----> Acceptable
void g(); // ---> Acceptable

int main(){

    int num1, num2;
    cout<<"Enter the value of first number "<<endl;
    cin>>num1;

    cout<<"Enter the value of second number "<<endl;
    cin>>num2;

    // num1 and num2 are actual parameters.

    cout<<"The sum is "<<sum(num1, num2);

    g();

    return 0;
// The meaaning of return 0 is that your programme is successfully executed, and there is no problem in its execution.
// if not executed successfully, we can give other return values as well.

}

int sum(int a, int b){
// a and b are formal parameters. They will be taking values from actual parameters.
int c = a+b;
return c;
} //  ---> Here it will show error "Sum was not declared in this scope", as sum is not declared above. 

// So here function prototype comes into play.
/* Basically function prototype informs the compiler, that this function is gonna come into play, it will take this value
and return this, so that compiler gets informed to execute that function. */
// Yes, we can assign same names to actual and formal parameters.

void g(){
    cout<<"\nHello, this is Chirag";
}
