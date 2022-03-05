#include<iostream>
using namespace std;

int main(){
    char x;
    int n;
    cin >> n;
    for(int i =0; i<=n; i++){
            
         
        for(int j=0; j<=i; j++){

            if(j%2==0)
            cout << "*";
            else
            cout << "+";

        }

        i++;
        
        cout << endl;
    }
    return 0;
}