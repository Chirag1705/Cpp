#include<iostream>
using namespace std;
int main(){ 
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

    // Selection Control Structure: If;else-If;Else Ladder
    if((age<18) && (age>0)){
    cout<<"You can not come to my party "<<endl;
    }

    else if(age==18){
        cout<<"You are a kid and you will get a kid pass "<<endl;
    }
    
    else if(age==0){
        cout<<"You are not yet born"<<endl;
    }
 
    else{
        cout<<"You can come to my party "<<endl;
    }

    // Selection Control Structure: Switch Case Statements
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
         break;

    case 22:
        cout<<"You are 22"<<endl;
         break;

    case 2:
        cout<<"You are 2"<<endl;
         break;

    default:
        cout<<"No special cases"<<endl;
         break;
    }
    
    cout<<"Done with Switch Case";
    // Break ---> Matlab agar case 18 wala fulfil ho gaya toh wo waha se break hokar sidha switch case statements se bahar aa jaega.

    return 0;
}