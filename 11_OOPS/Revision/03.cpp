#include <iostream>
using namespace std;



class Hero{
    private:
    int health;

    public:
    int getHealth(){
        return health;
    }
    void setHealth(int h,char password = 'a'){
        //specific condition lga skte hai ;
        if(password == 'a'){
            health = h;
        }

        
    }

};

int main() {

    Hero Ramesh;



    //dyanamic memory allocation
    // Hero* h1 = new Hero();

    // cout << "Health is : "<< h1->getHealth() << endl;
    // cout << 


    //static allocation of the object
    // Hero h1;
    // cout << "Health is : " << h1.getHealth() << endl;
    // h1.setHealth(10);
    // cout << "health is : " << h1.getHealth() << endl;

    
    return 0;
}