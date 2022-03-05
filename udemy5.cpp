#include<iostream>
using namespace std;

int main(){
    char c;
    float num1, num2;

    cout << "Enter any operator (+, -, *, /)" << endl;
    cin >> c;

    cout << " Enter two operands "<< endl;
    cin >> num1 >> num2;

    switch (c)
    {
    case '+':
    cout << num1 << "+" << num2 << "=" << num1 + num2;
        break;

    case '-':
    cout << num1 << "-" << num2 << "=" << num1 - num2;
        break;

    case '*':
    cout << num1 << "*" << num2 << "=" << num1 * num2;
        break;

       case '/':
    cout << num1 << "/" << num2 << "=" << num1 / num2;
        break;

    default:
    cout << "Error" ;
        break;
    } 
    return 0;
}