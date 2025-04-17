#include <iostream>

using namespace std;

class Student{
 public:
 string name;
 int cgpa;

 Student(string name,int cgpa){
    this->name=name;

    this->cgpa = cgpa; 
 }
void getInfo(){
    cout<<"name = "<<name<<endl;
    cout<<"cgpa = "<<cgpa;
}
//__________
~Student(){
    cout<<"hi i delte everything";
    //delete cgpaPtr//for dallocating dynamic memory
}
//_____________this is the destructor
};
int main() {
    Student s1("vishu",9.44);
    s1.getInfo();
             Student s2(s1);
             s2.getInfo(); //this is a shallow copy


}