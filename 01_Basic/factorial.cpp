#include<iostream>
using namespace std;

int main (){
    int n ;
    cout << "Enter the number : " << endl;
    cin >> n;
    int  fact = 1;
    int num = n ;
    while (n!=0){
        fact = fact * n ;
        n = n - 1;
    }
    cout << "The factorial of  " << num << " is : " << fact << endl;
}