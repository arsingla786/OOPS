#include <iostream>
#include<string>
using namespace std;
class Teacher{
        //protertis(attributes)
        public://access modifiers - public,private(default),protected
        string name;
        string subject;
    
        string dept;
        private:
        float salary;

        //methods-functions present in class
        void changeDept(string newDept){
                    dept=newDept;
        }
        public:
        //setter
            void setSalary(float s){
                salary = s;
            }
            //getter
            double getSalary(){
                return salary;
            }

};
int main() {
    Teacher t1;//objeect for first teacher
    Teacher t2;
    Teacher t3;

    t1.name="arnav";
    t1.subject="cpp";
    t1.dept="COE";
  //  t1.salary=23000;
  //  (.)operator is used to access the properties of object from class
  cout<<"name of t1 = "<<t1.name<<endl; 
        t1.setSalary(70.0);
        cout<<"salary of t1 = "<<t1.getSalary()<<endl;

}
