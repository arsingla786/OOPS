//multi level inheritance - when parent passes properties to another parent
//then it again passes the properties to a child (PARENT->PARENT->CHILD)


#include <iostream>
#include<string>
using namespace std;
class Person{
    public:
     string name;
     int age;
};


class Student : public Person{
    public:
        int rollno;
};

class GradStudent : public Student{
    public:
        string Branch;

        void getData(){
            cout<<"name : "<<name<<endl;
            cout<<"age : "<<age<<endl;
            cout<<"rollno : "<<rollno<<endl;
            cout<<"Branch: "<<Branch<<endl;
        }

};


int main() {
        GradStudent s1;
        s1.age=19;
        s1.name="arnav";
        s1.Branch="COE";
        s1.rollno=1010;

        s1.getData();
}