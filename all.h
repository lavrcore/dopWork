#pragma once
#include <vector>
using namespace std;

class Book
{
public:
    string title;
    string author;
    int isbn;
    bool isAvailable;
public:
    Book() {}
    Book(string title, string author, int isbn) : title(title), author(author), isbn(isbn), isAvailable(true) {}
    string getTitle()
    {
        return title;
    }
    string getAuthor()
    {
        return author;
    }
    int getIsbn()
    {
        return isbn;
    }
    bool getAvailable()
    {
        return isAvailable;
    }
    void setTitle(string title)
    {
        this->title = title;
    }
    void setAuthor(string author)
    {
        this->author = author;
    }
    void setIsbn(int isbn)
    {
        this->isbn = isbn;
    }
    void setIsAvailable(bool isAvailable)
    {
        this->isAvailable = isAvailable;
    }
    void print()
    {
        cout << title << endl;
        cout << author << endl;
        cout << isbn << endl;
        cout << (isAvailable ? "Yeah" : "Nope") << endl;
    }


};
class Member
{
    string name;
    int memberID;
    vector <Book> borrowedBooks;
public:
    Member(string name, int memberID) : name(name), memberID(memberID) {}
    string getName()
    {
        return name;
    }
    int getID()
    {
        return memberID;
    }
    vector <Book> getBooks()
    {
        return borrowedBooks;
    }
    void setName(string name) {
        this->name = name;
    }
    void setID(int memberID)
    {
        this->memberID = memberID;
    }
    void borrowedBooks(Book& book)
    {
        if (book.getAvailable())
        {
            book.setIsAvailable(true);
            borrowedBooks.push_back(book);
            cout << "Book borrowed successfully" << endl;
        }
        else {
            cout << "Book isnt't avalilable for borrowing" << endl;
        }
        
    }
    void returnBook(vector <Book> borrowedBooks , int isbn)
    {
        for (int i = 0; i < borrowedBooks.size(); i++) {
            if ( == isbn) {
                
            }
        }
        return;
    }

};
class Library
{
    vector <Book> books;
    vector <Member> member;
    public:
        Library() {}
        void addBook(const Book& book)
        {
            books.push_back(book);
        }
        void removeBook(const string& isbn)
        {

        }
        void finBook(const string& isbn)
        {

        }
        void unregisterMember(const string& memberID)
        {

        }
        void displayAllBooks()
        {
            for (Book &book : books) {
                cout << book.getTitle() << " " <<  book.getAuthor() << " " << book.getIsbn() << endl;
            }
        }
};