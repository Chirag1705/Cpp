#include<iostream>
using namespace std;

int main()
{

 int arr[5]={1,2,3,4,5},first;
 
 for(int j=0;j<5;j++)
    {
    first=arr[0];
	for(int i=0;i<4;i++)
        arr[i]=arr[i+1];
    
    arr[4]=first;   
    }

 for(int i=0;i<5;i++)
    cout<<"\n"<<arr[i];
 

return 0;
}