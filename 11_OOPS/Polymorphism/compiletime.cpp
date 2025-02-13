#include <iostream>
using namespace std;


class A{
    public:
    void SayHello(){
        cout << "Hello from A" << endl;
    }
    void SayHello(string name){
        cout << "Hello from string" << endl;
    }

    int SayHello(int a){
        cout << "Hello from int" << endl;
        return a;
    }
};





int main() {

    A a;
    
    a.SayHello("Rahul");
    
    return 0;
}