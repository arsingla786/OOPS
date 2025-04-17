// Hiding all the unncessary details and showing only 
// important parts
//-> access modifiers
// details to show -> public
//details to hide -> private
// inherit privately -> protected

//aother method is use of abstract classes 
//it is a virtual base class whose functions 
//are used in other classes 

#include <iostream>

using namespace std;

 class Shape{//abstract class
    virtual void Draw()=0;//pure virtual function
    
};

class Circle : public Shape{
    public: 
    void Draw(){
        cout<<"drawing a circle"<<endl;
    }
};
int main() {
    Circle c1;
    c1.Draw();
}