#include <iostream>
#include <string>
using std::string;
using std::getline;
using std::cout;
using std::cin;
using std::endl;

class WellCome //Da as boas vinda ao usuário
{
public:
	void displayMessange();
	void setUserName( string );
	string getUserName();
	void displayAnimal();
	void setPro( string );
	string getPro();
	void displayNameProprietario();
private:
	string UserName; // nome do usuário (animal para esse WellCome)
	string Pro;
}; //fim da classe WellCome

