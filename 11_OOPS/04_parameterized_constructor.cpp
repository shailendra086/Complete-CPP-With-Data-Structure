#include <iostream>
using namespace std;

class Animal {
    public:
    int age ; 

    Animal(int age){
        cout << "age is : " << age << endl;
    }

};

int main() {
    Animal*  a = new  Animal(10);
    return 0;
}