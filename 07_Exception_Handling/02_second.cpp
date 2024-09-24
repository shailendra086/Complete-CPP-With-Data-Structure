#include <iostream>
using namespace std;

int main() {
    
    try{
        int age;
        cout << "Enter your age : " << endl;
        cin >> age;
        if (age >= 18){
            cout << "You can drive car " << endl;
        }
        else throw - 1 ; 
    }
    catch(...){
        cout << "You can not drive a car " << endl;
        cout << "sorry";
    }
    return 0;
}