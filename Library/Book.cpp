#include "Book.h"
#include <iostream>

Book::Book(Author author, string bookName, int yearOfPublish, string genre) : author(author)
{
    this->setBookName(bookName);
    this->setYearOfPublish(yearOfPublish);
    this->setGenre(genre);
}

void Book::setBookName(string bookName)
{
    this->bookName = bookName;
}

void Book::setYearOfPublish(int year)
{
    this->yearOfPublish = year;
}

void Book::setGenre(string genre)
{
    this->genre = genre;
}

void Book::print()
{
    cout << "Book Name: " << this->getBookName() << ", Genre: " << this->getGenre()
        << ", Published: " << this->getYearOfPublish() << endl;
    this->author.printAuthor();
    cout << endl;
}


string Book::getBookName()
{
    return this->bookName;
}

int Book::getYearOfPublish()
{
    return this->yearOfPublish;
}

string Book::getGenre()
{
    return this->genre;
}

