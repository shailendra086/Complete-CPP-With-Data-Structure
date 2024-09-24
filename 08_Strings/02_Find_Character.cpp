#include <iostream>
using namespace std;

char findCharacter(string s, char ch){
    int size = s.size();
    for (int i = 0 ; i< size; i++){
        if (s[i] == ch ){
            return i;
        }
    }
    return 0;
}


int main() {
    string s;
    cout << "Enter the Strings : " << endl;
    cin >> s;
    char ch; 
    cout << "Enter the Charcter to find : " << endl;
    cin >> ch;
   int ans =  findCharacter(s, ch); 
   if (ans) {
    cout << "Find char at index :  " << ans; 
   }
   else cout << "Not found character" << endl;
    return 0;
}