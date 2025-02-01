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

class Dog : public Animal{
    public:
    
    void bark(){
        cout << "Dog barking" << endl;
    }
};

class Cat : public Dog{
    public:
    void meow(){
        cout << "Cat meowing" << endl;
    }
};

int main() {

   Cat c;
    c.speak();
    
    return 0;
}