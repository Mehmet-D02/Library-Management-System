
#include "Book.h"
#include "User.h"
#include "Admin.h"
#include "Member.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include<conio.h>


using namespace std;




int main()
{ 
	cout << "\n\n\n" << endl;
	cout << "                                                            ****              \n";
	cout << "                                                          *     ***************\n";
	cout << "                                                         **                   ****\n";
	cout << "                                                         **                      **\n";
	cout << "                                                          **                      **\n";
	cout << "                                                            ***                   **\n";
	cout << "                                                               *                  **\n";
	cout << "                                                              **                  *\n";
	cout << "                                                              **                 **\n";
	cout << "                                                              *                 **\n";
	cout << "                                                              ***               *\n";
	cout << "                                                                *               *\n";
	cout << "         ***                                                     *              **\n";
	cout << "         *  *                                                   *                 ***\n";
	cout << "         *  *                                                   *                   **\n";
	cout << "         *  *                                                    *********            *\n";
	cout << "         ** **                                                           *             *\n";
	cout << "          *  *                                                          *              **\n";
	cout << "          *  *                                                         *                *\n";
	cout << "          * **                                                        *                 *\n";
	cout << "          *  *                                                       *                  *\n";
	cout << "          *  *                                                      *                   *\n";
	cout << "           * **                  ****    ****   ****        *******                     *\n";
	cout << "           *  *             ******   ***     **     ********                            *\n";
	cout << "           ** **          ****                                                          *\n";
	cout << "           **  ************                                                             *\n";
	cout << "           *   *                               ******                                   *\n";
	cout << "           *   *                                   ***********                          *\n";
	cout << "       ***                                             ****M.D.                         *\n";
	cout << "       *                                          **       ***                          *\n";
	cout << "       *                                       ****                                     *\n";
	cout << "       *                                       *  ****                                  *\n";
	cout << "       *                                       *     ****                              **\n";
	cout << "       *                                       **        *                             *\n";
	cout << "        ***                                    *         *                         ****\n";
	cout << "          ***                                  *          *                 ******** \n";
	cout << "            ***********************************            *************** \n";
	
	
	cout << "                                      This System Created By---> MEHMET DESTECI    "<<endl;
	cout << "                                                                                                 *   \n";
	cout << "        ****     ****       * * * *      ********   ******   ************   ********     *****  ***  \n";
	cout << "        **  *   *  **       *       *    **        ***            **        **         *         *   \n";
	cout << "        **   * *   **       *        *   **         **            **        **        *          *   \n";
	cout << "        **    *    **       *        *   ******       **          **        ******    *          *   \n";
	cout << "        **         **       *        *   **             **        **        **        *          *   \n";
	cout << "        **         **       *       *    **             ***       **        **         *         *   \n";
	cout << "        **         **   *   * * * *      ********   ******        **        ********     *****  ***  \n";
	cout <<"\n"<< endl;
	
	system("pause");
	cout << "\n" << endl;
	system("CLS");

	Book books[100];//Book Class Array
	Member members[100];//Member Class Array

	User U;//User Class Object
	Admin A;//Admin Class Object
	Member M;//Member Class Object
	char enter;//To make a selection in the main menu
	char enter1;//to make a selection in the admin menu
	char enter2;//To make a selection in the Member menu
	string name;//Admin User Name
	string pass;//Admin password
	string accountName;//Member account name
	string passW;//Member password
	int counter = 0;//Uses to manipulate indexes of the book class array
	int counterMember = 0;//Uses to manipulate indexes of the member class array
	bool a = false;//Admin used to authenticate username and password
	bool b = false;//Member used to authenticate username and password
	int main=0;//Controls the reprinting of the admin menu after each action.

	while (true)//Reprints main menu unless administrator or user logs out
	{
		cout << "                   " << "MAIN MENU" << endl;
		cout << "     " << "1.Admin Login" << endl;
		cout << "     " << "2.Member Login" << endl;
		cout << "     " << "3.Exit" << endl;
		cout << "         " << "Enter Your Choice:";
		cin >> enter;//Enter Sellection
		switch (enter)
		{
		case '1'://If enter epual to 1,then it enters the admin menu
			//system("CLS");
			cout << "Admin User Name: ";
			cin >> name;//Enter The Admin name
			cout << "Password: ";
			cin >> pass;//Enter The Admin Password
			a = U.IsTruePassword(name, pass);//checks the correctness of the entered name and password

			if (a == true)//If Name and password correct,then it enter the admin menu
			{
				cout << "                     " << "\nPASSWORD ACCEPTED.\n\n" << endl;
				//system("CLS");
				while (main == 0) {

					cout << "                   " << "ADMIN MENU" << endl;
					cout << "     " << "1.Add Book" << endl;
					cout << "     " << "2.Delete Book" << endl;
					cout << "     " << "3.List Books" << endl;
					cout << "     " << "4.Add Member" << endl;
					cout << "     " << "5.List Members" << endl;
					cout << "     " << "6.Delete Member" << endl;
					cout << "     " << "7.Exit" << endl;
					cin >> enter1;//to make a selection in the admin menu
					//system("CLS");
					switch (enter1)
					{
					case '1':
						A.AddBook(books, counter);//Admin class member function to add book
						if (A.a == true)//if book insertion is successful, increments counter to increment array index by 1
						{
							counter++;
							A.a = false;
						}
						break;
					case '2':
						A.DeleteBook(books, counter);//Admin class member function to delete book
						if (A.b == true)//if the book deletion is successful, decrements the counter to decrease the array index by 1
						{
							counter--;
							A.b = false;
						}
						break;
					case '3':
						A.ListBook(books, counter);//Admin class member function to list books
						break;
					case '4':
						A.AddMember(members,counterMember);//Admin class member function to add member
						if (A.a == true)//if member insertion is successful, increments  counter to increment array index by 1
						{
							counterMember++;
							A.a = false;
						}	
						break;
					case '5':
						A.ListMember(members,counterMember);//Admin class member function to list members
						break;
					case '6':
						A.DeleteMember(members,counterMember);//Admin class member function to delete member 
						if (A.b == true)//if the member deletion is successful, decrements the counter to decrease the array index by 1
						{
							counterMember--;
							A.a = false;
						}
						break;
					case '7':
						main = 1;//Manipulates the while loop to exit the admin menu
						break;
					default:
						continue;


					}
				}
				main = 0;//Manipulates the while restores
				continue;
			}
			else
			{
				cout << "\nACCOUNT NAME OR PASSWORD ARE NOT TRUE!!!\n\n" << endl;
				continue;
			}
		

			
		case '2'://If enter epual to 2,then it enters the Member menu
			
			cout << "Member User Name: ";
			cin >> accountName;//Enter the member account name
			cout << "Password: ";
			cin >> passW;//Enter the member password
			for (int i = 0;i < counterMember;i++)//checks whether there is a user with the entered name and password.
			{
				if (members[i].GetAccountName() == accountName)//Checks Account name
				{
					if (members[i].GetPassword() == passW)    // Checks password
					{
						bool a = true;//If the password and username are correct, it enter the member menu.
						while (a)
						{	
							cout << "                   " << "MEMBER MENU" << endl;
							cout << "     " << "1.Find Book" << endl;
							cout << "     " << "2.Borrow Book" << endl;
							cout << "     " << "3.Return Book" << endl;
							cout << "     " << "4.List Book" << endl;
							cout << "     " << "5.Member Operations" << endl;
							cout << "     " << "6.Exit" << endl;
							cin >> enter2;//To make a selection in the Member menu
							switch (enter2)
							{
							case '1':
								M.FindBook(books, counter);//Member class book find member function
								break;
							case '2':
								M.BorrowBook(books);//Member class book borrow member function
								break;
							case '3':
								M.ReturnBook(books, counter);//Member class book  return member function
								break;
							case '4':
								M.ListBooks(books, counter);//Member class book List member function
								break;
							case '5':
								M.MemberOperations(members,i);//Member class membership transactions function
								break;
							case '6':
								a = false;
								break;
							default:
								continue;

							}
						}
					}
				
				}

			}

			continue;
		
		case '3'://If enter epual to 3,then the program is terminated
			//A.WriteBookText(books,counter);
			exit(true);

		
		default:
			cout << "\nTHE SELECTION YOU MADE IS INCORRECT.\n\n" << endl;
			continue;
	


		}
		

	}

	return 0;	

}
	

	

