#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

void spline_interpolation(int n, double x[5], double y[5], double p, int j)
{
	double a = 0, b = 0, c = 0, d = 0;
	double h[5] = { 0,0,0,0,0 };
	double s[5] = { 0,0,0,0,0 };
	double matr[5][5] = {
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	};
	for (int i = 0; i < n; i++)
	{
		s[i] = 0;
	}
	for (int i = 1; i <= n - 1; i++)
	{
		h[i - 1] = x[i] - x[i - 1];
	}
	for (int i = 1; i < n - 1; i++)
	{
		matr[i][i] = 2 * (h[i - 1] + h[i]);
		if (i != 1)
		{
			matr[i][i - 1] = h[i - 1];
			matr[i - 1][i] = h[i - 1];
		}
		matr[i][n - 1] = 6 * ((y[i + 1] - y[i]) / (x[i + 1] - x[i]) - (y[i] - y[i - 1]) / (x[i] - x[i - 1]));
	}
	double sum, k;
	for (int i = 1; i < n - 2; i++)
	{
		k = (matr[i + 1][i] / matr[i][i]);
		for (int j = 1; j <= n - 1; j++)
			matr[i + 1][j] -= k * matr[i][j];
	}
	for (int i = n - 2; i > 0; i--)
	{
		sum = 0;
		for (int j = i; j <= n - 2; j++)
			sum += matr[i][j] * s[j];
		s[i] = (matr[i][n - 1] - sum) / matr[i][i];
	}
	for (int i = 0; i < n - 1; i++)
		if ((x[i] <= p) && (p <= x[i + 1]))
		{
			a = (s[i + 1] - s[i]) / (6 * h[i]);
			b = s[i] / 2;
			c = (y[i + 1] - y[i]) / h[i] - (2 * h[i] * s[i] + s[i + 1] * h[i]) / 6;
			d = y[i] / 1;
			sum = a * pow((p - x[i]), 3) + b * pow((p - x[i]), 2) + c * (p - x[i]) + d;
		}
	//cout << ":" << sum << endl << endl;
	cout << "Коефiцiєнти сплайна для промiжку № " << j << ": " << a << " " << " " << b << " " << c << " " << d;
}


double Newton(double x1, double x[5], double y[5])
{
	double value = y[0], F, m;
	for (int i = 1; i < 5; i++)
	{
		F = 0;
		for (int j = 0; j <= i; j++)
		{
			m = 1;

			for (int q = 0; q <= i; q++)
			{
				if (q != j)
				{
					m *= (x[j] - x[q]);
				}
			}

			F += y[j] / m;
		}

		for (int k = 0; k < i; k++)
			F *= (x1 - x[k]);
		value += F;
	}
	return value;
}

int main()
{
	setlocale(LC_ALL, "rus");
	double x[5] = { -4, -2, 0, 2, 4 };
	double y[5] = { -2.01, -1.958, 0, 1.958, 2.01 };

	for (double i = x[0]; i <= x[4] + 0.1; i += 0.4)
	{
		cout << "Значення полiнома Ньютона в точцi " << fixed << setprecision(2) << i << ": ";
		cout << Newton(i, x, y) << endl;

	}
	for (int i = x[0]; i <= x[4] + 0.1; i += 2)
	{
		double err = fabs(Newton(i, x, y) - sin(i) * pow(2 * i, double(1) / 3));
		cout << "Похибка для х=" << fixed << setprecision(5) << i << "  " << err << endl;
	}
	int j = 1;
	for (int i = x[0]; i < x[4]; i += 2)
	{

		spline_interpolation(5, x, y, i, j);
		j++;
		cout << endl;
	}

}
