/*
Да се напише функция, която намира сумата на две матрици
*/

#include <iostream>

using namespace std;

#define MAX_ROWS 100
#define MAX_COLS 100

void print(int matrix[MAX_ROWS][MAX_ROWS], const int rows, const int cols)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout << *(*(matrix + i) + j) << " ";
		}
		cout << endl;
	}
}

void sum(int matrix1[MAX_ROWS][MAX_COLS], int matrix2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], const int rows, const int cols)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			result[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
}

void solution()
{
	int matrix1[MAX_ROWS][MAX_COLS] = {{1, 4, 7},
																		 {2, 5, 8},
																		 {3, 6, 9}};
	int matrix2[MAX_ROWS][MAX_COLS] = {{1, 2, 3},
																		 {4, 5, 6},
																		 {7, 8, 9}};
	int result[MAX_ROWS][MAX_COLS];

	sum(matrix1, matrix2, result, 3, 3);

	print(matrix1, 3, 3);
	cout << "+\n";
	print(matrix2, 3, 3);
	cout << "=\n";
	print(result, 3, 3);
}

int main()
{
	solution();

	return 0;
}