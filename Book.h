
#ifndef BOOK_H
#define BOOK_H
#include <string>
#include <iostream>

using namespace std;

class Book //main class
{

public:
	Book();//default constructor
	/*Set member functions assign the values entered by the user to the book with the corresponding array value.*/
	void SetBookTitle(string title);  
	void SetID(int ýd);
	void SetAuthor(string author);
	void SetYearOfPublication(string year);
	void SetStatus(string status);
	
	//Get member functions are used to return assigned values
	string GetBookTitle();
	int GetID();
	string GetAuthor();
	string GetYearOfPublication();
	string GetStatus();
	
protected://The followings are the variables of the class
	string bookTitle;
	int ýd;
	string author;
	string yearOfPublication;
	string status;
};

#endif
