#include <iostream>
#include <string>

using namespace std;

/*

class Teacher {



  private:
  double salary;

  public:
  string name;
  string dept;
  string subject;

  Teacher(){
    dept = "Computer Science";
  }
  
  Teacher(string name,string dept,string subject,double salary){
    this->name = name;
    this->dept = dept;
    this->subject = subject;
    this->salary = salary;
  }


  Teacher(Teacher &orgObj) {
    cout<<"i am custom sopy constructor"<<endl;
    this->name = orgObj.name;
    this->dept = orgObj.dept;
    this->subject = orgObj.subject;
    this->salary = orgObj.salary;
  }
  void changeDept(string newDept){
    this->dept = newDept;
  }

  void getInfo(){
    cout<<"name : "<<name<<endl;
    cout<<"subject :" <<subject<<endl;
  }

  void setSalary(double s){
    salary = s;
  }
  double getSalary()
  {
    return salary;
  }

};

*/

class Student{
  public:
  string name;
  double* cgpaPtr;

  Student(string name,double cgpa){
    this->name =name;
    cgpaPtr = new double;
    *cgpaPtr = cgpa;
  }

  // custom copy construct
  Student(Student &obj){
    this->name = obj.name;
    cgpaPtr = new double;
    *cgpaPtr = *obj.cgpaPtr; //shallow coopy
  }

  
  void getInfo(){
    cout<<"name : "<<name<<endl;
    cout<<"cgpa  : "<<*cgpaPtr<<endl;
  }


};


int main() {
  
  Student s1("rishi",8.99);

  Student s2(s1); // custom copy constructor will be called
  
  s1.getInfo();
  s2.name = "neha";
  *(s2.cgpaPtr) = 9.2;
  s2.getInfo();
  return 0;

}