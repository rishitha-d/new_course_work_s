#include <iostream>
using namespace std;

class Cow{
  public:
  string name;
  int age;
  float prod;
  float profit;

  //constructor
  Cow()
  {
    cout<<"hi i am constructor"<<endl;
  }

  void getInfo(){
    cout<<"name : "<<name<<endl;
    cout<<"age : "<<age<<endl;
    cout<<"production : "<<prod<<endl;
    cout<<"profit : "<<profit<<endl;
  }
  
};

int main(){
  Cow c1;
  c1.name = "lakshmi";
  c1.age = 5;
  c1.prod = 8425132.36;
  c1.profit = 10000000;
  c1.getInfo();
  return 0;
}
