/*A pile is structure of data ordered entry where
only we can enter or delete date for a extreme, called 
top 
Insert data in a pile:

1. create the space in memory for save the node
2. load the value data in node (inside of the date)
3. load the pointer inside the node (*next)
4. Assign the new node to pile*/

/*remove element of the pile 
1. create a variable *auxiliar of type node 
2. equalize date and variable auxiliar
3. pile to next node
4. delete the variable auxiliar*/

//start the pile with pile = NULL (pile empty)

#include <iostream>
#include <stdlib.h>

using namespace std;

//first create the structure node
struct Node
{
	int date;
	Node *next;
};

void add(Node *&, int); //Node next and int for date
void remove(Node *&, int &);//for reference because this change

int main(int argc, char const *argv[])
{
	
	//first we must create a node pile initial in NULL (empty)
	Node *pile = NULL;

	int date;

	cout << "Add number of the pile" << endl;
	cout << "\nYou give me the first number: "; cin >> date;

	add(pile, date);

	cout << "\nSecond number: "; cin >> date;

	add(pile, date);

	cout  << "\nRemove date of the pile: ";

	//we use a cycle while for remove element
	while(pile != NULL){

		remove(pile, date);

		if (pile != NULL)
		{
			cout << date << " , ";
		}

		else {

			cout << date << "." << endl;
		}
	}

	return 0;
}

void add(Node *&pile, int n){

	//1. create the space in memory for save the node
	Node *new_node = new Node();
	//2. load the value data in node (inside of the date)
	new_node -> date = n;
	//3. load the pointer inside the node (*next)
	new_node -> next = pile;
	//4. Assign the new node to pile*/
	pile = new_node;
	
	cout << "Number add to the pile" << endl;

}

void remove(Node *&pile, int &n){

	//1. create a variable *auxiliar of type node 
	Node *aux = pile;
	//2. equalize date and variable auxiliar
	n = aux -> date;
	//3. pile to next node
	pile = aux -> next;
	//4. delete the variable auxiliar
	delete aux;

}