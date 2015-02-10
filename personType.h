///specification
#include<string>
#include<iostream>
using namespace std;
class addressType
{
public:
	addressType();
	string streetAddress, streetDec, state, stateInitials;
	int streetAddressNum, zipCode;
};
class personType
{
public:
	personType();
	char gender;
	string lastName, firstName;
	int personNum, personID;
	addressType address;
	void print();
	string get_interest1();
	string get_interest2();
	void setInterest1(string);
	void setInterest2(string);
	
	
private:
	string interest1, interest2;
};

///implementation
personType::personType()
{
	firstName="";
	lastName="";
	personNum=0;
	personID=0;
	this->address.state="";
	this->address.stateInitials="";
	this->address.streetAddress="";
	this->address.streetAddressNum=0;
	this->address.streetDec="";
	this->address.zipCode=0;
}

addressType::addressType() 
{
	state="";
	stateInitials="";
}

void personType::print()
{
	cout << firstName << " " << lastName << " " << " from " << address.streetAddressNum << " " << address.streetAddress<< " " << address.stateInitials << " is interested in " << get_interest1() << " and " << get_interest2() << endl;
}

string personType::get_interest1() 
{
	return interest1;
}

string personType::get_interest2() 
{
	return interest2;
}
void personType::setInterest1(string in1)
{
	interest1 = in1;
}
void personType::setInterest2(string in2)
{
	interest2 = in2;
}
