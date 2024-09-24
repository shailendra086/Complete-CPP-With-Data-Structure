#include <iostream>
using namespace std;

void ReverseChar(string&st , int s , int e){
    // base condition
    if(e<s) return ;

    // swap 
    swap(st[s],st[e]);

    // next iteration 
    ReverseChar(st,s+1 , e-1);
}




int main() {
    string st = "Shailendra";
    int s = 0; 
    int e = st.size() -1;

    ReverseChar(st, s, e);
    cout << "After Reversing the String is : " << st << endl;
    return 0;
}