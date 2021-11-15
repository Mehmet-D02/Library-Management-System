
#include "Member.h"
#include "User.h"
#include "Book.h"
#include <iomanip>



void Member::SetMemberType(string type)//our member function, which checks the accuracy of the string member type entered by the user
{

	memberType = type;
	string s = "Student";
	string p="Personnel";
	string f="FacultyMember";
	


		if (type ==s|| type == p || type == f)
		{
			memberType = type;
		}
		else
		{
			memberType ="";
		}
	
}

string Member:: GetMemberType()//Returns member type
{
	return memberType;
}



void Member::FindBook(Book books[],int counter)//function to find the saved book
{
	string bookTitle;
	bool a = false; //boolean expression to decide which to print
	if (counter == 0)//if there is no book saved
	{
		cout << "There is no book to Search!!!"<<endl;
	}
	else if (counter > 0)
	{
		cout << "Enter Book Title: ";
		cin >> bookTitle;
		for (int i = 0;i < counter;i++) //finding a match using for loop
		{
			if (books[i].GetBookTitle() == bookTitle) //comparing the book name entered by the user with the names in the book array
			{
				if (i == 0)
				{
					cout << "\nBook You Search For Is Found. Book Info:\n";
				}
					
				cout << books[i].GetID() << "\t";        //if the searched book is found, 
				cout << books[i].GetBookTitle() << "\t";//the get functions on the left side and their information is printed on the screen
				cout << books[i].GetAuthor() << "\t";
				cout << books[i].GetStatus() << "\t";
				cout << books[i].GetYearOfPublication() << endl;
				a = true;
			}
		}
		if (a == false)//if no book was found
		{
			cout << "The Book was not found!!!" << endl;

		}
	}
}
	
void Member::BorrowBook(Book books[])//Borrow function
{
	int ýd;
	cout << "Book ID: ";
	cin >> ýd;
	if (books[ýd].GetStatus() == "Hold")//checks that the book is status
	{
		cout << "The book has been borrowed by another member"<<endl;
	}
	else if (books[ýd].GetStatus() == "")
	{	
		cout << "Book Is Not Found!!!\n" << endl;
	}
	else
	{
		books[ýd].SetStatus("Hold");//changes the status of the book after entering the ID of the book that is requested by the user
	}
	
}

void Member::ReturnBook(Book books[], int)//performs the return of the borrowed book
{
	int ýd;
	string status = "Unhold";
	cout << "Book ID: ";
	cin >> ýd;
	if (books[ýd].GetStatus() == "Unhold")//checks that the book is status
	{
		cout << " Book is Unhold!!!" << endl;
	}
	else if (books[ýd].GetStatus() == "")
	{
		cout << "Book Is Not Found!!!\n";
	}
	books[ýd].SetStatus(status);//changes the status of the book after entering the ID of the book that is requested by the user
}

void Member::ListBooks(Book books[], int counter)//Book list function
{

	cout << "ID" << setw(20) << "BOOK TITLE " << setw(16) << "AUTHOR " << setw(16) << "STATUS " << setw(29) << "YEAR OF PUBLICATION" << endl;
	for (int i = 0;i < counter;i++) //loop prints all book information in the array of books 
	{
		cout << books[i].GetID();//Returning book information with get functions
		cout << setw(20) << books[i].GetBookTitle();
		cout << setw(16) << books[i].GetAuthor();
		cout << setw(16) << books[i].GetStatus();
		cout << setw(20) << books[i].GetYearOfPublication() << endl;

	}
	
}

void Member::MemberOperations(Member members[],int i)//Member operations function definition
{
	string password;
	cout << "Password Change\n" << endl;
	cout << "Enter Old Password: ";
	cin >> password;//Enter old Password
	if (members[i].GetPassword() == password)//verify old password
	{
		cout << "Enter New Password: ";
		cin >> password;//If old password is correct, enter new password
		members[i].SetPassword(password);//assign new password to user
		cout << "Password Changed!!!"<<endl;
	}
	else
	{
		cout << "\nOld Password Is Not True!!!\n" << endl;//Print if old password is not correct
	}
}