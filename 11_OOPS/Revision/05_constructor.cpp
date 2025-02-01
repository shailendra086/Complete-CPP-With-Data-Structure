#include <iostream>
using namespace std;

class Hero {
    public:
    int health;
    Hero(){
        cout << "This is the constructor called" << endl;
    }
    Hero(int health){
         cout << "Address of this : " << this << endl;
        this->health = health;
       

    }
};

int main() {
   Hero h1(100);

    cout << "the addresss of the h1"<< &h1 << endl;
    

    return 0;
}