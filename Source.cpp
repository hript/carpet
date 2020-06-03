#include<iostream>
#include<iomanip>

#define SIZE 5

using namespace std;

int currentNumb = 1;
int max_pos_x = 2, max_pos_y = 3;
int now_pos_x = SIZE/2, now_pos_y = SIZE/2 - 1;


bool out() {
	if (currentNumb == SIZE * SIZE )
		return true;
	return false;
}


int main() {
	int arr[SIZE][SIZE];
	
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			arr[i][j] = i + j;
	
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++)
			cout <<setw(3)<<arr[i][j] << " ";
		cout << endl;
	}

	return 0;
}