#include <iostream>
using namespace std;


class Animal {
    public:
    int age ; 

    Animal(int age){
        cout << "age is : " << age << endl;
    }

    Animal (Animal & obj){
        cout << "Copy constructor is called " << endl;
    }

};


int main() {
    
    return 0;
}