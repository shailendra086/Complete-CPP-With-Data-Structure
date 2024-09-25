#include <iostream>
#include<stack>
using namespace std;



void PrintElementofStack(stack<int>st){
    while(st.empty()){
        cout << st.top() ;
        st.pop();
    }
}

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
    cout << "Check empty or not : " <<st.empty() << endl;
   PrintElementofStack(st);
  

    return 0;
}