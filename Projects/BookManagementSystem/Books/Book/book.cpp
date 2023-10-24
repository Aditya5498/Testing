#pragma once
#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

static unsigned int Num = 1;

class Book{

    unsigned int Quantity, bookNum;
  
    string Name; 

public:
//Declaring and Defining constructors

Book(){
    cout<<"\n\tEnter the book name\t:\t";
    cin>>Name;
    cout<<"\n\tEnter the Quantity of books\t:\t";
    cin>>Quantity;
    this->bookNum = Num;
    Num++;
}

Book(string Name,unsigned int Quantity){
this->Name = Name;
this->Quantity = Quantity;
this->bookNum = Num;
Num++;
}

//should only be used when reading from file
Book(string Name, unsigned int bookNum, unsigned int Quantity){
this->Name = Name;
this->Quantity = Quantity;
this->bookNum = bookNum;
}

// Defining helper functions
string getName(){ return this->Name;}
void setName(string Name){ this->Name = Name; }

unsigned int getQuantity(){ return this->Quantity;}
void setQuantity(unsigned int Quantity){ this->Quantity = Quantity;}

unsigned int getBookNum(){ return this->bookNum;}

void Book::displayBookInfo(){
    cout << left << setfill('*') << setw(5) << this->bookNum \
    << left << setfill(' ') << setw(10) << this->Name \
    <<right<<setfill('.') <<setw(20) << this->Quantity << endl;
}

void increaseQty(unsigned int num = 1){
  this->Quantity+=num;
}

void decreaseQty(unsigned int num = 1){
      while(num > this->Quantity){
        cout<<"\n\tThe entered value is "<<num<<" which is greater than number of avalilable \
        books ("<<this->Quantity<<")\n\tPlease enter number which is less than "<<this->Quantity<<endl;
    }
    if(num > 0) this->Quantity-=num;
}
};