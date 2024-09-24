#include <iostream>
using namespace std;


void ReachHome(int src , int dest){
    cout << "Source " << src << " Destination " << dest << endl;
    // base case 
    if (src == dest){
        cout << "Aa gya Ghar  " << endl;
        return;
    }
    src++;
    ReachHome(src , dest);
}


int main() {
    int src = 1;
    int dest = 10;
    ReachHome(src , dest);
    return 0;
}