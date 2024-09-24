#include <iostream>
using namespace std;



    
void update(int *p){
    *p = *p + 10;

}

int main() {
    

    // cout << arr << endl;
    // cout << &arr[0] << endl;
    // int*p = arr;
    // cout << p << endl;
    // cout << &p << endl;
    
    // cout <<*arr << endl;
    // cout << *arr + 1 << endl;
    // cout << * (arr + 1) << endl;
    // cout << * (arr + 3)  << endl;
    // cout << arr << endl;
    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;
    // cout << arr[3] << endl;
    // int *p  = arr;
    // cout << sizeof(p) << endl;
    // cout << sizeof(*p) << endl;
    // char ch[10] = "oveBabbar";
    // char *c = ch;
    // cout << c << endl;



    // cout << ch << endl;
    // cout << ch[0];
    // cout << &c << endl;
    // cout << *c << endl;
     
    // char name[10] = "SherBno";
    // char *c = &name[0];

    // cout << name << endl;
    // cout << &name << endl;
    // cout << *(name + 3) << endl;
    // cout << c << endl;
    // cout << &c << endl;
    // cout << c + 2 << endl; 
    // cout << *c  << endl;
    // cout << c + 8 << endl;




    // char ch = 'k';
    // char *cz = &ch;
    // cout << cz << endl;

   
   int a = 5;
   cout << "a is : "<<  a << endl;
   int* p = &a;

   update(p);
   cout << "after update : " << a << endl;
    
    
    return 0;
}