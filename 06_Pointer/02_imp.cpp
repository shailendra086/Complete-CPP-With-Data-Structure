#include <iostream>
using namespace std;

int main() {
    int num = 3;
    int *t = &num;
    cout << "Value of num : " << *t << endl;

    // increment value 
    *t = *t + 1; 
    cout << "value is : " << num << " " << *t << endl;   

    // another method to increment the vlaue 

    (*t) ++ ; 
    cout << "Value is : " << *t << endl;
    return 0;
}