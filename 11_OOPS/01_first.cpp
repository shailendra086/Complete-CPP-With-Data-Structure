#include <iostream>
using namespace std;

class animal {
    private : 
    int weight = 10;
    //state and properties 
    public :
    int age = 23;
    string name ; 

    // behavior 
    void eat(){
        cout << "Eating " << endl;

    }

    void sleep (){
        cout << "Sleeping " << endl;
    }

    int getweight(){
        return weight;
    }
    int setweight(int w){
        weight = w;
    }


};

int main() {
    // object creation 
    //static allocation 

    animal ramesh ; 
    cout <<"age is : "<<  ramesh.age << endl;

    cout << ramesh.name<< endl;

    ramesh.eat();
   cout << "weight is : " <<  ramesh.getweight();

    // dynamic memory allocation 

   
    return 0;
}