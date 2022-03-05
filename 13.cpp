#include<iostream>
using namespace std;

// Unlike Array, Structure is used to combine items of different data types.
// Typedef---> isko use kiya toh basically struct employee ki jagah epp likh sakte hai

    // typedef struct employee
    // {
    //     int eID;
    //     char favChar;
    //     float salary;
    // }epp;

    // Union is like structure, but it provides better memory management.

    // union money
    // {
    //     int rice;
    //     char car;
    //     float euro;
    // };
    
    // in structure suppose int, char, and float, all 3 consumes 4 bytes, so total memory consumed will be 12 bytes.
    // But in union the one with maximum memory is allocated. The one needed overrights other.

int main(){

    // struct employee chiru;
    // chiru.eID = 17;
    // chiru.favChar = 'c';
    // chiru.salary = 170000000000;

    // cout<<chiru.eID<<endl;
    // cout<<chiru.favChar<<endl;
    // cout<<chiru.salary<<endl;
    

    // epp chiru;
    // chiru.eID = 17;
    // chiru.favChar = 'c';
    // chiru.salary = 170000000000;

    // cout<<chiru.eID<<endl;
    // cout<<chiru.favChar<<endl;
    // cout<<chiru.salary<<endl;

    // union money m1;
    // m1.rice = 17;
    // m1.car = 'a';
    // cout<<m1.rice<<endl;
    /* as car overrights rice, so it will overright rice. 
    Only one value will be printed, and only that much memory will be allocated.*/

    enum Meal{ Breakfast, Lunch, Dinner};
    cout<<Breakfast<<endl;
    cout<<Lunch<<endl;
    cout<<Dinner<<endl;

    Meal a1 = Breakfast;
    Meal a2 = Dinner;
    cout<<a1<<endl;
    cout<<a2<<endl;
    
    // cout<<(a1 == 1);
    // As we have put wrong condition, that's why printing 0

    return 0;
}