#pragma once
#include "Book/book.cpp"
#include <vector>

#ifndef __IOSTREAM_H
#include<iostream>
#endif

#ifndef __STRING_H
#include<string>
#endif

using namespace std;

class Books{
public:
vector<Book*> listOfBooks;

Book* findBook(unsigned int bookNum){
    for(int i=0; i<listOfBooks.size(); i++){
        if(listOfBooks[i] -> getBookNum() == bookNum) return listOfBooks[i];
    }
    return NULL;
}

unsigned int getNumBooks(){return listOfBooks.size();}

void displayBooks(){
    if(listOfBooks.size() == 0) cout<<"\n\tThere are no books in shelf\n";
    else{
    cout << left << setfill('*') << setw(10) << "No."\
        << left << setfill(' ') << setw(10) << "Name"\
        <<right<<setfill('.') <<setw(20) << "qty" << endl;   

    for(int i=0; i<listOfBooks.size() ;i++){
        listOfBooks[i] -> displayBookInfo();
    } 
    }
}

void addBook(string Name, unsigned int num);

void decreaseBook(unsigned int bookNum, unsigned int num = 1);

};