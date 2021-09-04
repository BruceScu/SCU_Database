<<<<<<< HEAD
﻿#include "p0_starter.h"
#include <vector>
using namespace scudb;
using namespace std;

int main()
{
	RowMatrix<int> matrix_1(5, 5);
	for (int i = 0; i < matrix_1.GetRowCount(); i++)
	{
		for (int j = 0; j < matrix_1.GetColumnCount(); j++)
		{
			matrix_1.SetElement(i, j, i * matrix_1.GetColumnCount() + j);
		}
	}
	cout << "matrix_1:(rows:" << matrix_1.GetRowCount() << " columns:" << matrix_1.GetColumnCount() << ")" << endl;
	RowMatrixOperations<int>::Print(matrix_1);

	vector<int> vector_1(25, 1);
	cout << "vector_1:" << endl;
	for (int i = 0; i < vector_1.size(); i++)
	{
		cout << vector_1[i] << " ";
	}
	cout << endl;
	RowMatrix<int> matrix_2(5, 5);
	matrix_2.FillFrom(vector_1);
	cout << "matrix_2 filled from vector_1: (rows:" << matrix_2.GetRowCount() << " columns:" << matrix_2.GetColumnCount() << ")" << endl;
	RowMatrixOperations<int>::Print(matrix_2);

	vector<int> vector_2(5, 2);
	cout << "vector_2:" << endl;
	for (int i = 0; i < vector_2.size(); i++)
	{
		cout << vector_2[i] << " ";
	}
	cout << endl;
	RowMatrix<int> matrix_3(5, 1);
	matrix_3.FillFrom(vector_2);
	cout << "matrix_3 filled from vector_2: (rows:" << matrix_3.GetRowCount() << " columns:" << matrix_3.GetColumnCount() << ")" << endl;
	RowMatrixOperations<int>::Print(matrix_3);

	cout << "result = matrix_1 + matrix_2:" << endl;
	RowMatrixOperations<int>::Print(*(RowMatrixOperations<int>::Add(&matrix_1, &matrix_2)));

	cout << "result = matrix_1 * matrix_3:" << endl;
	RowMatrixOperations<int>::Print(*(RowMatrixOperations<int>::Multiply(&matrix_1, &matrix_3)));

	cout << "result = matrix_1 * matrix_3 + matrix_3:" << endl;
	RowMatrixOperations<int>::Print(*(RowMatrixOperations<int>::GEMM(&matrix_1, &matrix_3, &matrix_3)));
	
	return 0;
}
=======
﻿#include "p0_starter.h"
#include <vector>
using namespace scudb;
using namespace std;

int main()
{
	RowMatrix<int> matrix_1(5, 5);
	for (int i = 0; i < matrix_1.GetRowCount(); i++)
	{
		for (int j = 0; j < matrix_1.GetColumnCount(); j++)
		{
			matrix_1.SetElement(i, j, i * matrix_1.GetColumnCount() + j);
		}
	}
	cout << "matrix_1:(rows:" << matrix_1.GetRowCount() << " columns:" << matrix_1.GetColumnCount() << ")" << endl;
	RowMatrixOperations<int>::Print(matrix_1);

	vector<int> vector_1(25, 1);
	cout << "vector_1:" << endl;
	for (int i = 0; i < vector_1.size(); i++)
	{
		cout << vector_1[i] << " ";
	}
	cout << endl;
	RowMatrix<int> matrix_2(5, 5);
	matrix_2.FillFrom(vector_1);
	cout << "matrix_2 filled from vector_1: (rows:" << matrix_2.GetRowCount() << " columns:" << matrix_2.GetColumnCount() << ")" << endl;
	RowMatrixOperations<int>::Print(matrix_2);

	vector<int> vector_2(5, 2);
	cout << "vector_2:" << endl;
	for (int i = 0; i < vector_2.size(); i++)
	{
		cout << vector_2[i] << " ";
	}
	cout << endl;
	RowMatrix<int> matrix_3(5, 1);
	matrix_3.FillFrom(vector_2);
	cout << "matrix_3 filled from vector_2: (rows:" << matrix_3.GetRowCount() << " columns:" << matrix_3.GetColumnCount() << ")" << endl;
	RowMatrixOperations<int>::Print(matrix_3);

	cout << "result = matrix_1 + matrix_2:" << endl;
	RowMatrixOperations<int>::Print(*(RowMatrixOperations<int>::Add(&matrix_1, &matrix_2)));

	cout << "result = matrix_1 * matrix_3:" << endl;
	RowMatrixOperations<int>::Print(*(RowMatrixOperations<int>::Multiply(&matrix_1, &matrix_3)));

	cout << "result = matrix_1 * matrix_3 + matrix_3:" << endl;
	RowMatrixOperations<int>::Print(*(RowMatrixOperations<int>::GEMM(&matrix_1, &matrix_3, &matrix_3)));
	
	return 0;
}
>>>>>>> f69e2c3aaffce791e8c33903bc746dc3cedfa195
