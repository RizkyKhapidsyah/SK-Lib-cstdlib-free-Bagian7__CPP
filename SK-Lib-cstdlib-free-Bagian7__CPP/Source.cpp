#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
	Source by Programiz (https://www.programiz.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

using namespace std;

int main() {
	int x = 5;
	int* ptr1 = NULL;

	int* ptr2 = &x;

	if (ptr1) {
		cout << "Status: Pointer is not Null" << endl;
	} else {
		cout << "Status: Pointer is Null" << endl;
	}

	free(ptr1);

	cout << *ptr2;

	_getch();
	return 0;
}