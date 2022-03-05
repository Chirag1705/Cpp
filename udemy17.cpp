// PUBLIC AND PRIVATE ACCESS SPECIFIER
#include<iostream>
using namespace std;

class Example{
    private:
        int val;

    public:
        void init_val(int v);
        void print_val();

};

void Example ::init_val(int v){
    val = v;
}

void Example ::print_val(){
    cout << " Chirag loves her " << val << endl;
}

int main(){
    
    Example ex;
    ex.init_val(3000);
    ex.print_val();

    return 0;
}