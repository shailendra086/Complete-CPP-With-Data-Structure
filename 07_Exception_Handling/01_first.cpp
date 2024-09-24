#include <iostream>
using namespace std;

int main() {
    try{
        int n;
        cout << "Enter the value of n : " << endl;
        cin>>n;
        if (n >= 18){
            cout << "You can gave a vote " << endl;
        }
        else throw n;

    }
    catch(int n){
        cout << "You can not gave vote because you are below 18 year " << endl;
    }
    return 0;
}