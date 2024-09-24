#include <iostream>
using namespace std;


int FindQuotient(int divident , int divisor){
    int s = 0;
    int e = abs(divident);
    // index 
    int index = -1;
    int mid = s + (e-s)/2;
    while (s<=e){
        if((mid*abs(divisor)) == abs(divident)){
            index = mid;
            break;
        }
        else if ((mid*abs(divisor)) < abs(divident)){
            index = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    if((divident <  0 && divisor < 0 ) || (divident >0 && divisor > 0)){
        return index;
    }
    return -index;
}

// abs use for calculate then print using the condition

int main() {
    int dividend = 100;
    int divisor = -3;
    // negative ke liye absolute bna lenge
    int ans = FindQuotient(dividend , divisor);
    cout << "The quotient is : " << ans << endl;
    // now calculate the decimal
    double step = 0.1;
    int pricision;
    cout << "Enter the Decimal Pricision" << endl;
    cin >> pricision;
    double finalans = abs(ans);
    for(int i = 0; i<pricision; i++){
        
        for(double j = finalans; j*abs(divisor)<=abs(dividend ); j = j+step){
            finalans = j;
        }
        step  = step / 10;
    }
     if((dividend<  0 && divisor < 0 ) || (dividend >0 && divisor > 0)){
       cout << "Final answer is : " << finalans << endl;
    }
    else cout << "Ans is : " << -finalans << endl;
    
    return 0;
}