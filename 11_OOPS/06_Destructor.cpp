#include <iostream>
using namespace std;

class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor called!" << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    Demo obj;  // Constructor runs automatically
    return 0;  // Destructor runs when obj goes out of scope
}
