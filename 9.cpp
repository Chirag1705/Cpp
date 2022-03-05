#include<iostream>
using namespace std;
int main(){
    /* Loops in C++
    There are three types of loops in C++
    1. For Loop
    2. While Loop
    3. do While loop */

    // For Loop in C++
    // int i = 1;
    // cout<<i;
    // i++;
    // cout<<i;
    // i++;    
    // cout<<i;
    // i++;
    // cout<<i;
    // i++;   
    // cout<<i;
    // i++;   
    // cout<<i;
    // i++;

    // Syntax for For loop
    // for(initialisation; condition; updation)
    // {
    //     loop body(C++ Code);
    // }

    // for ( int i = 1; i <= 100; i++)
    // {
    //     cout<<i<<endl;
    // }

    // Example of Infinite Loop 
    // for(int i = 1; 34 <= 100; i++) 
    // {
    //     cout<<endl;
    // }

    // While loop in C++
    // Syntax:
    // while(condition)
    // {
    //     C++ statements;
    // }

    // Printing 1 to 40 using while loop
    int i = 1;
    while(i < 40){

        
        cout<<i<<endl;
        i++;
        
    }

    // Example of Infinite While Loop
    // while(True){
    //     cout<<i<<endl;
    //     i++;
    // }

    // do While loop in C++
    // Syntax:
    // do 
    // {
    //     C++ statements;
    // }while(condition);

    //  Printing 1 to 40 using do while loop
    //  int i = 1;
    //  do{
    //      cout<<i<<endl;
    //      i++;
    //  }while(i <= 40);

    // Quiz :- 

    // for ( int i = 6; i <= 60; i = i + 6)
    // {
    //    cout<<i<<endl;
    // }

    // int i = 6;
    // while( i <= 60){
    //     cout<<i<<endl;
    //     i = i + 6;
    // }

    // int i = 19;
    // do
    // {
    //    cout<<i<<endl;
    //    i = i+19;
    // } while ( i <= 190);

    return 0;
    
    
}