#include "Books/books.cpp"

#ifndef __IOSTREAM_H
#include<iostream>
#endif

#ifndef __STRING_H
#include<string>
#endif

using namespace std;

void displayOptions(){
    cout<<"Enter\n1\tfor Displaying info of books\n2\tfor adding a new book\n3\tfor taking a book\n4\tto exit\n\t:\t";
}

class Admin : private Books{
    string usr,pwd;

public:

Admin(){
    cout<<"\n\tEnter the user name\t:\t";
    cin>>usr;
    cout<<"\n\tEnter the password\t:\t";
    cin>>pwd;
}

Admin(string usr, string pwd){
    this -> usr = usr;
    this -> pwd = pwd;
}

bool authorize(string usr, string pwd){
    return this->usr == usr && this->pwd == pwd;
}

void showOptions(){
bool exitFlag = false;
string Name;
int caseValue = 0;
unsigned int numOfBooks = 0, bookNum;
Books *books = new Books();

while(true){
displayOptions();
cin>>caseValue;

switch(caseValue){
    case 1:
        books -> displayBooks();
        break;
    case 2:
        cout<<"\n\tEnter the name of the book\t: ";
        cin>>Name;
        cout<<"\n\tEnter the number of books\t: ";
        cin>>numOfBooks;
        books -> addBook(Name,numOfBooks);
        break;
    case 3:
         if(books -> getNumBooks() == 0){
            cout<<"\n\tFirst add a book for subscription purpose\n";
            break;
            }
        cout<<"\n\tEnter the book number\t: ";
        cin>>bookNum;
        books -> decreaseBook(bookNum);
        break;
    case 4:
        exitFlag = true;
        break;
    default:
        cout<<"\n\tEnter a correct option\n";
}
if(exitFlag) break;
}
}

void addBook(string Name, unsigned int num){
    listOfBooks.push_back(new Book(Name,num));
}


void decreaseBook(unsigned int bookNum, unsigned int num = 1){
    Book* book = findBook(bookNum);
    if(book)
        book->decreaseQty(num);
    else
        cout<<"no book found for book number = "<<bookNum<<endl;
}

void removeBook(string Name){

}

};