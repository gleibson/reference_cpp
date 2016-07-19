#include <iostream>
#include <limits>
#include "reference_addressof.h"

bool validate_entrace(int &param_ref)
{
	std::cout << "\n Validate Entrace: Testing Subject \n";
	std::cout << " and address of the parameter of reference 'param_ref'\n ";
	std::cout << " initial suject of the 'param_ref' = " << param_ref << "\n";
	std::cout << " validate entrace: start with int number ";
	std::cin >> param_ref;
	if(std::cin.fail())
	{
		std::cout << "Erro entrace" << "\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<int>::max(), '\n');
		return false;
	}
	return true;
}