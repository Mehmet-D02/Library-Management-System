
#include "Admin.h"
#include "Book.h"
#include "User.h"
#include "Member.h"
#include <iostream> 
#include <iomanip>
#include <fstream>



using namespace std;



bool Admin::Increment()//Increases the counter value we use in class arrays
{
	return true;
}

bool Admin::Decrement()//Decreases the counter value we use in class arrays
{
	return true;
}



void Admin::AddBook(Book books[],int counter)//book adding function
{
	

	string BookTitle;
	string Author;
	string YearOfPublication;
	string Status="Unhold";
	

	cout << "BookTitle: "; /*Book information is entered by the user*/
	cin.ignore();
	getline(cin, BookTitle);
	cout << "Author: ";
	getline(cin, Author);
	cout << "Year Of Publication: ";
	cin >> YearOfPublication;
	bool book = true;
	//tests whether the title and author of the book has been registered before
	for (int i = 0;i < counter;i++)
	{
		if ((books[i].GetBookTitle() == BookTitle) && (books[i].GetAuthor() == Author))
		{
			book = false;
			cout << "\nTHIS BOOK IS REGISTERED IN THE SYSTEM!!!\n\n"<<endl;
			break;
		}
	}
	if (book == true)//if the book is not registered, the if statement is executed
	{
		books[counter].SetID(counter);
		books[counter].SetBookTitle(BookTitle);
		books[counter].SetAuthor(Author);
		books[counter].SetYearOfPublication(YearOfPublication);
		books[counter].SetStatus(Status);
		a = Increment();//The book has been saved and the counter value used by the index as a parameter is increased.
		cout << "\nBOOK ADDED.\n\n" << endl;
	}
}
void Admin::DeleteBook(Book books[],int counter)//Book delete function
{
	int ýd;
	int choice;
	cout << "Delete Book"<<endl;
	if (counter == 0) //informs us that there are no books to be deleted if there are no books saved
	{
			cout << "\nTHERE IS NO BOOK TO DELETED!!!\n\n"<<endl;
	}

	else if (counter > 0)
	{
		cout << "Enter ID: ";//The id of the book is retrieved by the user and the book is deleted from the array
		cin >> ýd;

		for (int i = 0;i < counter;i++)// finding a match using for loop
		{
			if (books[i].GetID() == ýd)/*the book is searched in the array with a loop, if found, it gets user approval and deletes it.*/
			{
				cout << "\nBook Found"<<endl;
				cout << "Do you want to delete?\n[1]Yes\n[2]No\n\nEnter Choice: ";
				cin >> choice;
				if (choice == 1)
				{
					books[i].SetID(counter);  //The information of the deleted book is deleted with the method on the left.
					books[i].SetBookTitle("");
					books[i].SetAuthor("");
					books[i].SetYearOfPublication("");
					books[i].SetStatus("");
					for (int a = i;a < counter;a++)
					{
						//Adjusting the values after deletion of data eg. data from book[4] copied to book[3]
						books[a] = books[a + 1];
						books[a].SetID(a);
					}
					b = Decrement();//calling function to decrement counter
					
					cout << "\nBOOK SUCCESSFULLY DELETED!!!\n\n"<<endl;
				}


			}
		}
	}
	else
	{
		cout << "\nBOOK NOT FOUND!!!\n\n"<<endl;
	}


}




void Admin::ListBook(Book books[],int counter)//Book list function
{
	//iterating all the values on the library using book array
	cout << "ID" << setw(20) << "BOOK TITLE " << setw(25) << "AUTHOR " << setw(16) << "STATUS " << setw(29) << "YEAR OF PUBLICATION" << endl;
	for (int i = 0;i < counter;i++) //loop prints all book information in the array of books 
	{	
		//Returning book information with get functions
		cout << books[i].GetID() ;
		cout <<setw(20) << books[i].GetBookTitle() ;
		cout <<setw(25) << books[i].GetAuthor() ;
		cout <<setw(16) << books[i].GetStatus() ;
		cout <<setw(20) << books[i].GetYearOfPublication() <<endl;
		
	}


}

