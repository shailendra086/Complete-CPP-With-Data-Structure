#include <iostream>
using namespace std;

class Hero{
    public:
    static int count;

    static int getCount(){
      
        return count;
    }
};



int Hero::count = 10;

int main() {
   // cout << Hero::count << endl;
    cout << Hero::getCount() << endl;
    
    return 0;
}