#include<iostream>
using namespace std;

class shape{
    

    public:

        void setlength(int len){
            length = len;
        }

        void setwidth(int wid){
            width = wid;
        }

        protected:
        int length, width;
};

 class getcost{
     public:
        int total(int area){
            return area*70;
    }

};

    class rectangle :public shape, public getcost{
        public:
            int getarea(){
            return (length * width);
        }
};

int main(){

    rectangle rect;
    int a; 

    rect.setlength(10);
    rect.setwidth(30);

    a = rect.getarea();

    cout << rect.getarea() << endl;
    cout << rect.total(a);
    
    return 0;
}