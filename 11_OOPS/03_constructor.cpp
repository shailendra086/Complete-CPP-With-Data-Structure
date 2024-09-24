#include <iostream>
using namespace std;

class Shailendra{
    public:
    int age ; 
    int weight ;
    string type;
    //this is the constructor
    Shailendra(){
        this->age= 0;
        this->type= "";
        this->weight = 0;
        cout << "This is the constructor" << endl;
    }
};

int main() {
    Shailendra* s = new Shailendra;

    

    return 0;
}