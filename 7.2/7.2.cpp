#include <iostream>
#include <iomanip>
using namespace std;
int MaxMin(int** a, const int rowCount, const int colCount)
{
	

	int* min = new int[rowCount];
	for (int i = 0; i < rowCount; i++)
	{
		if (i % 2 == 0);
		min[i] = a[i][0];
		for (int j = 1; j < colCount; j++)
			if (a[i][j] < min[i])
				min[i] = a[i][j];
	}
	int max = min[0];
	for (int i = 1; i < rowCount; i++)
		if (min[i] < max)
			max = min[i];
	delete[] min;
	return max;
}

int main() {
	int rowCount, colCount;
	cout << "Enter rows count: "; cin >> rowCount;
	cout << "Enter columns count: "; cin >> colCount;

	int** a = new int* [rowCount];
	for (int i = 0; i < rowCount; i++)
		a[i] = new int[colCount];
	for (int i = 0; i < rowCount; i++)
		for (int j = 0; j < colCount; j++) {
			cout << "a[" << i << "," << j << "] = "; cin >> a[i][j];
		}
	{
		cout << "MinMax = " << MaxMin(a, rowCount, colCount) << endl;
	}
	void Print(int** a, const int rowCount, const int colCount);
	{
		cout << endl;
		for (int i = 0; i < rowCount; i++)
		{
			for (int j = 0; j < colCount; j++)
				cout << setw(4) << a[i][j];
			cout << endl;
		}
		cout << endl;
	}

	for (int i = 0; i < rowCount; i++)
		delete[] a[i];
	delete[] a;
	return 0;
}
