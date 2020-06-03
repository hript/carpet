#include<iostream>
#include<iomanip>

#define SIZE 5

using namespace std;

int main() {
	int arr[SIZE][SIZE] = { 0 };
	system("color F0");
	for ( int i=0; i<SIZE; i++)
		for (int j = 0; j < SIZE; j++) {
			if (i == j || (i == SIZE - j - 1))
				arr[i][j] = 1; 
			if (i == SIZE / 2 || j == SIZE / 2)
				arr[i][j] = 1; 
		}
	
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++)
			cout <<setw(3)<<arr[i][j] << " ";
		cout << endl;
	}

	return 0;
}