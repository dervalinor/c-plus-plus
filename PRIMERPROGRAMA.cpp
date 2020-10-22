#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int A, B, C;

  std::cout << "you give me two number: " << endl;

  std::cout << "first number: "; std::cin >> A;
  std::cout << "second number: "; std::cin >> B;

  C = A + B;

  std::cout << "Result is: " << C << endl;

  return 0;
}
