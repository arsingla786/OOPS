#include <iostream>
using namespace std;

class Human{
   
    private://this is access modifiers to access the data - public,private,potected
    int health;
  //  private://this can only be accessed in this block

    char level;
public:
        int getHealth(){
                return health;//this is getter - to access the value of private members outside the class
        }
        char getLevel(){
            return level;
        }
        void setHealth(int  h){
                health =h;//this is setter to give a value to private members
        }
        void setLevel(char l){
            level = l;
        }
};

int main() {
    Human ramesh;//created an object of type Hero
    // ramesh.health=70;
    // ramesh.level='a';
    cout<<"size : "<<sizeof(ramesh)<<endl;//8
    cout<<"health is : "<<ramesh.health<<endl;
    cout<<"level is : "<<ramesh.level<<endl;

 Human *ramesh= new Hero; //this is for dynamic memory
    //...........................
    ramesh.setHealth(70);

    cout<<"health or ramesh using setter = "<<ramesh.getHealth()<<endl;

}



//............
// object - it is the real world entity

// class- it is lik a blue print of the object which contains properties

// increases reusability and optiisation
