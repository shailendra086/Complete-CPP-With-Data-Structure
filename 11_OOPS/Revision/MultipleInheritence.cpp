#include <iostream>
using namespace std;

class Animal {
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout << "Animal speaking" << endl;
    }

};



class Dog {
    public:
    
    void bark(){
        cout << "Dog barking" << endl;
    }
};
// Multiple Inheritence
class Cat : public Dog, public Animal{
    public:
    void meow(){
        cout << "Cat meowing" << endl;
    }
};



int main() {

   Cat c;
    c.speak();
    c.bark();
    return 0;
}