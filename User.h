
#ifndef USER_H
#define USER_H
#include <string>
#include <iostream>

using namespace std;

class User
{
public:
	User();//string Name,int ID,string AccNa,int pass
	void SetNameSurname(string name);//Assign name surname
	void SetId(int ýd);//Assign Id
	void SetAccountName(string accNa);//Assign Account name
	void SetPassword(string pass);//Assign Password
	
	string GetNameSurname();//return name surname
	int GetId();//return ýd 
	string GetAccountName();//return Account name
	string GetPassword();//return password
	
	bool IsTruePassword(string accNa,string pas);//verify password

protected:
	string nameSurname;
	int ýd;
	string accountName;
	string password;
};

#endif 
