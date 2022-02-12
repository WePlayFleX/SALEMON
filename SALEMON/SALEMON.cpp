#include <iostream>
#include <iomanip>

using namespace std;

const int DISTRICTS = 4;
const int MONTS = 3;

int main()
{
	double sales[DISTRICTS][MONTS];


	for (size_t i = 0; i < DISTRICTS; i++)
	{
		for (size_t j = 0; j < MONTS; j++)
		{
			cout << "Enter the sales volume for the department " << i + 1;
			cout << ", per month " << j + 1 << ": ";
			cin >> sales[i][j];
		}
	}

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
				<< sales[i][j];
		}
	}

	cout << endl;

	system("pause");
	return 0;
}