#include<iostream>
#include"reference_addressof.h"

int main()
{
	int x = 5; 
	int * p = &x;
	int & r = x;

	std::cout << " value of the 'x' = " << x << "\n";
	std::cout << " address of the 'x' = " << &x << "\n";
	std::cout << " value of the 'r' = " << r << "\n";
	std::cout << " address of the 'r' = " << &r << "\n";
	std::cout << " value of the 'p' = " << p << "\n";
	std::cout << " address of the 'p' = " << &p << "\n";
	std::cout << " value of the apointed for 'p' = " << *p << "\n";

	if (validate_entrace(x))
		std::cout << "\n main: value of the 'x' after 'validate entrace' = " << x << "\n";
	
	return 0;
}