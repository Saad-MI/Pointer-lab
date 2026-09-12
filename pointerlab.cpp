#include <iostream>
#include <random>
#include <ctime>
#include <vector>
#include <cstdlib>

using namespace std;


void functionone() {
	int a;
	int b;
	cout << "Enter the value for x:";
	cin >> a;
	cout << "Enther the value for y:";
	cin >> b;

	int* ptr_a = &a;
	int* ptr_b = &b;
	cout << "Derefrenced value of ptr_a :" << *ptr_a << endl;
	cout << "Derefrenced value of ptr_b:" << *ptr_b << endl;
}

void function2() {
	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = rand();
		cout << arr[i] << endl;
	}

	int* max_ptr = &arr[0];
	for (int i = 1; i < 10;i++) {
		int* current = &arr[i];

		if (*max_ptr < *current) {
			max_ptr = current;
		}
	}
	cout << "The maximum value is: " << max_ptr << endl;
}

void function3() {
	char word[] = "Hello";
	int cellsvisited = 0;
	char* pointer = word;
	while (*pointer != '\0') {
		cellsvisited++;
		pointer++;
	}
	cout  << "# of cells visited:" << cellsvisited << endl;

}


void function4() {
	char word[] = "Hello";
	char* pointer = word;
	int index = 0;
	while (*pointer != '\0') {
		pointer++;
		index++;
	}
	pointer--;
	while (pointer >= word) {
		cout << *pointer << endl;
		pointer--;
	}
}

void function5() {
	int sizeofarray;
	cout << "Choose the size of the vector: ";
	cin >> sizeofarray;
	cout << endl;
	vector<int> vec;
	for (int i = 0;i < sizeofarray;i++) {
		vec.push_back(rand());
		//cout << vec[i] << endl;
	}
	int* pointer2 = vec.data() + vec.size() - 1;

	int* pointer = vec.data();
	int i = 0;
	while (pointer < pointer2) {

		pointer++;
		pointer2--;
	}

	if (pointer == pointer2) {
		cout << "The value of the midpoint index is: " << *pointer << endl;
	}
	else if (pointer == pointer2 + 1) {
		cout << "The value of the smaller index is: " << *pointer2 << endl;
	}
}

int main()
{
	srand(0);
	functionone();
	function2();
	function3();
	function4();
	function5();
}
