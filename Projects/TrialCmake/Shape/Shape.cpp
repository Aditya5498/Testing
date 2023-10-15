#pragma once
#include<iostream>
#include <cmath>
using namespace std;

namespace Shapes{
    class Shape{
        public:
        Shape(){
            cout<<"\n\tInside Shape\n";
        }
        virtual float area(){ cout << "print base class\n"; return 0;}
        virtual float perimeter(){ cout << "print base class\n"; return 0; }
    };

    class Circle:public Shape{
        float radius;
        public:
        Circle(){
            cout<<"\nEnter the radius\t:\t";
            cin>>radius;
            cout<<endl;
        }
        Circle(float radius){
            this->radius = radius;
        }
        float perimeter(){
            cout<<"\n\tInside circle\n";
            return radius*2*3.14;
        }
        float area(){
            cout<<"\n\tInside circle\n";
            return  radius * radius; 
        }
    };

    class Rectangle:public Shape{
        float length, breadth;
        public:
        Rectangle(float length,float breadth){
            this->length = length;
            this->breadth = breadth;
        }
        float perimeter(){
            cout<<"\n\tInside Rectangle\n";
            return 2 * (length + breadth);
        }
        float area(){
            cout<<"\n\tInside Rectangle\n";
            return length * breadth;
        }
    };

    class Triangle:public Shape{
        float base, height;
        public:
        Triangle( float base, float height){
            this -> base = base;
            this -> height = height;
        }
        float perimeter(){
            cout<<"\n\t Inside triangle\n";
            float side = sqrt((base * base) + (height * height));
            return side + base + height;
        }

        float area(){
            cout<<"\n\t Inside triangle\n";
            return 0.5 * base * height;
        }
    };
}