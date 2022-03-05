// CONSTRUCTOR AND DESTRUCTOR
#include<iostream>
using namespace std;

class Line{
    public:
        void setLength(double len);
        double getLength(void);
        Line();   // CONSTRUCTOR
        ~Line(); // DESTRUCTOR
        
    private:
        double length;

};

Line ::Line(void) {
    cout << "Object is being created "<< endl;
}

Line ::~Line(void) {
    cout << "Object is being created "<< endl;
}

void Line ::setLength(double len){
    length = len;
}

double Line ::getLength(void){
    return length;
}

int main(){

    Line line;
    line.setLength(7.0);
    cout << line.getLength() << endl;
    
    return 0;
}