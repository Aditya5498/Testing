#include<iostream>
#include "mathLib.h"

using namespace std;

int main(){
    mathLib::Circle *obj1 = new mathLib::Circle(10);
    cout<<"\n\tArea of circle = "<<obj1->getArea();
    cout<<"\n\tCircumference of circle = "<<obj1->getCircumference();
    cout<<"\n\t3.5 + 4.5 = "<<mathLib::add(3.5f,4.5f)<<endl; 
}