#include <iostream>
using namespace std;


class A{
    public:

};

class B{
    public:
    int a;
    int b;
    public:
    int add(){
        return a+b;
    }

    void operator+(B &obj){
       int value1 = this->a;
       int value2 = obj.a;
       cout << "output is : " << value2 - value1 << endl;
    }

    void operator() (){
        cout << "Bracket operator" << endl;
    }
    void operator- (){
        cout << "Minues operator" << endl;
    }
};






int main() {

    B obj1 , obj2;
    obj1.a = 10;
    obj2.a = 20;
   obj1();
   obj1()-;
    
    return 0;
}