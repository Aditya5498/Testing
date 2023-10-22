### Structure of project
# Different classes 
1. # Book class
- Variables :- private : name,quantity,num
- Methods :- public: get and set for name, quantity, get for bookNum, displayBookInfo, increase and decrease book quantity
- Constructors :- Empty Constructor, 2 other constructors for creating a book object through fileReading another constructor for creating new book.
2. # Books class
- Variables :- private : listOfBooks[]
- Methods :- public : addBook(name, num), decreaseBook(name, num), removeBook(name), displayBooks()
3. # Admin class inherits Books class
- rights to add and delete books
- Methods :- addBook(int num=1, bookName), deleteBook(bookName)
4. # User class inherits Books class
- Only view books and subscribe a book
- Methods :- DisplayBooks(), SubscribeBook(int bookNum)

# Management is done using file system and each class has a separate file.