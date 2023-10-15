#pragma once

namespace mathLib{
    float add(float num1, float num2);
    int add(int num1, int num2);

   class Circle{
float radius;
public:

Circle(){
    radius = 0;
}

Circle(float radius){
    this->radius = radius;
}

void setRadius(float radius){ this->radius = radius;}
float getRadius(){return radius;}

float getArea(){  return radius * radius;}

float getCircumference(){  return 2 * 3.14 * radius;}

};
}