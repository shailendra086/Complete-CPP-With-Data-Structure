#include <iostream>
using namespace std;

class A{
    public:
    void funa(){
        cout << "Function A" << endl;
    }
    
};

class B : public A{
    public:
    void funb(){
        cout << "Function B" << endl;
    }
};



class D{
    public:
    void fund(){
        cout << "Function D" << endl;
    }

};

class C : public A,public D{
    public:
    void func(){
        cout << "Function C" << endl;
    }
};


int main() {

   C c;
   c.funa();
   c.func();
   c.fund();
   
    
    return 0;
}