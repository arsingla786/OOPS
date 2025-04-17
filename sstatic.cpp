#include <iostream>

using namespace std;
void print(){
 int x=0;//run ultiple times
    cout<<"x : "<<x<<endl;
    x++;
}
void printNew(){
    static int x=0;
    //only run one time //exist lifetime of the code
    //fixed for all objects in a class
    cout<<"x : "<<x<<endl;
    x++;
}
int main() {
    print();
    print();
    print();
    printNew();
    printNew();
    printNew();
}