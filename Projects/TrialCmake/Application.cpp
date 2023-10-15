#ifndef __IOSTREAM_H
#include<iostream>
#endif
#include "mathLib.h"
#include "GLFW/glfw3.h"
#include "People.cpp"
#include "Shape.cpp"
using namespace std;

int main(){
    mathLib::Circle *obj1 = new mathLib::Circle(10);
    cout<<"\n\tArea of circle = "<<obj1->getArea();
    cout<<"\n\tCircumference of circle = "<<obj1->getCircumference();
    cout<<"\n\t3.5 + 4.5 = "<<mathLib::add(3.5f,4.5f)<<endl; 

    people::person *person1 = new people::person("Testing", 23, "IN");
    person1->displayInfo();

    Shapes::Circle *circle = new Shapes::Circle(10);
    cout<<"Area of circle = "<<circle->area()<<endl;

    Shapes::Rectangle *rec = new Shapes::Rectangle(10,12);
    cout<<"Area of rectangle = "<<rec->area()<<endl;

    Shapes::Triangle *tria = new Shapes::Triangle(4,3);
    cout<<"Area of traingle = "<<tria->area()<<endl;
    cout<<"Perimeter of triangle = "<<tria->perimeter()<<endl;

GLFWwindow *window;

     if( !glfwInit() )
    {
        fprintf( stderr, "Failed to initialize GLFW\n" );
     //   exit( EXIT_FAILURE );
    }

     window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );
    if (!window)
    {
        fprintf( stderr, "Failed to open GLFW window\n" );
        glfwTerminate();
       // exit( EXIT_FAILURE );
    }

     while( !glfwWindowShouldClose(window) )
    {
        // Draw gears
       // draw();

        // Update animation
       // animate();

        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

        glfwTerminate();
}