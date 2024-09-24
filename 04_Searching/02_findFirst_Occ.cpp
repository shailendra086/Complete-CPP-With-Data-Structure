#include <iostream>
using namespace std;


// Now creating the function

int FirstOcc(int arr[], int n, int target){
    int s = 0; 
    int e = n - 1;

    int mid = s + (e-s)/2;
    //store the index
    int index = -1;
    while(s<=e){
        if(arr[mid] == target){
            index = mid;
            e = mid - 1;
        }
        else if (arr[mid] < target){
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return index;
}





//find the first occurence of element

int main() {
    int arr[10]= {2,3,3,4,4,4,4,5,6,8};
    int target = 4;

    int ans = FirstOcc(arr,10,target);
    cout << "Ans is : " << ans << endl;
    return 0;
}

// this is the correct ans; 
// thank you