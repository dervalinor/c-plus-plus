/*A bound list is a structure of date  dynamics 
and  have a number of nodes with two componenets
(field), a bound to the next list and a value, 
it could be any type

Type of list:

1. list simple bound (only bound to node next, run ahead)
2. list double bound (double bound to node next, back and ahead)
3. list circular simple bound (where the last element bound to
first element of the list, run citcular)
4. list circular double bound (where the first element bound to last element and
vice versa) 

Operation in bound list:

1. add elements to a list
2. show elements of a list
3. search elements of a list
4. remove elements of a list */

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node
{
	int date;
	Node *next;
};

void ask();
void add(Node *&, int);
void show(Node *);
void find(Node *, int);
void remove(Node *&, int);
void allremove(Node *&, int &);

int main(int argc, char const *argv[])
{
	
	ask();

	return 0;
}

void ask(){

	//Beggining the list is empty
	Node *list = NULL;
	int n, option;

	cout << "List to number \n";

	do
	{
		cout << "\n1. Add element to the list \n";
		cout << "2. show element to the list \n";
		cout << "3. search elements in the list \n";
		cout << "4. Remove elements of the list \n";
		cout << "5. Remove all elements of the list \n";
		cout << "6. Exit \n";

		cout << "\nChoose a option: "; cin >> option;

		if (option == 1)
		{
			 cout << "\nElement to add: "; cin >> n;
			 add(list, n);
		}

		if (option == 2)
		{
			show(list);			
		}

		if (option == 3)
		{
			cout << "\nFind element: "; cin >> n;

			find(list, n);
		}

		if (option == 4)
		{
			cout << "\nElement to delete: "; cin >> n;
			remove(list, n);
		}

		if (option == 5)
		{
			while(list != NULL){

				allremove(list, n);
				cout << "Data delete of the list: ";
				cout << n << ", ";
			}
		}

	} while (option != 6);
}

void add(Node *&list, int n){

	//Create a new node
	Node *new_node = new Node();
	//assign the new_node -> date the new date a add
	new_node -> date = n;
	//create two nodes auxliar and assign the list to the first node
	Node *aux1 = list; //insert element to beggining
	Node *aux2; //insert element in middle of the list
	//insert the element to the list
	/*Exist three case:
	1. list is empty
	2. list have a node
	3. list have more node */

	while((aux1 != NULL) && (aux1 -> date < n)/*for have the list ordered lesser to greater*/){
		
		aux2 = aux1;
		aux1 = aux1 -> next; 
	}

	if (list == aux1)
	{
		list = new_node;
	}

	else {

		aux2 -> next = new_node;
	}

	new_node -> next = aux1;
}

void show(Node *list){

	cout << "\nElements of the list: ";
	//Create a new node (current)
	Node *current = new Node();
	//Equilaze new node (current) to list
	current = list;
	//Roam the list of beggining to end
	while(current != NULL){

		cout << current -> date << ", ";
		current = current -> next;
	}

	cout << "\n";
}

void find(Node *list, int n){

	bool band = false;
	//create a new node
	Node *current1 = new Node();
	//Equilaze the new node to list
	current1 = list;
	//Roam the list
	while((list != NULL) && (current1 -> date <= n)){

		if(current1 -> date == n){

			band == true;
		}

		current1 = current1 -> next;
	}
	//determine if the element exist in the list or not
	if (band == true)
	{
		cout << "Element " << n << " found in the list \n";
	}

	else {

		cout << "Element " << n << " not found in the list \n";
	}
}

void remove(Node *&list, int n){

	//Ask if the list is empty
	if (list != NULL)
	{
		//Create a auxiliar delete and auxiliar previuos equal to NULL
		Node *aux_delete;
		Node *aux_previous = NULL;
		
		//Equalize auxilar delete to the beginning of the list
		aux_delete = list;

		//Roam the list
		while((aux_delete != NULL) && (aux_delete -> date != n)){//move in the list

			aux_previous = aux_delete;
			aux_delete = aux_delete -> next;
		}

		if (aux_delete == NULL)
		{
			 cout << "\nElement not found \n";
		}

		//Delete the element  
		else if (aux_previous == NULL) //element to delete is first in the list
		{
			list = list -> next;
			delete aux_delete;
		}

		else { //element isn't first in the list

			aux_previous -> next = aux_delete -> next;
			delete aux_delete;
		}

		cout << "\nElement delete of the list \n";
	}
}

void allremove(Node *&list, int &n){

	//create a node *aux and equalize to the beginning of the list
	Node *aux = list;
	//save the date to delete in *aux
	n = aux -> date;	
	//pass list to next node
	list = aux -> next;
	//delete aux 
	delete aux;
}