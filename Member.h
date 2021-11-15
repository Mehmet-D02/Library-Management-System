
#ifndef MEMBER_H
#define MEMBER_H
#include "User.h"

using namespace std;

class Member:public User//Inheritance from User
{
public:
	void FindBook(class Book books[],int);//Signature find book function
	void BorrowBook(class Book books[]);//Signature borrow book function
	void ReturnBook(class Book books [],int);//Signature return book function
	void ListBooks(class Book books[],int);//Signatue list book function 
	void MemberOperations(class Member members[],int);//Signatue Member operation function
	void SetMemberType(string);//assign member type
	string GetMemberType();//return member type

protected:
	string memberType;
	
};

#endif