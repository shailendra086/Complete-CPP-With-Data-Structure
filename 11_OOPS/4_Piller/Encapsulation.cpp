#include <iostream>
using namespace std;

class Animal {
    public:
    //for perfect encapsulation we use the private  
    int age ; 
    int weight ; 
    
    void eat(){
        cout <<"Eating " << endl;
    }
    //get and setter use for private data member

    int getAge(){
        return this->age;
    }
    void setAge(){
        this->age = 12;
    }
};

int main() {
    Animal animal =  Animal();
    return 0;
}