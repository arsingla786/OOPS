//in run time polymorphism we use inheritance also

/*  ->function overriding is example of this
when we make same func. in parent and child class
the child class will over ride parent class   */


#include <iostream>

using namespace std;
class Parent {
    public:
    string name;
    void print(){
        cout<<"parent class "<<endl;
    }
};

class Child : public Parent{
        public:
        void print(){
        cout<<"child class"<<endl;
}
};
int main() {
    Child c1;
    c1.print();

    Parent p1;
    p1.print();
}