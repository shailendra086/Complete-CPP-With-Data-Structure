#include <iostream>
#include<vector>
using namespace std;

int main() {
    int arr[6] = {2 ,4,6,8,8,12};
    int brr[3] = {2,3,8};
    vector<int>ans;

    for (int i = 0; i < 6; i++){
        int element = arr[i];
        for (int j = 0; j < 3; j++){
            if (element == brr[j]){
                ans.push_back(element);
                // agar element do bar hoto 
               // brr[j] = -1;
            }
        }
    }

    for ( auto i : ans ){
        cout << i << " ";
    }

    return 0;
}