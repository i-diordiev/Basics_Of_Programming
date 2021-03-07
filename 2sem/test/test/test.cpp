#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double find_max(double[5], double[5]);
void outputing_matr(double[5][5]);
void outputing_vect(double[5]);
double* perevirka(double[5][5], double[5], double[5]);
int main()
{
	setlocale(LC_ALL, "rus");
	double A[5][5] =
	{
	{5.93, 1.12, 0.95, 1.32, 0.83},
	{0.00, 3.318, 1.941, 0.321, 0.753},
	{0.00, 1.941, 6.728, 1.078, 1.437},
	{0.00, 0.321, 1.078, 3.526, 1.065},
	{0.00, 0.753, 1.437, 1.065, 5.844}
	};
	double b[] = { 7.24, 1.843, 2.07, 4.638, 4.987 };

	double x_previous[] = { 0.0,0.0,0.0,0.0,0.0 };
	double x[5];


	double C[5][5] = {
	{0.0, 0.0, 0.0, 0.0, 0.0},
	{0.0, 0.0, 0.0, 0.0, 0.0},
	{0.0, 0.0, 0.0, 0.0, 0.0},
	{0.0, 0.0, 0.0, 0.0, 0.0},
	{0.0, 0.0, 0.0, 0.0, 0.0} };
	double d[5] = { 0,0,0,0 };
	double eps = 0.000001;

	float max_e = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (A[i][j] > max_e)
				max_e = A[i][j];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{

			A[i][j] = A[i][j] / max_e;
		}
		b[i] = b[i] / max_e;
		x[i] = b[i];
	}
	cout << "Матриця А" << endl;
	outputing_matr(A);
	cout << "Вектор вiльних членiв " << endl;
	outputing_vect(b);
	cout << endl;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
		{
			if (i != j)
			{
				C[i][j] = -(A[i][j] / A[i][i]);
			}
			else C[i][j] = 0;
		}
		d[i] = b[i] / A[i][i];
		x_previous[i] = d[i];
	}
	int counter = 0;
	while (true) {
		counter++;
		for (int i = 0; i < 5; i++)
		{
			float s = 0;
			for (int j = 0; j < 5; j++)
			{
				s = s + C[i][j] * x_previous[j];
			}
			x[i] = s + d[i];
		}
		float max = find_max(x, x_previous);

		for (int i = 0; i < 5; i++)
		{
			x_previous[i] = x[i];
		}


		cout << "Iteration №" << counter << endl;
		double* vector_nezviazky = new double[5];
		for (int i = 0; i < 5; i++)
			vector_nezviazky[i] = 0;
		vector_nezviazky = perevirka(A, x, b);
		cout << "Вектор незвязки:" << endl;
		outputing_vect(vector_nezviazky);
		cout << "Вектор розвязкiв  " << endl;
		outputing_vect(x);
		cout << endl;

		if (max < eps)
		{
			break;
		}
	};
	cout << "Iteration №" << counter << endl;
	double* vector_nezviazky = new double[5];
	for (int i = 0; i < 5; i++) {
		vector_nezviazky[i] = 0;
	}
	vector_nezviazky = perevirka(A, x, b);
	cout << "Вектор незвязки:" << endl;
	outputing_vect(vector_nezviazky);
	cout << "Вектор розвязкiв  " << endl;
	outputing_vect(x);
	cout << endl;


	return 0;
}

void outputing_matr(double matr[5][5])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << fixed << setw(10) << setprecision(6) << matr[i][j];
		}
		cout << endl;
	}

}

void outputing_vect(double x[5])
{
	for (int i = 0; i < 5; i++)
	{
		cout << fixed << setw(10) << setprecision(6) << x[i];
	}
	cout << endl;
}


double find_max(double x[5], double x_pop[5])
{
	double max = fabs(x[0] - x_pop[0]);
	for (int i = 1; i < 5; i++)
	{
		if (fabs(x[i] - x_pop[i]) > max)
			max = fabs(x[i] - x_pop[i]);
	}
	return max;
}


double* perevirka(double A[5][5], double x[5], double b[5])
{
	double* dop_matr = new double[5];
	for (int i = 0; i < 5; i++)
		dop_matr[i] = 0;
	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < 5; j++)
			dop_matr[i] += A[i][j] * x[j];
	}

	for (int i = 0; i < 5; i++)
	{
		dop_matr[i] = b[i] - dop_matr[i];

	}

	return dop_matr;
}


