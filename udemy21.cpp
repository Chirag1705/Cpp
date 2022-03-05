#include<iostream>
using namespace std;

class A{
    private:
        int a;

    public:
        A(){
            a = 0;
        }

    friend int bolo(A);

};

 int bolo(A c){
    c.a += 2;
    return c.a;
}

int main(){

    A b;
    cout << bolo(b);
    
    return 0;
}