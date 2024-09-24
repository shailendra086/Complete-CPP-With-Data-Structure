#include <iostream>
using namespace std;

int  fibonacci(int n){
    if(n==1){
        return 0;
        
    }

    if (n == 2){
       return 1;
    }
   

     return  fibonacci(n-1) + fibonacci(n-2);
    
}

int main() {
    int n ;
    cout << "Enter the value of n " << endl;

    cin >> n ;

    int ans =fibonacci(n);
    cout << "The nth Terms is : " << ans << endl;
    return 0;
}