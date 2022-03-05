#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    vector<int>v;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        v.push_back(a);
        cout << v[i];
    }  
  //   }   
  //   sort(v.begin(), v.end()); 
    
  //   int q;
  //   cin >> q;

    
  //   for(int i=0; i<q; i++){
  //       int b;
  //       cin >> b;
    
  //    vector<int>::iterator low = lower_bound(v.begin(), v.end(), b);
  //      if (v[low - v.begin()] == b)
  //          cout << "Yes " << (low - v.begin()+1) << endl;
       
  //      else
  //          cout << "No " << (low - v.begin()+1) << endl;
  //  }
  
    
    
    
    return 0;
}