void Admin::AddMember(Member members[],int counterMember)//Member add function
{
	//entering member information by admin
	string NameSurname;
	string AccountName;
	string MemberType;
	int Id=counterMember;
	string Password="temp";
	bool member = true;

	cout << "Enter Member Info" << endl;
	cout << "Name-Surname: ";
	cin.ignore();
	getline(cin, NameSurname);
	cout << "Account Name: ";
	cin >> AccountName;
	cout << "Member Type: ";
	cin >> MemberType;
	for (int i = 0;i <= counterMember;i++)//controls that the same username has been used before
	{
		if (members[i].GetAccountName() == AccountName)
		{
			member = false;
			cout << "\nA MEMBER IS REGISTERED WITH THIS ACCOUNT NAME. TRY AGAIN!!!\n\n" << endl;
			
		}

	}
	if (member == true)//registering user if username is used for the first time 
	{
		members[counterMember].SetId(counterMember);
		members[counterMember].SetNameSurname(NameSurname);
		members[counterMember].SetAccountName(AccountName);
		members[counterMember].SetMemberType(MemberType);
		members[counterMember].SetPassword(Password);
		if (members[counterMember].GetMemberType() == "")//if the member type is a different name than the requested statu, no user registration is made
		{
			members[counterMember].SetNameSurname("");
			members[counterMember].SetAccountName("");
			members[counterMember].SetMemberType("");
			cout<<"\nMembers type must be (Student) ,(Personnel) or (FacultyMember) . Others will not be accepted.\n\n"<<endl;
		}
		else
		{
			a = Increment();//Increases counter if new member is registered properly
			cout << "\nMEMBER SUCCESFULLY REGISTERED.\n\n";
		}
	}
}

void Admin::ListMember(Member members[],int counterMember)//member list  function
{
	cout << "MEMBERS\n\n";
	cout << "ID"<<setw(22) << "Name-Surname"<<setw(21) << "Member Type"<<setw(22) << "Account Name" << endl;
	for (int i = 0;i < counterMember;i++)// The loop prints all the values in the array
	{
		cout << members[i].GetId()<<setw(23);
		cout << members[i].GetNameSurname() << setw(21);
		cout << members[i].GetMemberType() << setw(22);
		cout << members[i].GetAccountName() << endl;
	}


}


void Admin::DeleteMember(Member members[],int counterMember)
{
	int ýd;
	int choice;
	cout << "Delete Member"<<endl;
	if (counterMember == 0)
	{
		cout << "\nTHERE IS NO MEMBER TO DELETE!!!\n\n"<<endl;
	}

	else if (counterMember > 0)
	{
		cout << "Enter ID: ";
		cin >> ýd;

		for (int i = 0;i < counterMember;i++)
		{
			//finding a match using for loop
			if (members[i].GetId() ==ýd)
			{
				cout << "\nMEMBER FOUND\n\n";
				cout << "Do you want to delete?\n[1]Yes\n[2]No\n\nEnter Choice: ";
				cin >> choice;    /*user requests a selection in the user to query whether they want to be deleted.*/
				if (choice == 1)
				{ //Deletes user information in the corresponding array
					members[i].SetId(counterMember);
					members[i].SetNameSurname("");
					members[i].SetAccountName("");
					members[i].SetMemberType("");
					for (int a = i;a < counterMember;a++)
					{
						//adjusting the values after deletion of data.
						members[a]=members[a + 1];
						members[a].SetId(a);
					}
					b = Decrement();//calling function to decrement counter
					
					cout << "\nMEMBER SUSCCESFULLY DELETED.\n\n" << endl;;
				}


			}
		}
	}
	else
	{
		cout << "\nMEMBER NOT FOUND..!\n\n"<<endl;
	}


}











