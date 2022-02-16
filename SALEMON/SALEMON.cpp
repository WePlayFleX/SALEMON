#include <iostream>
#include <iomanip>

using namespace std;

const int DISTRICTS = 4;
const int MONTS = 3;

void display(double[DISTRICTS][MONTS]);

int main()
{
	/*double sales[DISTRICTS][MONTS];


	for (size_t i = 0; i < DISTRICTS; i++)
	{
		for (size_t j = 0; j < MONTS; j++)
		{
			cout << "Enter the sales volume for the department " << i + 1;
			cout << ", per month " << j + 1 << ": ";
			cin >> sales[i][j];
		}
	}*/

	double sales[DISTRICTS][MONTS] =
	{
		{1432.07,	234.50,		654.01},
		{322.00,	13838.32,	17589.88},
		{9328.34,	934.00,		4492.30},
		{12838.29,	2332.63,	32.93}
	};

	display(sales);

	cout << endl;

	system("pause");
	return 0;
}

void display(double funsales[DISTRICTS][MONTS])
{
	cout << "\n\n";
	cout << "			    Month\n";
	cout << "		   1	     2	       3";

	for (size_t i = 0; i < DISTRICTS; i++)
	{
		cout << "\nDepartment " << i + 1;
		for (size_t j = 0; j < MONTS; j++)
		{
			cout << setiosflags(ios::fixed)
				<< setiosflags(ios::showpoint)
				<< setprecision(2)
				<< setw(10)
				<< funsales[i][j];
		}
	}
}