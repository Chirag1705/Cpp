// PROTECTED ACCESS SPECIFIER
#include<iostream>
using namespace std;

class Example1{
    
    protected:
        int a;

};

class Example2 :public Example1{
public:

void init_val(int a){;
this->  a = a;
}

void print_val(){
    cout << "a = " << a << endl;
}

};




int main(){

    Example2 ex;
    ex.init_val(100);
    ex.print_val();
    
    return 0;
}