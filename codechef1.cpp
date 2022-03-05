#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}

int chef(int start, int end){
    
    for(int i = start; i < end; i++){
            if(isprime(i+2))
                i = i+2;

                else
                i++;
            
            count++;
    }
    return count;
}
int main(){
    int t;
    cin >> t;

   while(t--){
       int start, end;
       

       cin >> start >> end;
       int a = chef(start, end);
       cout << a << "\n";
   }
    return 0;
}