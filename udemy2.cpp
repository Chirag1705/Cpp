#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int &ref = x;
    ref = 20;

    cout <<"x="<< x << endl;

    ref = 30;

    cout << "ref=" << ref;

    return 0;
}