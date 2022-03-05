#include<iostream>
using namespace std;

void swap(int &, int& );

int main(){
    int a = 10, b = 12;

    cout << "Before swapping "<< endl;
    cout << " a= "<< a << endl << " b= "<< b << endl;

    swap(a, b);

    cout << "After swapping "<< endl;
    cout << " a= "<< a << endl << " b= "<< b << endl;

    return 0;
}
void swap(int & n1, int & n2){
    int temp;
    temp = n1; // second one is copying value in first, REMEMBER IT.
    n1 = n2;
    n2 = temp;
}
/* The contents of the first variable is copied into the temp variable. 
Then, the contents of second variable is copied to the first variable.
Finally, the contents of the temp variable is copied back to the second variable which completes the swapping process.*/

