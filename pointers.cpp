#include<iostream>

using namespace std;

int main(){



int x = 1;

// addresss of x = &x

// pointer storing that adress = ptr

//dereferencing the pointer *ptr = value at that address

int *ptr = &x;

cout<<&x<<endl;
cout<<ptr<<endl;  //061ff08
cout<<*ptr<<endl; //1

int* n = NULL ;
cout << n <<endl ; //0
}