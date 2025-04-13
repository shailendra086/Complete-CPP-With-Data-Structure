#include <iostream>
using namespace std;

int main() {
  int n;
  cout<< "Enter the value of n"<<endl;
  cin>>n;

  for(int i = 1; i<=n;i++){
    
    //printing space
    for(int j = 1; j<=n-i; j++){
      cout << " ";
    }
    for(int j = 1; j<=i; j++){
      cout << "*";
    

    }
    cout << endl;
  }
  return 0;
}