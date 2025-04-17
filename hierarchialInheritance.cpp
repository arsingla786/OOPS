//when more than one child bears properties from single parent 
// child<-parent->child
//ex - teacher<-person->student

#include <iostream>
#include<string>
using namespace std;
class Person{
public:
        string name;
};

class Teacher : public Person{
    public:
    string subject;
};

class Student : public Person{
public:
    int rollno;
    //using pARAmeterised constructor
    Student (string name,int rollno){
            this->name=name;
            this->rollno=rollno;
    }
    void getData(){
        cout<<"name of student = "<<name<<endl;
        cout<<"roll no. of the student = "<<rollno<<endl;
    }
};
int main() {
    Student s1("arnav",1010);
    // s1.name="arnav";
    // s1.rollno=1010;
        s1.getData();
    Teacher t1;
    t1.name="neha";
    t1.subject="maths";

    cout<<"name of teacaher : "<<t1.name<<endl;
    cout<<"subject of teacher : "<<t1.subject<<endl;


}