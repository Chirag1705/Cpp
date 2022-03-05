#include<iostream>
using namespace std;

// Recursion and Recursive Function

/* 1. When a function calls itself it is called recursion and the function which is calling itself is called a recursive function. 
2. The recursive function consists of a base case and recursive condition. 
3. It is very important to add a base case in recursive function otherwise recursive function will never stop executing. */

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

// Step by Step Calculation of Factorial(4) 
// Factorial(4) = 4 * Factorial(3);
// Factorial(4) = 4 * 3 * Factorial(2);
// Factorial(4) = 4 * 3 * 2 * Factorial(1);
// Factorial(4) = 4 * 3 * 2 * 1;
// Factorial(4) = 24;

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

// Fibonacci Sequence 
// fib(4) + fib(3)
// fib(3) + fib(2) + fib(2) + fib(3)
// So here we are calling fibonacci for the same purpose, thus may be some other algorithm works better, or may be iterative approach.
// Saving the values and calling once is better than this.

int main(){

/* Factorial of a number:
   6! = 6*5*4*3*2*1
   0! = 1 by definition
   1! = 1 by definition 
   n! = n * (n-1)! */

   int a;
   cout<<"Enter the value: "<<endl;
   cin>>a;

// cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;

   cout<<"The term in fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;
    
    return 0;
}