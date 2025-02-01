#include <iostream>
using namespace std;

class Hero{
    public:
    


    Hero(){
        cout << "This is the constructor called" << endl;
    }

    Rero(Hero & tem;){
        cout << "Copy constructor is called" << endl;
    }
}

int main() {
    Hero h;

    Rero R(h);
    return 0;
}