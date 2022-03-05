#include<iostream>
using namespace std;

void swap(int* x, int* y){
    int t = *x;
    *x = *y;
    *y = t;
}

void partition(int arr[], int l, int r){
    int pivot = arr[r];
    int i = l - 1;

    for(j = l; j <= r - 1; j++){
        if(arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
        
    }
    swap(&arr[i+1], &arr[r]);
    return(i+1);
}

void quickSort(int arr[], int l, int r){

    if(l < r){
    int pi = partition(arr, l, r);

    quickSort(arr, l, pi - 1);
    quickSort(arr, pi + 1, r);
}
}

int main(){
    
    return 0;
}