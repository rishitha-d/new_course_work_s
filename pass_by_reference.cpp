#include<iostream>

#include<vector>

using namespace std;

void change(int &b){
  b = 20;

}

int main() {
  int a = 10;

  change(a);
  cout<<"inside main func: " << a<< endl; //20
  return 0;

}