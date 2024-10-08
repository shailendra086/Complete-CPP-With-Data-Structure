// parent class se some properties child class me inherit krti hai

#include <iostream>
using namespace std;

class Animal{
    public: 
    int age ; 
    int weight; 
    void eat(){
        cout << "Eating " << endl;
    }
};
///        mode of inheritence 
class Dog: private Animal {
    public: 
    void print(){
        cout <<  this->age;
    }

};

int main() {
    Dog d1;
    d1.print();
    return 0;
}

//private chije inherit nhi hoti hai 
