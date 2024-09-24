#include <iostream>
#include<vector>
using namespace std;

int main() {
    // 2d array using vector
    vector<vector<int> > arr;

    // vector<int>a{1,2,3};
    // vector<int>b{3,4,6};
    // vector<int>c{7,8,9};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

     // row arr.size()
    // for (int i = 0; i<arr.size(); i++){

    //     for (int j = 0; j < arr[0].size(); j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vector<vector<int > > array; 

    vector<int>a{3,4,5};
    vector<int>b{33,2,6};
    vector<int>c{4,2,22,3,4,6,4};
    vector<int>d{3,4,2,2,2,2,2,2,2,2,2,1,2,1,2};

    array.push_back(a);
    array.push_back(b);
    array.push_back(c);
    array.push_back(d);

    for (int i = 0; i<array.size(); i++){
        for(int j = 0; j<array[i].size(); j++){
            cout << array[i][j] << " ";

        }
        cout << endl;
    }
    return 0;
}