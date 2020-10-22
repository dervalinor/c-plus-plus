/*find the greater element of a array */
#include <iostream>

using namespace std;

int mayor(int *, int);

int main(int argc, char const *argv[]) {

  int arreglo[10], elementos;

  std::cout << "\nSize of the array: "; std::cin >> elementos;

  for (int i = 0; i < elementos; i++) {
    std::cout << "element " << i << ": "; std::cin >> arreglo[i];
  }

  std::cout << "The greater element of the array is: " << mayor(arreglo, elementos) << endl;
  //where with arreglo = &arreglo[0]

  return 0;
}

int mayor(int *dir_arr, int elementos) {

  int max = 0;

  for (int i = 0; i < elementos; i++) {
    if (*(dir_arr+i) > max) {
        max = *(dir_arr+i);
    }
  }

  return max;

}
