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

int main() {

    Dog d;
    d.speak();
    
    return 0;
}