#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      
      sort(arr, arr + N);
      int count = 1;
      vector<int>v;
      
      
      for(int i = 0; i < N; i++){
          if(arr[i+1] == arr[i] + 1)
              count++;
          
          
          else if(count > 1 && (1+arr[i] != arr[i+1])){
              v.push_back(count);
              count = 1;
          }
      }
      
      if(v.size() == 0)
        return {1};
        
        else{
        int x = *max(v.begin(), v.end());
        return x;
        }
          
          
    
    }

int main(){

    int n = 5;

    int arr[] = {1, 2, 3, 4, 5};

    findLongestConseqSubseq( arr, n);



    return 0;
}