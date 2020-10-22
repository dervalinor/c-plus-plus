/*Sie werden wenn die Nummer ist gerade und ungerade testen und Sie werden die Adresse von
die Nummer */
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int Nummer, *address_number;

  address_number = &Nummer;

  std::cout << "Sie geben die Nummer: "; std::cin >> Nummer;

  if (Nummer%2 == 0) {
    std::cout << "Die Nummer ist gerade und die Adresse ist: " << address_number;
  }
  else{
    std::cout << "Die Nummer ist ungerade und die Adresse ist: " << address_number;
  }

  return 0;
}
