#include<iostream> 
using namespace std;

int main (){
    int a , b;
    cout << "Enter the two number to check the which one is greater"<< endl;
    cin >> a >> b;
    if (a> b){
        cout << a << " is Greater" << endl;
    }
    else if (a==b){
        cout << "Both are Equal"<<endl;

    }
    else cout << b << " is Greater : " << endl;
}