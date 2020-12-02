/*Sie benutzen Pointer für sehen die Stellung von Element */
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int Vektor[] = {1, 2, 3, 4, 5};
  //Jetzt wir deklarieren der Pointer und starten von Stellung Null
  int *Dir_vektor;
  //wir können die Stellung Null von Zwei Art schreiben:

  //Dir_vektor = &Vektor;
  Dir_vektor = Vektor;

  std::cout << "Element von Vektor: " << endl;
  for (size_t i = 0; i < 5; i++) {
    std::cout << "Element " << "[" << i << "]: " << *Dir_vektor++ << endl;
    /*++ (4bites between each element of vector) für erhöhen die Stellung
    von Vektor*/
  }

  return 0;
}
