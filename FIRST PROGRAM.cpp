#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  float L,M,D,A;

  std::cout << "escribe las tres notas: " << endl;
  std::cout << "escribe la primera nota: "; std::cin >> L;
  std::cout << "escribe la segunda nota: "; std::cin >> M;
  std::cout << "escribe la tercera nota: "; std::cin >> D;

  A = (L+M+D)/3;

  std::cout << "promedio: " << A << endl;

  return 0;
}
