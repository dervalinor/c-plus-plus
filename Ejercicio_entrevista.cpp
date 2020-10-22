/*create a program, where this multiply two number without the sign
of multiplication */
#include <iostream>

using namespace std;

void multiply();

int main(int argc, char const *argv[]) {

multiply();

  return 0;
}

void multiply(){
  //NOTE: the sign of the numbers, law of sign
  int A, B, MULTI = 0, D = 0, E = 0;

  std::cout << "Multiplication of two numbers: " << endl;
  std::cout << "Number 1: " ; std::cin >> A;
  std::cout << "Number 2: "; std::cin >> B;

  if (A > 0 and B > 0){

    for (int i = 0; i < B; i++) {
      MULTI = MULTI + A;
    }

    std::cout << "Result is: " << MULTI << endl;

  }

  if (A < 0) {
    for (int i = 0; i < B; i++) {
      MULTI = MULTI + A;
    }
    std::cout << "Result is: " << MULTI << endl;
  }


  if (B < 0){
    D = -B;
    for (int i = 0; i < D; i++) {
      MULTI = MULTI + A;
    }
    std::cout << "Result is: " << -MULTI << endl;
  }


  if (A < 0 and B < 0){
    D = -A;
    E = -B;
    for (int i = 0; i < D; i++) {
      MULTI = MULTI + E;
    }
    std::cout << "Result is: " << MULTI << endl;
  }

}
