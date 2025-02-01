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

//Hierarchical Inheritence
class Dog : public Animal{
    public:
    
    void bark(){
        cout << "Dog barking" << endl;
    }
};
//Hierarchical Inheritence
class Cat : public Animal{
    public:
    void meow(){
        cout << "Cat meowing" << endl;
    }
};
class Rat : public Animal{
    public:
    void run(){
        cout << "Running the Rat" << endl;
    }
};

int main() {

   Rat r;
   r.speak();

    
    return 0;
}