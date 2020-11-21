#include <iostream>

using namespace std;

int main() {
	cout << "Matrix Multiplier" << endl;

	int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

	cout << "Enter rows and columns for first matrix: " << endl;
	cin >> r1 >> c1;
	cout << "Enter rows and columns for second matrix: " << endl;
	cin >> r2 >> c2;

	while (c1 != r2) {
		cout << "Columns of first matrix not equal to Rows of second!" << endl;

		cout << "Enter rows and columns for first matrix: " << endl;
		cin >> r1 >> c1;

		cout << "Enter rows and columns for second matrix: " << endl;
		cin >> r2 >> c2;
	}

	cout << endl << "Enter elements of the first matrix:" << endl;
	for (i = 0; i < r1; ++i) {
		for (j = 0; j < c1; ++j) {
			cout << "Enter element of first matrix " << i + 1 << " " << j + 1 << " : " << endl;
			cin >> a[i][j];
		}
	}

	cout << endl << "Enter elements of the second matrix:" << endl;
	for (i = 0; i < r2; ++i) {
		for (j = 0; j < c2; ++j) {
			cout << "Enter element of second matrix " << i + 1 << " " << j + 1 << " " << " : " << endl;
			cin >> b[i][j];
		}
	}

	for (i = 0; i < r1; ++i) {
		for (j = 0; j < c2; ++j) {
			mult[i][j] = 0;
		}
	}

	for (i = 0; i < r1; ++i) {
		for (j = 0; j < c2; ++j) {
			for (k = 0; k < c1; ++k) {
				mult[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	cout << endl << "Multiplied Matrix: " << endl;
	for (i = 0; i < r1; ++i) {
		for (j = 0; j < c2; ++j) {
			cout << " " << mult[i][j];
			if (j == c2 - 1)
				cout << endl;
		}
	}

	return 0;
}
