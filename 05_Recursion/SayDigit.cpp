#include <iostream>
using namespace std;


void SayDigit(int n , string arr[]){
    // base case 
    if ( n == 0) {
        return;
    }
    int digit = n % 10;
    n = n / 10;
    SayDigit(n , arr);
    cout << arr[digit] << " " ;
}


int main() {
    int n;
    cout << " Enter the digit : " << endl;
    cin >> n;
    string arr[10] = {
        "zero" , "one" , "two","three" , "four" , "five" , 
        "six" , "seven" , "eight" , "nine"
    };
    SayDigit( n , arr);
    return 0;
}