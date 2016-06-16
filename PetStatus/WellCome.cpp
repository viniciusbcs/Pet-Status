#include <iostream>
using std::cout;
using std::endl;

#include "WellCome.h"

void WellCome::displayMessange()
{
	cout << " ** Bem vindo ao PetStatus! ** \n";
}

void WellCome::setUserName(string name)
{
	UserName = name; // Armazena o nome do usuário no objeto
}	

string WellCome::getUserName()
{
	return UserName; // retorna o UserName do objeto
}

void WellCome::displayAnimal()
{
	cout << "Pet logado: " << getUserName() << " " << endl;
}

void WellCome::setPro( string Pname )
{
	Pro = Pname;
}

string WellCome::getPro()
{
	return Pro;
}

void WellCome::displayNameProprietario()
{
	cout << "Nome Proprietario: " << getPro() << " " << endl;
}