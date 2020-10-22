/*create a function where we will give as parameter a pointers
Example: interchange of values of two variables*/

#include <iostream>

using namespace std;

//Now we give two variables of type pointer
void interchange(float *, float *);

int main(int argc, char const *argv[]) {

  float variable1, variable2;

  std::cout << "Variable 1: "; std::cin >> variable1;
  std::cout << "Variable 2: "; std::cin >> variable2;

  std::cout << "\nValues of the variables before interchange: " << '\n';
  std::cout << "Variable 1: " << variable1 << endl;
  std::cout << "Variable 2: " << variable2 << endl;

  interchange(&variable1, &variable2);//& for give address of variables

  return 0;
}

void interchange(float *addr_variable1, float *addr_variable2){
  int aux;
  aux = *addr_variable1;
  *addr_variable1 = *addr_variable2;
  *addr_variable2 = aux;

  std::cout << "\n\nInterchange of variables: " << '\n';
  std::cout << "Variable 1: " << *addr_variable1 << endl;
  std::cout << "Variable 2: " << *addr_variable2 << endl;

}
