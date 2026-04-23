#include<iostream>

using namespace std;

int main(){
int x = 10;

// addresss of x = &x

// pointer storing that adress = ptr

//dereferencing the pointer *ptr = value at that address

int* ptr = &x;

int** parPtr = &ptr;

cout<<"value of x : "<<x<<endl;
cout<<"address of x: "<<&x<<endl;
cout<<"address of x using pointers: "<<ptr<<endl;
cout<<"dereferencing ptr :"<<*ptr<<endl;
cout<<"address of ptr: "<<&ptr<<endl;
cout<<"address using parent pointer: "<<parPtr<<endl;
cout<<"dereferencing parent pointer: "<<**parPtr<<endl;

return 0;


}