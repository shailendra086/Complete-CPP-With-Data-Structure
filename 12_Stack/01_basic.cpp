#include <iostream>
#include<stack>
using namespace std;

int main() {
    //using the stl library function

    stack<int>st;
    st.push(5);
    st.push(10);
    cout <<"size of stack is : "<< st.size()<< endl;
    st.pop();
    st.push(4);
    st.push(30);
    cout <<"size of stack is : "<< st.size()<< endl;

    
    return 0;
}