#include<iostream>
using namespace std;

int main(){

    // Array Example
    // Basically, Array is used to combine items of same data types.

    // 1.
    int mathMarks[4];
    mathMarks[0] = 5674;
    mathMarks[1] = 1937;
    mathMarks[2] = 6783;
    mathMarks[3] = 9823;

    cout<<"These are the mathMarks "<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    
    // 2.
    int marks[4] = {23, 50, 74, 99};
    // Writing [4] is optional, because program will figure out that.
    cout<<"These are the marks "<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    marks[2] = 463; // ---> You can change the value of array.
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // Using For Loop
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    cout<<endl;

    //  Using While Loop
    int i = 0;
    while (i < 4)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
        i++;
    }
    cout<<endl;

    // Using do While Loop
    int j = 0;
    do
    {
        cout<<"The value of mathMarks "<<j<<" is "<<mathMarks[j]<<endl;
        j++;
    } while (j < 4);
    cout<<endl;

    // Pointers and Arrays

    int* p = mathMarks;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    // cout<<*(p++)<<endl;
    // cout<<*(++p)<<endl;
    
    return 0;
}