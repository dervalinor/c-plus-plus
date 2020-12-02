//BEST METHOD WITHOUT ERROR

/*ordering for insertion:
this require n^2 operations for order n elements 
CONDITIONAL:
if NumberLeft > NumberActual then realice a change 
of the position */

#include <iostream>

using namespace std;

void vektor_order();


int main(int argc, char const *argv[])
{

	vektor_order();

	return 0;
}

void vektor_order(){

	int vektor[] = {4, 6, 7, 1};
	int pos, aux; //pos for save the position
	//and aux for change the position


	//METHOD INSERTION
	for (int i = 0; i < 4; ++i)
	{

		pos = i; //Because this move in the vector

		aux = vektor[i];

		while((pos > 0) && (vektor[i-1] > aux)){ //pos > 0 because in the position 0
			//to left no exist nothing number and vektor[i-1] > aux for change of the 
			//position
			vektor[pos] = vektor[pos-1];
			pos--; //because postions must decrease

		}

		vektor[pos] = aux;

	}

	cout << "\nOrdered array: " << endl;

	for (int i = 0; i < 4; ++i)
	{
		cout << vektor[i] << " ";
	}

	cout << '\n';

}



