/*Create a program for save data of people (Name and age) in a bank 
and show the ordered list of people */
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct Node
{
	int date;
	Node *next;
};

//search the relation between client and Node
struct client
{
	char name[30];
	int age;
}person[100], *pointer_person = person;

void ask();
void add(Node *&, Node *&, int, client *, int);
bool line_empty(Node *);
void remove(Node *&, Node *&, int &, client *, int &);

int main(int argc, char const *argv[])
{
	
	ask();

	return 0;
}

void ask(){

	Node *front = NULL;
	Node *end = NULL;

	int n, option, m = 0;

	do
	{
		cout << "1. Add name to the list of client \n";
		cout << "2. Show all the client \n";
		cout << "3. Exit \n";

		cout << "Choose a option: "; cin >> option;

		if (option == 1)
		{
			cout << "\nNumber of client: "; cin >> n;
			m = m + 1;
			add(front, end, n, pointer_person, m);
		}

		if (option == 2)
		{
			cout << "\nClient of the bank: \n";

			while(front != NULL and end != NULL){

				remove(front, end, n, pointer_person, m);

				m = m - 1;

				if (front != NULL and end != NULL)
				{
					cout << "Number of client: " << n << endl;					
				}

				else {

					cout << "Number of last client: "<< n << "\n";
				}
			}
		}

		cin.ignore();

	} while (option == 1 or option == 2);

}

void add(Node *&front, Node *&end, int n, client *pointer_person, int m){

	Node *new_node = new Node();
	new_node -> date = n;

	cin.ignore();

	cout << "Name: "; cin.getline((pointer_person + m) -> name, 30, '\n');
	cout << "Age: "; cin >> (pointer_person + m) -> age;

	new_node -> next = NULL;

	if (line_empty(front))
	{
		front = new_node;
	}

	else{

		end -> next = new_node;
	}

	end = new_node;

	cout << "Element add to the line \n";

}

void remove(Node *&front, Node *&end, int &n, client *pointer_person, int &m){

	n = front -> date;

	cout << "Name: " << (pointer_person + m) -> name << endl;
	cout << "Age: " << (pointer_person + m) -> age << endl;

	Node *aux = front;

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

bool line_empty(Node *front){
	
	return(front == NULL)? true : false;
}