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
    
    void speak(){
        cout << "Dog barking" << endl;
    }
};



int main() {
    Dog obj;
    obj.speak();
    return 0;
}