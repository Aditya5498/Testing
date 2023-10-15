#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace people{
    class person{
        string name;
        string country;
        unsigned int age;
        public:
        person(){
            age = 0;
            name = "NULL";
            country = "NULL";
        }
        person(unsigned int age){
            this->age = age;
            name = "NULL";
            country = "NULL";
            }
        person(string name){this->name = name;}
        person(string name, unsigned int age){this->name = name;this->age = age;}
        person(string name, unsigned int age, string country){this->name = name;this->age = age;this->country = country;}

        string getName(){return name;}
        string getCountry(){return country;}
        unsigned int getAge(){return age;}
        
        void setName(string name){this->name = name;}
        void setAge(unsigned int age){this->age = age;}
        void setCountry(string country){this->country = country;}

        void displayInfo(){
            cout<<"INFO of person= "<<getName()<<" : "<<getAge()<<" : "<<getCountry()<<endl;
        }
    };
}