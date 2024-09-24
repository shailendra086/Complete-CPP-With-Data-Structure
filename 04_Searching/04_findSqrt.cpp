#include <iostream>
using namespace std;
// here first find integer part
int FindSqrt(int n){
    int s = 0;
    int e = n;
    int mid = s + (e-s)/2;

    // store the number
    int ans = -1;
    while (s<=e){
        // multiply and check with number
        if(mid*mid == n){
            return mid;
        }
        else if (mid * mid < n){
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}



int main() {
    // find the sqrt using binary search


    int n;
    cout << "Enter the value to find Sqrt" << endl;
    cin >> n;

    int ans = FindSqrt(n);
    // this is print only integer  part
    cout << "The Ans is : " << ans <<  endl;

    // now lets print all decimmal point

    int pricision;
    cout << "Enter the Pricision " << endl;
    cin >> pricision;

    // creating the step 
    double step = 0.1;

    //make the ans double
    double finalAns = ans;

    for(int i = 0; i<pricision ; i++){
                              // check with original number
        for(double j = finalAns ; j*j<=n; j = j+step){

            // now update ans
            finalAns = j;
        }
        // now update the pricision
        step = step/10;
    }
    cout << "The Final ans : " << finalAns << endl;
    return 0;
}

// this is the program of sqrt of any number

// like  , subscribe and share with your friends
// thank you 

