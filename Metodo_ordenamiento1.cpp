/*BUBBLE SORT:First method of ordered, this interchange the position
if this is order opposed, neccessary roam the array until ordered
the array.
the condition for interchange position of the array is:
if number actual > numero next -- change of the position
repeat the same for all the array until the array will ordered */
#include <iostream>

using namespace std;

void ordered(int vektor[], int);

int main(int argc, char const *argv[]) {

  const int size = 4;
  int vektor[] = {4, 8, 6, 9};

  ordered(vektor, size);

  return 0;
}

void ordered(int vektor[], int size) {
  int aux;

  /*BUBBLE SORT */
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (vektor[j] > vektor[j+1]) {
        aux = vektor[j];
        vektor[j] = vektor[j+1];
        vektor[j+1] = aux;
      }
    }
  }

  std::cout << "\nOrdered ascendant: " << endl;

  for (int i = 0; i < size; i++) {
    std::cout << vektor[i] << " ";
  }

  std::cout << "\nOrdered descending: " << endl;

  for (int i = size; i >= 0; i--) {
    std::cout << vektor[i] << " ";
  }

}
