#include <iostream>
using namespace std;


void Subsequence(string str,string output , int i){

    // base case
    if(i>=str.length()){
        cout << output << endl;
        return;
    }

    // exlude wala 
     Subsequence(str , output ,  i+1);

    // include 
    output.push_back(str[i]);
   Subsequence(str,output, i+1);
}



int main() {
    string str = "abc";
    string output = "";
    int i = 0;

    Subsequence(str,output,i);
    return 0;
}