#include<iostream>
#include<iomanip>

#define SIZE 10

using namespace std;

int main() {
	int arr[SIZE][SIZE];
	int currentNumb = 1;

	for ( int i=0; i<SIZE; i++)
		for (int j = 0; j < SIZE; j++) {
			if (i % 2 == 0)
				arr[i][j] = currentNumb;
			else
				arr[i][SIZE - j - 1] = currentNumb;

			currentNumb += 1;
		}

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++)
			cout <<setw(3)<<arr[i][j] << " ";
		cout << endl;
	}

	return 0;
}