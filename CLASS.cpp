#include <iostream>
//#include "Hero.cpp"
using namespace std;
//create a different class file and include it or create inside the same file
class Hero{
   
    private://this is access modifiers to access the data - public,private,potected
    int health;
  //  private://this can only be accessed in this block
 // protected:
    char level;
        int getHealth(){
                return health;
        }
        char getLevel(){
            return level;
        }
        void setHealth(int  h){
                health =h;
        }
        void setLevel(char l){
            level = l;
        }
};

int main() {
    Hero ramesh;//created an object of type Hero
    // ramesh.health=70;
    // ramesh.level='a';
    cout<<"size : "<<sizeof(ramesh)<<endl;//8
    cout<<"health is : "<<ramesh.health<<endl;
    cout<<"level is : "<<ramesh.level<<endl;

 hero *ramesh= new Hero; //this is for dynamic memory
    //...........................
    ramesh.setHealth(70);

    cout<<"health or ramesh using setter = "<<ramesh.getHealth()<<endl;

}



//............
// object - it is the real world entity

// class- it is lik a blue print of the object which contains properties

// increases reusability and optiisation