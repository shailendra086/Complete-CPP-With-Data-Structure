#include <iostream>
#include<string.h>
using namespace std;


// left to right method 
void FChar(string&s  ,int i , char ch, int& index){
    // base case
    if(i>=s.size()){
        return ;
    }
    // step first
    if(s[i] == ch){
        index = i;
    }
    FChar(s,i+1,ch,index);
}


void FCharRtoL(string&s  ,int i , char ch, int& index){
    // base case
    if(i <=0){
        return ;
    }
    // step first
    if(s[i] == ch){
        index = i;
        return ;
    }
    FChar(s,i-1,ch,index);
}


int main() {
    char s[] = "Shailendrrra";
    char ch = 'r';
    int index = -1;
    // right to lefft ke liye
     int * p = strrchr(s,ch);
    // int i = s.size() - 1 ;
    // FCharRtoL(s, i , ch,index);

    cout << "Last Index is : " << index << endl;
    return 0;


}