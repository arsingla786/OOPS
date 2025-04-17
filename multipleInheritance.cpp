//when Child get properties from two parents and parents are not connected 
// PARENT1->CHILD<-PARENT2

#include <iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    int rollno;
    
};

class Teacher{
    public:
        string subject;
        int salary;
};

class TA : public Student,public Teacher  {
public:
    string researchArea;

    // void getData(){
       //     cout<<
    // }
};
int main() {
    TA t1;
    t1.name="arnav";
    t1.subject="computer";

    cout<<"name="<<t1.name<<endl;
    cout<<"subject="<<t1.subject<<endl;
    cout<<"roll = "<<t1.rollno<<endl;

}


