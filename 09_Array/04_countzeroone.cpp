#include <iostream>
using namespace std;

int main() {
    int arr[10] = {0,1,0,1,0,1,1,0,1,0};
    int n = 10;
    int NumZero = 0;    
    int NumOne = 0;  
    for (int i = 0; i<n ; i++){
        if (arr[i] == 0){
            NumZero++;
        }
        else NumOne++;
    }  
    cout << "NO of zero is : " << NumZero << endl;
    cout << "NO of One is : " << NumOne << endl;
    return 0;
}