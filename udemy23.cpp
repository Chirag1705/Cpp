// EXCEPTION HANDLING
#include<iostream>
using namespace std;

int main(){

    int a, b;
    cin >> a >> b;


    try
    {
        if(b == 0)
        throw 0;
        
        else{
       float z = a/b;
       cout << z;
        }

    }

    catch(int e)
    {
        cout << "Error: Divided by " << e;
    }

    // catch(...) -->  Used for any type of exceptions whether we declared it or not it will take any type of exceptions.
    
    
    return 0;
}