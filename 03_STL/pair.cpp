#include<bits/stdc++.h>
using namespace std;

void expainPair(){
    pair<int , int >p = {1, 3};
    cout << p.first << " " <<  p.second ;

}


void expainVector(){
    vector <int > v ; 
    v.push_back(1);
    v.push_back(5);
    v.push_back(3);
    v.push_back(4);

    cout << v.front() << endl;
    cout << v.back();
}

int main (){
    expainVector();
}