#include <iostream>
using namespace std;


class Hero {
    public:
    int health;


    Hero(){
       cout << "THis is the consturctor called" << endl;
    }

};

int main() {
    cout << "Hello World" << endl;
    Hero* h1 = new Hero();
   cout << "hello" << endl;

    
    return 0;
}