/*Sie ausfüllen einen vektor und zeigen kleiner Element*/
#include <iostream>

using namespace std;

void lesser_element(int vektor[], int);

int main(int argc, char const *argv[]) {

  int vektor[100], size;

  std::cout << "Program for find the lesser element of a vector" << endl;
  std::cout << "\nYou give me the size of the vector: "; std::cin >> size;
  std::cout << "You give me the elements of the vector: " << endl;

  for (int i = 0; i < size; i++) {
    std::cout << "Element " << "[" << i << "]: "; std::cin >> vektor[i];
  }

  lesser_element(vektor, size);

  return 0;
}

void lesser_element(int vektor[], int size){

  int l = 0, m = 0, a = 0, *ad_vektor;
  ad_vektor = vektor;
  l = size;

  for (int i = 0; i < size; i++) {

    a = *ad_vektor++;
    for (int j = 0; j < size; j++) {
      if (a <= vektor[j]){
        m = m + 1;
      }
    }

    if (m == l) {
      std::cout << "\nThe lesser element is " << a << endl;
      size = 0; //for no return this menssage other once
    }

    m = 0; //m must return to its initial value

  }


}
