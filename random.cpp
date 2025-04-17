// #include <iostream>
// #include<string>
// using namespace std;

// class Car{
//     public:
//     string brand;
//     string model;
//     int year;

//     Car(string brand,string model,int year){
//         this->brand=brand;
//         this->model=model;
//         this->year=year;
//     }
//     void getInfo(){
//         cout<<"brand = "<<brand<<endl;
//         cout<<"model = "<<model<<endl;
//         cout<<"year = "<<year<<endl;
//     }
// };

// int main() {
//     Car c1("BMW","X5",2030);
//     c1.getInfo();

// }
//_______________________________________________________
/*Write a C++ program to implement a class
 called Circle that has private member
 variables for radius. Include member
  functions to calculate the circle's
   area and circumference.*/

// #include <iostream>

// using namespace std;

// class Circle{
      
//         int radius;
//         public:
//         void setRadius(int r){
//             radius = r;
//         }
      
//         float Area(){
//            return 3.14*radius*radius;
        
//         }
//         float Circumference(){
//             return 2*3.14*radius;
//         }
       
// };
//     int main() {
//     Circle c1;
//     c1.setRadius(6);
//   cout<<"area = "<<c1.Area()<<endl;
//   cout<<"circumference = "<<c1.Circumference()<<endl;

// }
//_________________________________________________
/*Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member 
functions to calculate the rectangle's area and perimeter.*/

// #include <iostream>

// using namespace std;
// class Rectangle{
//     private :
//     int length;
//     int breadth;
//     public:
     
//     void setLength(int l){
//         length = l;
//     }
//     void setBreadth(int b){
//         breadth = b;
//     }

//     int Area(){
//         cout<<"area = "<<length*breadth<<endl;
//     }
//     int Perimeter(){
//         cout<<"perimeter = "<< 2*(length+breadth)<<endl;
//     }
// };
// int main() {
//     Rectangle r1;
//     r1.setBreadth(5);
//     r1.setLength(4);

//     r1.Area();
//     r1.Perimeter();

// }

//____________________________________________
/*Write a C++ program to create a class called 
Person that has private member variables for 
name, age and country.
 Implement member functions 
 to set and get the values of these variables.*/

//  #include <iostream>
//  #include<string>
//  using namespace std;
//  class Person{
//         private:
//         string name;
//         int age;
//         string country;

//         public:

//         void setName(string n){
//             name=n;
//         }
//         void setAge(int a){
//             age=a;
//         }
//         void setCountry(string c){
//             country=c;
//         }
//         string getName(){
//             return name;
//         }
//         int getAge(){
//             return age;
//         }
//         string getCountry(){
//             return country;
//         }

//  };
//  int main() {
//      Person p1;
//      p1.setAge(19);
//      p1.setCountry("india");
//      p1.setName("arnav");

//      cout<<"age = "<<p1.getAge()<<endl;
//      cout<<"country = "<<p1.getCountry()<<endl;
//      cout<<"name = "<<p1.getName()<<endl;
//  }
//______________________________________________________--
/*Write a C++ program to implement a class 
called BankAccount that has private member variables for
 account number and balance. Include member 
functions to deposit and withdraw money from the account.*/
// #include <iostream>

// using namespace std;
// class BankAccount{
//     private:
//     int accNo;
//     int balance;
//     int withDraw;
//     int newBalance;

//     public:
//     void setAccno(int n){
//         accNo=n;
//     }
//     void setBalance(int b){
//         balance=b;
//     }

//     void setWithdrawl(int w){
//         withDraw=w;
//     }
//     int NewBalance(){
//         return balance - withDraw;
//     }
//     int getAccNo(){
//         return accNo;
//     }
// };
// int main() {
//     BankAccount b1;
//     b1.setAccno(1234);

//     b1.setBalance(10000);

//     b1.setWithdrawl(2000);

//     cout<<"account number = "<<b1.getAccNo()<<endl;
//     cout<<"new balance = "<<b1.NewBalance()<<endl;
// }

//-_______________________________________-

/* Write a C++ program to create a class called Triangle
 that has private member variables for the lengths 
 of its three sides. Implement member functions
  to determine if the triangle is equilateral, 
  isosceles, or scalene.*/

// #include <iostream>

// using namespace std;
// class Triangle{
//     public:
//         int l1,l2,l3;
//     Triangle(int l1,int l2,int l3){
//         this->l1=l1;
//         this->l2=l2;
//         this->l3=l3;
//     }
//     void test(){
//         if((l1==l2)&&(l2==l3)&&(l1==l3)){
//             cout<<"equilateral"<<endl;
//                  return;
//         }
//         if((l1!=l2)&&(l2!=l3)&&(l1!=l3)){
//             cout<<"scalene"<<endl;
//             return;
//         }
//         else{
//             cout<<"isosceles"<<endl;
//         }
//     }
// };
// int main() {
//     Triangle t1(3,3,3);
//         t1.test();
// }

//______________________________________________________
/*Write a C++ program to implement a class called Date 
that has private member variables for day, month, and year. 
Include member functions to set and get these variables,
 as well as to validate if the date is valid.*/

//  #include <iostream>
//  #include<string>
//  using namespace std;
//  class Date{
//     public:
//         int date;
//         int month;
//         int year;

//         Date(int date,int month,int year){
//             this->date=date;
//             this->month=month;
//             this->year=year;
//         }

//         void ValidDate(){
//             if(date>=1 && date<=31){
//                 if(month>=1 && month<=12){
//                     cout<<"Yes valid"<<endl;
//                 }
//             }
//             else{
//                 cout<<"Invalid"<<endl;
//             }
//         }

//  };
//  int main() {
//      Date d1(40,12,2009);
//      d1.ValidDate();
//  }
//________________________________________________________
/*Write a C++ program to implement a class called Student
 that has private member variables for name, class,
  roll number, and marks. Include member functions
   to calculate the grade based on the 
marks and display the student's information.*/
// #include <iostream>
// #include<string>
// using namespace std;
// class Student{
//     public:
//     string name;
//     int rollno;
//     int Class;
//     int marks;

//     Student(string name,int rollno,int Class,int marks){
//         this->name=name;
//         this->rollno=rollno;
//         this->Class=Class;
//         this->marks=marks;
//     }

//     void Info(){
//         cout<<"name = "<<name<<endl;
//         cout<<"rollno = "<<rollno<<endl;
//         cout<<"class = "<<Class<<endl;
//         cout<<"marks = "<<marks<<endl;
//     }
//     void Grades(){
//             if(marks>=90){
//                 cout<<"A"<<endl;
//             }
//             if(marks>=60 && marks<90){
//                 cout<<"B"<<endl;
//             }
//             else{
//                 cout<<"F"<<endl;
//             }
//     }

// };
// int main() {
//     Student s1("arnav",1010,12,85);
//     s1.Info();
//     s1.Grades();
// }
//_________________________________________________________
/* Write a C++ program to implement a class called Shape
 with virtual member functions for calculating 
 area and perimeter. Derive classes such as Circle,
  Rectangle, and Triangle from the Shape class and 
override virtual functions accordingly.*/


