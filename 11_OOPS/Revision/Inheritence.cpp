#include <iostream>
using namespace std;

class Human{
    protected:
    int height;
    public:
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;

    }
    int setWeight(int w){
        this->weight = w;
    }
};

class Male : private Human{
    public:
    string color;

    void sleep(){
        cout << "Male sleeping" << endl;
    }
    cout << this->height << endl;

};

int main() {

    Male m1;
   

    // Male Obje1;
    // cout << Obje1.age << endl;
    // cout << Obje1.getAge() << endl;
    // cout<< Obje1.setWeight(10) << endl;
    // cout << Obje1.weight << endl;
    // cout << Obje1.age << endl;
    // cout << Obje1.color << endl;
    
    


    return 0;
}