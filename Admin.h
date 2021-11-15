
#ifndef ADMIN_H
#define ADMIN_H
#include "User.h"

class Admin:public User
{
public:

	void AddBook(class Book books[],int counter);//Book adds
	void DeleteBook(class Book books[],int counter);//Book Deleter
	void ListBook(class Book books[],int counter);//Books prints the screen
	void AddMember(class Member members[],int counterMember);//Member adds
	void ListMember(class Member members[],int counterMember);//Members prints the screen
	void DeleteMember(class Member members[],int counterMember);//Member deleter
	bool Increment();//increase counter
	bool Decrement();//decrease counter
	bool a = false;
	bool b = false;

};

#endif