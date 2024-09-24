#include<iostream>
using namespace std;

int main (){
    int a , b;
    cout << "Enter the value of a and b"<< endl;
    cin >> a >> b;
    char opr;
    cout << "Enter the Operation: " ;
    cin >> opr;
    switch (opr)
    {
    case '+':
        cout << "The sum of two is : " << a + b << endl;
        break;
    case '-': 
        cout << "The Substract of two is : " << a - b << endl;
            break;
    case '*': 
        cout << "The Multiply of two is : " << a * b << endl;
            break;
    case '/': 
        cout << "The Division of two is : " << a / b << endl;
            break;
        default:
        cout << "Wrong choice" << endl;
        break;
    }
}