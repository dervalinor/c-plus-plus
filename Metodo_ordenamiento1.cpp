/*BUBBLE SORT:First method of ordered, this interchange the position
if this is order opposed, neccessary roam the array until ordered
the array.
the condition for interchange position of the array is:
if number actual > numero next -- change of the position
repeat the same for all the array until the array will ordered */
#include <iostream>

using namespace std;


int main() {

  int vektor[] = {4, 8, 6, 9};
  int aux;

    /*BUBBLE SORT */
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (vektor[j] > vektor[j+1]) {
        aux = vektor[j];
        vektor[j] = vektor[j+1];
        vektor[j+1] = aux;
      }
    }
  }

  cout << "\nOrdered ascendant: " << endl;

  for (int i = 0; i < 4; i++) {
    cout << vektor[i] << " ";
  }

  cout << "\nOrdered descending: " << endl;

  for (int i = 4; i >= 0; i--) {
    std::cout << vektor[i] << " ";
  }

  cout << '\n';


  return 0;
}

