#include "Books.cpp"

#ifndef __IOSTREAM_H
#include<iostream>
#endif

#ifndef __STRING_H
#include<string>
#endif

using namespace std;

void displayOptions(){
    cout<<"Enter\n\t1for Displaying info of books\n2\tfor adding a new book\n3\tfor taking a book\n\t:\t";
}

int main(){
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
        cout<<"\n\tEnter the book number\t: ";
        cin>>bookNum;
        books -> decreaseBook(bookNum);
        break;
    default:
        cout<<"\n\tEnter a correct option\n";
}

}

    return 0;
}