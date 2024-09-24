#include <iostream>
using namespace std;

void printdigit(int n ){
    // basee casse hai 
    if(n==0){
        return ;
    }

    int newvalue = n / 10;
     printdigit(newvalue);
    int digit = n % 10;
    cout << digit << " "; 


}



int main() {
    int n = 67;
    if(n==0){
        cout << 0 << endl;
    }
    printdigit(n);
    return 0;
}