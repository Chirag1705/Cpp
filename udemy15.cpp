// STRUCTURE AND FUNCTIONS TOGETHER
#include<iostream>
using namespace std;

struct chirag{
    char favseries[50];
    int favnumber;
    float favdecimalnumber;
    
};

void printchiragpreference(chirag);

int main(){
    chirag c;
    cin.getline(c.favseries, 50);
    cin >> c.favnumber;
    cin >> c.favdecimalnumber;
    printchiragpreference(c);
    return 0;
}

void printchiragpreference(chirag c){
    cout << "series : " << c.favseries << endl;
    cout << "number : " << c.favnumber << endl;
    cout << "decimal : " <<c.favdecimalnumber;
}