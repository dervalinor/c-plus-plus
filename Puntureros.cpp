#include <iostream>

using namespace std;
//A pointer save the address of the place where save a variable

int main(int argc, char const *argv[])
{
	//Now we will go to create a program, where this print the address of a variable

	int variable_1 = 30;

	std::cout << "number is " << variable_1 << endl;

	cout << "Adddres of the variable_1 (number): " << &variable_1;


	return 0;
}
