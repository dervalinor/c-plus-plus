/* ask the user N numbers and save dynamic array, after show ordered increase
*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

	int number, *vektor;

	vektor = new int[number];

	for (int i = 0; i < number; ++i)
	{
		cout << "Element " << i << ": "; cin >> vektor[i];
	}
  
  return 0;
}
