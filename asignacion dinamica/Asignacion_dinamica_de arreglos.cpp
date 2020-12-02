/*Dynamic array is where the size of this isn't static, we can change or choose
the size of the array for so avoid to leave memory without use.
for this we use two operator:
new: save the space of memory for declare
delete: liberate a block save with anteority

EXAMPLE: Sie fragen der Anwender n die Notiz und speichern in ein dynamisch
Vektor*/
#include <iostream>
#include <stdlib.h> //for dynamic vector, new and delete

void asknote();
void shownote();
int Numbernote, *Note; //we must use a pointer for create a dynamic array

using namespace std;

int main(int argc, char const *argv[]) {

	asknote();
	shownote();

	delete[] Note; //liberate memory

  return 0;
}

void asknote() {

  std::cout << "\nYou give me the number of notes: "; std::cin >> Numbernote;
  Note = new int[Numbernote]; //Reserve space in memory for use

  for (int i = 0; i < Numbernote; ++i)
  {
  	std::cout << "Note " << i << " : "; std::cin >> Note[i];
  }

}

void shownote() {
	std::cout << "\nYour notes are: " << endl;

	for (int i = 0; i < Numbernote; i++) {
		std::cout << "Note " << i << " : " << Note[i] << endl;
	}
}
