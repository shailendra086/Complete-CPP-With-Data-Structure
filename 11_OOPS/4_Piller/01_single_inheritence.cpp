#include <iostream>
using namespace std;

class Parent {
    public:

    void car(){
        cout << "Parent have a Car" << endl;
    }
    void bike(){
        cout << "parent  have bike" << endl;
    }



};

class child : public Parent{
    
    

};

int main() {
    Parent p1 ;
    child ch;
    ch.bike();

    return 0;
}