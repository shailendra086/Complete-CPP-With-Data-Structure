#include <iostream>
using namespace std;


class A{
    public:
    void funa(){
        cout << "Function A" << endl;
    }
    
};

class B {
    public:
    void funa(){
        cout << "Function B" << endl;
    }
};

class C : public A,public B{
    public:
    void func(){
        cout << "Function C" << endl;
    }
};

int main() {
    
    C c;
    c.A::funa();
    c.B::funa();
    return 0;
}