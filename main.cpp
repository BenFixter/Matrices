#include <iostream>

using namespace std;

void sum_of_matrices(const int matrix_a[5][5], const int matrix_b[5][5], int matrix_c[5][5], const int size);
void multiply_matrices(const int matrix_a[5][5], const int matrix_b[5][5], int matrix_c[5][5], const int size);
void display_matrix_c(int matrix_c[5][5], const int size);

int main()
{
	const int matrix_a[5][5] = {
		{1, 2, 3, 4, 5},
		{5, 4, 3, 2, 1},
		{9, 8, 7, 6, 5},
		{5, 6, 7, 8, 9},
		{2, 4, 6, 8, 1},
	};

	const int matrix_b[5][5] = {
		{1, 2, 3, 4, 5},
		{5, 4, 3, 2, 1},
		{9, 8, 7, 6, 5},
		{5, 6, 7, 8, 9},
		{2, 4, 6, 8, 1},
	};

	const int size = 5;
	int matrix_c[5][5] = {};

	sum_of_matrices(matrix_a, matrix_b, matrix_c, size);
	multiply_matrices(matrix_a, matrix_b, matrix_c, size);

	system("pause");
	return 0;
}

void sum_of_matrices(const int matrix_a[5][5], const int matrix_b[5][5], int matrix_c[5][5], const int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			matrix_c[i][j] = matrix_a[i][j] + matrix_b[i][j];
		}
	}
	cout << "Sum Of Two Matrices\n\n";
	display_matrix_c(matrix_c, size);

}

void multiply_matrices(const int matrix_a[5][5], const int matrix_b[5][5], int matrix_c[5][5], const int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			matrix_c[i][j] += matrix_a[i][j] * matrix_b[i][j];
		}
	}
	cout << "\n\nMultiplication Of Two Matrices\n\n";
	display_matrix_c(matrix_c, size);

}

void display_matrix_c(int matrix_c[5][5], int size)
{
	cout << "Matrix C =\n" << endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << matrix_c[i][j] << " ";
			if (j == size -1)
			{
				cout << endl;
			}

		}
	}
}
