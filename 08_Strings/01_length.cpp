#include <iostream>
using namespace std;

void countLength(string s){
    int cnt = 0;
    for (int i = 0; s[i] !='\0'; i++){
        cnt++;
    }
    cout << "Lenght of the strings is : " << cnt << endl;
}


int main() {
    string s ; 
    cout<< "Enter the strings : " << endl;
    cin >> s;
    countLength(s);   
    return 0;
}