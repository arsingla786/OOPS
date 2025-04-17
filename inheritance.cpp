// //passing properties of one class(parent) into other class(child) is called inheritance
// #include <iostream>
// #include<string>
// using namespace std;
// class Person{
//     public:
//         string name;
//         int age;
// Person(){
//     cout<<"parent class constructor called"<<endl;
// }
//         // Person(string name,int age){
//         //     this->name=name;
//         //     this->age=age;
//         // }
//         // void getData(){
//         //     cout<<"name : "<<name<<endl;
//         //     cout<<"age : "<<age<<endl;
//         // }
// };

// class Student : public Person//to inherit
// {
//     public:

//    Student(){
//         cout<<"student class constructor called"<<endl;
//    }
//         //name,age(already defines),roll no.
//         //we can inherit Person class;
//         int roll_No ;
//         void getInfo(){
//             cout<<"name : "<<name<<endl;
//             cout<<"age : "<<age<<endl;
//             cout<<"roll no. : "<<roll_No<<endl;
//         }
// };
// int main() {
//     Student s1;
//     s1.name="arnav";
//     s1.roll_No=1010;
//     s1.age=19;
//     s1.getInfo();
// }

//parameterised constructor
#include <iostream>
#include<string>
using namespace std;
class Person{
        public:
        string name;
        int age;
        Person(string name,int age){
            this->name=name;
            this->age=age;
        }
};

class Student : public Person{
        public:
        int rollno;
        Student(string name,int age,int rollno): Person(name, age){
            this->rollno=rollno;
        }
        void getData(){
            cout<<"name = "<<name<<endl;
            cout<<"age="<<age<<endl;
            cout<<"rollno="<<rollno<<endl;
        }
};
int main() {
    Student s1("arnav",19,1010);
    s1.getData();
}


//hybrid Inheritence - mix of all categories anyone can
//bear properties from any class







