
#include "User.h"


User::User()//default contructor
{
	
}

/*The information received from the user with the function definitions below
records with set functions and returns the values with the get function*/

void User::SetNameSurname(string name)
{
	nameSurname = name;
}

string User::GetNameSurname()
{
	return nameSurname;
}

void User::SetId(int Id)
{
	ýd = Id;
}

int User::GetId()
{
	return ýd;
}


void User::SetAccountName(string AccNa)
{
	accountName = AccNa;
}

string User::GetAccountName()
{
	return accountName;
}


void User::SetPassword(string Pass)
{
	password = Pass;
}

string User::GetPassword()
{
	return password;
}



bool User::IsTruePassword(string Acc,string pass)//Bool type function that we use to verify admin login user name and password
{
	
	string admin = "admin";
	string pas=pass;

	if (Acc == admin && pas == "1234")
	{
		return true;
	}
}


