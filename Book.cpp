
#include "Book.h"
#include"User.h"

Book::Book()//string title, int Id, string author, string year, string status
{
	
}

/*The information received from the user with the function definitions below 
records with set functions and returns the values with the get function*/

void Book::SetBookTitle(string title)
{
	bookTitle = title;
}
string Book::GetBookTitle()
{
	return bookTitle;
}


void Book::SetID(int Id)
{
	ýd = Id;
}


int Book::GetID()
{
	return ýd;
}


void Book::SetAuthor(string authorr)
{
	author = authorr;
}
string Book::GetAuthor()
{
	return author;
}


void Book::SetYearOfPublication(string year)
{
	yearOfPublication = year;
}
string Book::GetYearOfPublication()
{
	return yearOfPublication;
}


void Book::SetStatus(string statu)
{
	status = statu;
}
string Book::GetStatus()
{
	return status;
}

