#include<iostream>
#include<string>
using namespace std;

// Constructors ---> It is a function that is called automatically as soon as you create an object.
// Constructors never have a return type, so we never have to write int, void or string etc.
/* Constructor name is always the same as the class name, and thats how our C++ program knows that its a constructor,
because once it comes across a function with the same name, it knows that it is constructor. */

class chiragsclass{
    private:
    string name;

    public:

    chiragsclass(string z){  //-----> Constructor
    // The main reason that people create constructor is to give variables the initial value.

        // cout << "This will get printed automatically ";
        setName(z);
    }

    void setName(string x){
        name = x;
    }

    string getName(){
        return name;
    }

};

int main(){

    chiragsclass co("Lucky Chirag Agrawal"); /*---> so before we use object to call function, but a special function constructor is called automatically
    as soon as we create an object */
    cout << co.getName();
    cout<<endl;
    chiragsclass co2("Lucky John");
    cout<< co2.getName();

    /* You can create multiple objects from same class, and they will never overwrite each other, because they will be assigned 
    their seperate variables. */
    
    
    return 0;
}