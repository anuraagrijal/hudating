#include "personType.h"
#include<iostream>
using namespace std;

enum interestType {sports, theater, movies, picnics, running, dining, reading, technology, TV, romance, travel, photography, facebook, twitter, hiking, backpacking, cooking, birdwatching, roadtrips, family, yoga};

//specification

class clientType : public personTye {
public:
	clientType();
	interestType client_interest[10];
	char gender;
	string client_ID;
};

//implementation

clientType::clientType()
{
	clients.firstName="";
	clients.Address="";
	clients.lastName="";
	clients.City="";
	clients.State="";
	clients.Zip=0;
}

ifstream myfile;
void print_clients(clientType[], string, string);
interestType returnsEnums(string);
int main() 
{
	string a, b, c, d, interest1, interest2;
	myfile.open("infile.txt");
	clientType client[20];
	for (int i=0; i < 6; i++)
	{
		myfile >> client[i].clients.lastName >> client[i].clients.firstName >> client[i].client_ID >> a >> b >> c >> d;
		client[i].clients.Address = a + " " + b + " " + c + " " + d;
		myfile >> client[i].clients.City >> client[i].clients.State >> client[i].clients.Zip >> client[i].gender >> interest1 >> interest2;
		client[i].client_interest[0] = returnsEnum(intrest1);
		client[i].client_interest[1] = returnsEnum(interest2)
		myfile.ignore();
	}
	print_clients(client, interest1, interest2);
	return 0;
}

void print_clients(clientType users[], string interest1,string interest2)
{
	for (int i=0; i<6; i++)
	{
		cout << users[i].clients.lastName << users[i].clients.firstName << users[i].client_ID << users[i].clients.Address << users[i].clients.City << users[i].clients.State << users[i].clients.Zip << users[i].gender << client[i].client_interest[0] << client[i].client_interest[1];
	}
}
interestType returnsEnums(string interest)
{
	if (interest == "sports")
		{
			return sports;
		}
			else if (interest == "reading")
			{
				return reading;
			}
				else if (interest == "technology")
				{
					return technology;
			}
					else if (interest == "TV")
					{
						return TV;
				}
					else if (interest == "romance")
					{
						return romance;
					}
					else if (interest == "travel")
					{
						return travel;
					}
					else if (interest == "photography")
					{
						return photography;
					}
					else if (interest == "facebook")
					{
						return facebook;
					}
					else if (interest == "theater")
					{
						return theater;
					}
					else if (interest == "movies")
					{
						return theater;
					}
					else if (interest == "picnics")
					{
						return picnics;
					}
					else if (interest == "running")
					{
						return running;
					}
					else if (interest == "dining")
					{
						return dining;
					}
					else if (interest == "twitter")
					{
						return twitter;
					}
					else if (interest == "hiking")
					{
						return hiking;
					}
					else if (interest == "backpacking")
					{
						return backpacking;
					}
										// backpacking, cooking, birdwatching, roadtrips, family, yoga};
					else if (interest == "cooking")
					{
						return cooking;
					}
					else if (interest == "birdwatching")
					{
						return birdwatching;
					}
					else if (interest == "roadtrips")
					{
						return roadtrips;
					}
					else if (interest == "family")
					{
						return family;
					}
					else if (interest == "yoga")
					{
						return yoga;
					}





