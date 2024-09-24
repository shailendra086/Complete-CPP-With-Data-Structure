//dynamic memory allocation 
//stack memory and heap memory
//using the new keyword we can get a heap memory 

#include <iostream>
using namespace std;

 class animal {
    public : 
    int name;
    int age;

};

int main() {
    animal* ani = new animal;

    (*ani).name = 10;

    ani->age = 17;
    return 0;
}