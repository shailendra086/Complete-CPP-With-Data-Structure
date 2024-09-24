#include <iostream>
using namespace std;

string Upper(string str){
    for(int i = 0; i<str.size(); i++){
        str[i] = str[i] - 'a' + 'A';
    }
    cout << str << endl;
}

void Uppercase_only(string str2){
    for (int i = 0; i<str2.size(); i++){
        if(str2[i] >='a' && str2[i] <='z'){
             str2[i] = str2[i] - 'a' + 'A';
        }
    }
    cout << str2 << endl;
}


int main() {
    string str = "shailendra";
    string str2 = "sHaileNdra";
    Upper(str);
    Uppercase_only(str2);
    return 0;
}