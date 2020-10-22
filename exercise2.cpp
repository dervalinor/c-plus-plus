/*Determine if a number is prime */
#include <iostream>

using namespace std;

void prime_number(int);

int main(int argc, char const *argv[]) {

  int Nummer;

  std::cout << "Sie geben die Nummer: "; std::cin >> Nummer;

  prime_number(Nummer);

  return 0;
}

void prime_number(int Nummer) {

  int n = 0, *dir_nummer; //für die Funktion, wir müssen Pointer Innen von diese

  dir_nummer = &Nummer;

  for (size_t i = 2; i < 10; i++) {

    if (*dir_nummer%i != 0){
      n = n + 1;
    }
  }

  if (n == 8) {
    std::cout << "Number is prime";
  }
  else{
    std::cout << "Number isn't prime";
  }

}
