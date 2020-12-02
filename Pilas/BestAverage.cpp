/*create a program for calculate best average */
#include <iostream>
#include <string.h>

using namespace std;

struct person
{
	char name[30];
	int age;
	double note1, note2, note3, average;
} student[30], *pointer_student = student; //equal to give the first position of the array 

void ask();
void best(person *, int);

int main(int argc, char const *argv[])
{

	ask();

	return 0;
}

void ask(){

	int n, a, b, c;
	
	cout << "Number of the student: "; cin >> n;

	for (int i = 0; i < n; ++i)
	{
		fflush(stdin); //liberate memory
		cout << "Student " << i  + 1 << endl;
		cout << "\nName: "; cin.getline((pointer_student + i) -> name, 30, '\n');
		cout << "Age: "; cin >> (pointer_student + i)-> age;
		cout << "Note 1: "; cin >> (pointer_student + i) -> note1;
		cout << "Note 2: "; cin >> (pointer_student + i) -> note2;
		cout << "Note 3: "; cin >> (pointer_student + i) -> note3;

		a =  (pointer_student + i) -> note1;
		b =  (pointer_student + i) -> note2;
		c =  (pointer_student + i) -> note2;

		(pointer_student + i) -> average = (a + b + c)/3;

	}

}

void best(person *pointer_student, int n){

	int A, m = 0;

	for (int i = 0; i < n; ++i)
	{
		A = (pointer_student + i) -> average;

		for (int j = 0; j < n; ++j)
		{
			if (A >= (pointer_student + j) -> average)
			{
				m = m + 1;
			}			
		}

		if (m == n)
		{
			cout << "Best average: " << endl;
			cout << "Name: " << (pointer_student + i) -> name;
			cout << "Age: " << (pointer_student + i) -> age;
			cout << "average: " << (pointer_student + i) -> average;
		}
	}

}