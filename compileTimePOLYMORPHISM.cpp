//polymorphism - it is the ability of objects to take 
// different forms or behave in different ways depending
// on the context thy are used for


// #include <iostream>

// using namespace std;

// class Student{
//     public:
//     string name;
//       Student(){
//         cout<<"non parameterised constructor call"<<endl;
//       }

//       Student(string name){
//         this->name=name;
//         cout<<"parameterised constructor call"<<endl;
//       }

// };
// int main() {
//  //   Student s1;
//     Student s1("arnav");
// //this is the example of - constructor overloading 
// //compite time polymorphism 
//     // so the same object can change behaviour on the 
//     // context of its use
// }
//_____________________________________________________________
//FUNCTION OVERLOADING - Compile time polymorphism
//when two functions of same name arw made but they 
//give different output in context of object use
#include <iostream>

using namespace std;
class Print{
public:
        void print(int x){
                cout<<"int : "<<x<<endl;
        }

        void print(char ch){
            cout<<"char : "<<ch<<endl;
        }
};
int main() {
    Print p1;
    p1.print(44);//first function is called 
    p1.print('a');//second function is called 
}

