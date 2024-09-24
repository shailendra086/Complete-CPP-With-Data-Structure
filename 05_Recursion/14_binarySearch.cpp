#include <iostream>
using namespace std;

int BinarySearch(int arr[],int s,int e , int key){
   
    //base case 
    if(s>e){
        return -1 ;
    }
     int mid = s + (e-s)/2;
    if(arr[mid] == key){
        return mid;
    }
    if (arr[mid]<key){
                 return BinarySearch(arr,mid+1,e,key);
    }
    else return BinarySearch(arr,s,mid-1,key);
}


int main() {
     int arr[] = { 10,20,34,42,56,57,78};
    int n = 7;
    int s = 0;
    int e = n-1;
    int key = 78;
    int index = BinarySearch(arr,s,e,key);
   cout << "Element is found at index : " << index << endl;
    return 0;
}