#include <iostream>
using namespace std;

void printcount(int n){
    

    if (n== 0){
        return;
    }

    
    printcount(n - 1);
    cout << n  << " " ;
}


int main() {
    int n;
    cout << "Enter the value of  n : " << endl;
    cin >> n;
    printcount(n);
    return 0;
}