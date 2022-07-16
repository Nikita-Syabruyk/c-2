#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}
	int kol = 1;
	for (kol; kol < n; kol++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i == j) {
					arr[i][j] = 0;
				}
				if (arr[i][j-1]==(kol-1)) {
					arr[i][j] = kol;
				}
			}
		}
	}
	kol = 1;
	for (kol; kol < n; kol++) {
		for (int i = 0; i <n; i++) {
			for (int j =n-1; j > -1; j--) {
				if (arr[i][j + 1] == (kol - 1) && arr[i][j] != NULL&&arr[i][j]<0) {
					arr[i][j] = kol;
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	delete[]arr;
}