/*Sie werden der Vektor erstellen, wo für Pointer Sie werden die Element
gerande zeigen */
#include <iostream>

using namespace std;

void even_number(int vektor[], int);

int main(int argc, char const *argv[]) {

  int vektor[100], size;

  cout << "Size of the vector: "; std::cin >> size;

  std::cout << "Elements of a vector: " << endl;
  for (int i = 0; i < size; i++) {
    std::cout << "Element " << "[" << i << "]: "; std::cin >> vektor[i];
  }

  even_number(vektor, size);

  return 0;
}

void even_number(int vektor[], int size){

  int *ad_vektor;

  ad_vektor = vektor;

  std::cout << "The elements even of the vector: " << endl;

  for (int i = 0; i < size; i++) {

    if(*ad_vektor++%2 == 0){
      std::cout << *ad_vektor << endl;
    }
  }


}
