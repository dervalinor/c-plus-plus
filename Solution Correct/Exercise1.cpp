/*Sie werden wenn die Nummer ist gerade und ungerade testen und Sie werden die Adresse von
die Nummer sehen*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int number, *address_number;
  std::cout << "Sie geben die Nummer: "; std::cin >> number;

  address_number = &number; //wir sparen die Adresse von variabel

  if (*address_number%2 == 0) { //wir benutzen die Adresse von variabel
    std::cout << "Die Nummer " << *address_number <<  " ist gerade" << endl;
    std::cout << "Adresse: " << address_number;
  }
  else{
    std::cout << "Die Nummer " << *address_number << " ist ungerade" << endl;
    std::cout << "Adresse: " << address_number;
  }

  return 0;
}
