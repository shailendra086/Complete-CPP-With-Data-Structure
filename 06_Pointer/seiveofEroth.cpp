#include <iostream>
#include<vector>
using namespace std;


vector<bool>Sieve(int n){
    // create a sieve of n size telling isprime

    vector<bool>sieve(n+1 , true);
    sieve[0] = sieve[1] =  false;

    for(int i = 2; i*i<=n ; i++){ // optimize i * i ;
        if(sieve[i] == true){
           // int j = i*2;
           // using optimal one on inner loop
           int j = i * i;
            while (j<=n)
            {
                sieve[j] = false;
                j = j + i;
            }
            
        }
    }
    return sieve;

}


int main() {
    vector<bool>sieve = Sieve(25);
    for(int i = 0; i<=25; i++){
        if(sieve[i]){
            cout << i << " " ;
        }
    }
    return 0;
}