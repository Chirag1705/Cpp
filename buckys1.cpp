#include<iostream>
using namespace std;

class chiragsclass{        // ----> It is class where we can functions.
      public:          
          void coolguy(){
              cout << " preachin to the choir " <<endl;
          }
};

int main(){

    chiragsclass chiragsobject;  // -----> Here we can create object, to access public access modifier.
    chiragsobject.coolguy();      
    
    return 0;
}