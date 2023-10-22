#pragma once
#include "book.cpp"
#include <vector>

#ifndef __IOSTREAM_H
#include<iostream>
#endif

#ifndef __STRING_H
#include<string>
#endif

using namespace std;

class Books{
vector<Book*> listOfBooks;

Book* findBook(unsigned int bookNum){}

public:

void addBook(string Name, unsigned int num);

void decreaseBook(unsigned int bookNum, unsigned int num);

void removeBook(string Name);

void displayBooks();
};

Book* Books::findBook(unsigned int bookNum){
    for(int i=0; i<listOfBooks.size(); i++){
        if(listOfBooks[i] -> bookNum == bookNum) return listOfBooks[i];
    }
    return NULL;
}

void Books::addBook(string Name, unsigned int num = 1){
    listOfBooks.push_back(new Book(Name,num));
}

void Books::decreaseBook(unsigned int bookNum, unsigned int num){
    Book* book = findBook(bookNum)
    if(book)
        book->decreaseQty(num);
    else
        cout<<"no book found for book number = "<<bookNum<<endl;
}

void Book::removeBook(string Name);

void Book::displayBooks(){
    if(listOfBooks.size() == 0) cout<<"\n\tThere are no books in shelf\n";
    else{
    cout << left << setfill('*') << setw(5) << "Book Number" \ 
    << left << setfill(' ') << setw(10) << "Book Name" \
    <<right<<setfill('.') <<setw(20) << "number of books" << endl;   

    for(int i=0; i<listOfBooks.size() ;i++){
        listOfBooks[i] -> displayBookInfo();
    } 
    }
}