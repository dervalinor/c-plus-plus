/*A line (cola) is a structure of data, where we can insert elements for a
side and remove elements for other side.
The elements add in the end to the line and for remove elements for front

Add elements to the line:

1. create space in memory for save the node
2. assign to new node the new date
3. assign to the pointer front and end to new node

Remove elements: 

1. Obtain the value of date
2. Create a varaible auxiliar and assign the front of line
3. Delete the node front */

#include <iostream>
#include <stdlib.h>

using namespace std; 

struct Node
{
	int date;
	Node *next;
};

void add(Node *&, Node *&, int);
bool line_empty(Node *);
void remove(Node *&, Node *&, int &);

int main(int argc, char const *argv[])
{
	
	//initial the line is empty
	Node *front = NULL;
	Node *end = NULL;

	int n, option;

	cout << "Program of a line \n";

	do
	{
		cout << "\n1. Add elements \n";
		cout << "2. Remove elements \n";
		cout << "3. exit \n";
		cout << "\nYou choose a option: "; cin >> option;


		if (option == 1)
		{
			cout << "Number to add: "; cin >> n;
			add(front, end, n);
		}

		if (option == 2)
		{
			while(front != NULL and end != NULL){

					remove(front, end, n);

					if (front != NULL and end != NULL)
					{
						 cout << n << ", ";
					}

					else{

						cout << n << ".";
					}
			}
		}

	} while (option == 1 or option == 2);

	return 0;
}

void add(Node *&front, Node *&end, int n){

	//1. create space in memory for save the node
	Node *new_node = new Node();
	//2. assign to new node the new date
	new_node -> date = n;
	//3. assign to the pointer front and end to new node*/
	new_node -> next = NULL;

	//know if the line is empty or no
	if (line_empty(front))
	{
		front = new_node;
	}

	else{

		end -> next = new_node;
	}

	end = new_node;

	cout << "Element to the line \n";

}

//function for determine if the pile is empty or no
bool line_empty(Node *front){//Bool for date of type TRUE or FALSE, no reference because no change

	/* if (front == NULL)
	{
		return true;		
	}

	else{

		return false;
	} is equal to: */

	return(front == NULL)? true : false;
}

void remove(Node *&front, Node *&end, int &n){

	//1. Obtain the value of date
	n = front -> date;
	//2. Create a varaible auxiliar and assign the front of line
	Node *aux = front;
	//3. Delete the node front

	//exist one or more node
	if (front == end)
	{
		front = NULL;
		end = NULL;
	}

	else {

		front = front -> next;
	}

	delete aux;
}