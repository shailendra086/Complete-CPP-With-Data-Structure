#include <iostream>
#include<vector>
using namespace std;

int main() {
    //vecotr             name row type      col , value
    vector<vector <int> > arr(5,vector<int>(5,-8));
    for (int i = 0; i<arr.size(); i++){
        for (int j = 0; j<arr[i].size(); j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
   
    cout << endl;

    // creating the array with the element with 3
    vector<vector<int> > brr (3, vector<int>(3,2));

    for (int i = 0; i<brr.size(); i++){
        for (int j = 0; j < brr[0].size(); j++){
            cout << brr[i][j];
        }
        cout << endl;
    }
    return 0;
}