#include <iostream>
using namespace std;


void Replace_char(string s , char oldchar , char newchar){
    int n = s.size();
    for (int i = 0; i<n; i++){
        if (s[i] == oldchar){
            s[i] = newchar;
        }
    }
    cout << "After Updating : " << s << endl;
}



int main() {
    string s;
    cout << "Enter the strings : " << endl;
    cin >> s;
    char oldchar ;
    cout << "Enter the old char : " << endl;
    cin >> oldchar;
    char newchar ; 
    cout << "Ente the new char " << endl;
    cin >> newchar;
    Replace_char (s, oldchar , newchar);
    // cout << "After Updating : " << s << endl;
    return 0;
}