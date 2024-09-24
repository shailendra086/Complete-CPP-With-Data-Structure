#include <iostream>
using namespace std;

int main() {
    char ch[20] = "Shailendra";
    char*c = ch;
    cout << ch << endl;
    cout << c << endl;
    cout << &ch << endl;
    cout << *c << endl;
    cout << &c << endl;
    return 0;
} 