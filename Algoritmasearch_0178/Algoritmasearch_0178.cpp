#include <iostream>
using namespace std;

int arr[20]; // Array to be searched
int n; // number of elements in the array
int i; // index of array element

void input() {
	while (true) {
		cout << "Enter the number of element in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray shoult have minimum 1 and maximum 20 elements.\n\n";
	}

	// accept array elements
	cout << "\n-----------------------\n";
	cout << "Enter array elements \n";
	cout << "---------------------\n"; 
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[1];
	}
}

void LinearSearch() {
	char ch;
	int ctr; // number of comparisons
	int item;

	do {
		//Accept the number to be searched
		cout << "\nEnter the element you want to search: ";
		cin >> item;

		ctr = 0;
		
	}
}