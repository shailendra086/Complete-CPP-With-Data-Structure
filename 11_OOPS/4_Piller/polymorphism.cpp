#include <iostream>
using namespace std;

//polymorphism means , existing in the multiple form
// compile time and run time polymorphiism


//compile time 
// functionn overloading 
// no of variable and type of variable me change krnna hai 
class Maths {
    public:

    int sum(int a , int b){
        cout << "I am first" << endl;
        return a+b;
    }
    int sum(int a , int b , int c){
        cout  << "i am second : " << endl;
        return a + b + c;
    }

    int sum (int a , float b ){
        cout << "I am third " << endl;
        return a + b;
    }
};

int main() {
    Maths obj;
    cout<< obj.sum(2,5.8f)
;    return 0;
}