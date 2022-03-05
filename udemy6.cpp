#include<iostream>
using namespace std;

int main(){
    int i = 1, fac = 1;
    long long unsigned number;
    cout << "Enter a number "; 
    cin >> number;

    while(i<=number){
         fac *= i;
// fac += i  means basically fac = fac + i, similar with other operators     
        
        i++;     
        }   
    cout << fac << endl;          
    return 0;
}
 /* Result :- 1+1 = 2
              2+2 = 4
              3+4 = 7  like this */