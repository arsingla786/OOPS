//encapsulation - (capsule) which consits of data and its member functions
// at same block called 

//helps in hiding sensitive information

//constructors
//same name as the class
//Constructor hs no return type
//only called once (automatically) when object is created
//memory allocation happen when a cconstructor is called

#include <iostream>

using namespace std;
class Teacher{
    //non parameterised
        // public: 
        // Teacher(){
        //     cout<<"hi i am constructor"<<endl;
        // }
        //______________________________

    //parameterised - can pass multiple values in same constructor
    public:
    Teacher(string n,string d,string s,double sal){
            name=n;//this->name=n;
            dept=d;
            subject=s;
            salary = sal;
    }
    string name;
    string dept;
    string subject;
    double salary;

    void getInfo(){
        cout<<"name = "<<name<<endl;
        cout<<"subject = "<<subject<<endl;
    }
};
int main() {
    Teacher t1("arnav","COE","cpp",2000);//object created then constructor is called automatically
    
    t1.getInfo();
Teacher t2(t1);//copy contructor - to pass value of one object into another
 t2.getInfo();
}

//this pointer - it is a special pointer in c++ whichc points towards the currrent object

//this->property is same as *(this).property
