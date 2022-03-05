#include<iostream>
using namespace std;

// int sum(int a, int b){;
// int c = a+b;
//     return c;
// }

// void swap(int a, int b){ // temp  a b
//     int temp = a;         // 4    4 5  ----> This is dry run for swap function.
//     a = b;                // 4    5 5
//     b = temp;             // 4    5 4    
// }

// Call by Reference using Pointers
// void swapPointer(int* a, int* b){  // temp  a b
//     int temp = *a;                  // 4    4 5  ----> This is dry run for swap function.
//     *a = *b;                        // 4    5 5
//     *b = temp;                      // 4    5 4    
// }

// Call by Reference using Reference Variables
// void swapReferenceVar(int &a, int &b){  // temp  a b
//     int temp = a;                        // 4    4 5  ----> This is dry run for swap function.
//     a = b;                               // 4    5 5
//     b = temp;                            // 4    5 4    
// }

// Return by reference
int & swapReferenceVar(int &a, int &b){ 
    int temp = a;                       
    a = b;                               
    b = temp; 
    return a;                           
}

int main(){
    int x = 4, y = 5;
 // cout<<"The sum of 4 and 5 is "<<sum(4,5)<<endl;

    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
   
    /*swap(x, y);  This will not swap, as actual parameters x and y will get copied into formal parameters
    a and b. And changing a and b will not trouble x and y.*/

    /*swapPointer(&x, &y);  This will swap, coz we have given address to the function, so no matter where it is in the
    computer or in any function, as computer's memory cannot be changed, so function will use address provided, to find 
    variable and swap it. */

    /*swapReferenceVar(x, y); This will swap, as 'a' will point to 'x' in memory and 'b' will point to 'y' in memory.*/

    swapReferenceVar(x, y) = 17; /* As we are returning a, which is reference to x, so we can change x.*/
 
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
   
    return 0;
}