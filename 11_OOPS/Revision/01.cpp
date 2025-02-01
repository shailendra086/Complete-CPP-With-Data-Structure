#include <iostream>
using namespace std;

class Hero{
    public:
    int health;
   
    int level;///This is private member of the class and access one within the class 
    void print(){
        cout << level << endl;
    }

};


int main() {
    Hero h1;
    h1.health = 100;
    h1.level = 1;
   // cout << "Size of Hero:" sizeof(h1) << endl;
   cout << "Health is : " << h1.health<<endl;
   cout << "lvl is : " << h1.level<<endl;

    return 0;
}