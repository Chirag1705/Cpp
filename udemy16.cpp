// Given two arrays count all pairs whose sum is an odd number
#include<iostream>
using namespace std;

int county(int a[], int b[], int n, int m){
    int even1 = 0, odd1 = 0, even2 = 0, odd2 = 0;

    for(int i=0; i < n; i++){
        if(a[i]%2!=0)
           odd1++;
        else
           even1++;
    }

    for(int i=0; i < m; i++){
        if(b[i]%2!=0)
           odd2++;
        else
           even2++;
    }

int pairs = min(odd1, even2) + min(odd2, even1);
return pairs;

}

int main(){
    int a[] = {9, 14, 6, 17, 11};
    int b[] = {8, 4, 7, 12, 21};

    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);

    cout << county(a, b, n, m);

    return 0;
}