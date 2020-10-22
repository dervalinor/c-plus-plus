#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int number, *address_number;
  /*A pointer must be of the same type of the variable*/

  cout << "You give me a number: "; cin >> number;

  /**address_number save the address of memory for the variable number */
  address_number = &number;

  /*if we want know the value save for *address_number (value of the variable) then: */
  cout << "Number: " << *address_number << endl;

  /*if we wan see the address of the variable then:  */
  cout << "address of the variable number: " << address_number << endl;


  return 0;
}
