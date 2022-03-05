#include<iostream>
#include<string>
using namespace std;

class chiragsclass{
    private:
    string name;

    public:

    void setName(string x){
        name = x;
    }

    string getName(){
        return name;
    }

};

int main(){

    chiragsclass co;
    co.setName("Chirag Agrawal");
    cout << co.getName();
    
    return 0;
}