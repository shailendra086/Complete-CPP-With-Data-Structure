#include <iostream>
using namespace std;

class Animal {
    public : 
    void sound(){
        cout << "This is the Sound of Animal" << endl;
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout << "Dog is Barking " << endl;
    }
};


int main() {

    Dog d ;
    d.sound();
    d.bark();

    return 0;
}