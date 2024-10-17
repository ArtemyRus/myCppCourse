// Используя заготовку для ввода матрицы, написать функции

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
using namespace std;
#define N 5

void main(void) {
	float m[N][N];
	int i, j;
	float minMatrix(float(*)[N]);
	float maxMatrix(float(*)[N]);
	float maxLowerTriangularMatrix(float(*)[N]);
	float maxUpperTriangularMatrix(float(*)[N]);
	float minLowerTriangularMatrix(float(*)[N]);
	float minUpperTriangularMatrix(float(*)[N]);
	float minDiagonalMatrix(float(*)[N]);
	float maxDiagonalMatrix(float(*)[N]);
	float minSecondDiagonalMatrix(float(*)[N]);
	float maxSecondDiagonalMatrix(float(*)[N]);
	float arithmeticMeanValueMatrix(float(*)[N]);
	float arithmeticMeanValueLowerTriangularMatrix(float(*)[N]);
	float arithmeticMeanValueUpperTriangularMatrix(float(*)[N]);
	void sumRowsMatrix(float(*)[N]);
	void sumColumnsMatrix(float(*)[N]);
	void minValueRowsMatrix(float(*)[N]);
	void minValueColumnsMatrix(float(*)[N]);
	void maxValueRowsMatrix(float(*)[N]);
	void maxValueColumnsMatrix(float(*)[N]);
	void arithmeticMeanValueRowsMatrix(float(*)[N]);
	void arithmeticMeanValueColumnsMatrix(float(*)[N]);
	float sumLowerTriangularMatrix(float(*)[N]);
	float sumUpperTriangularMatrix(float(*)[N]);
	float elementArithmeticMeanValueMatrix(float(*)[N]);


	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			m[i][j] = rand() / 10.;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			cout << setw(8) << setprecision(5) << m[i][j];
		cout << endl;
	}

	cout << "Минимум матрицы: " << minMatrix(m) << endl;
	cout << "Максимум матрицы: " << maxMatrix(m) << endl;
	cout << "Максимум нижнетреугольной части матрицы: " << maxLowerTriangularMatrix(m) << endl;
	cout << "Максимум верхнетреугольной части матрицы: " << maxUpperTriangularMatrix(m) << endl;
	cout << "Минимум нижнетреугольной части матрицы: " << minLowerTriangularMatrix(m) << endl;
	cout << "Минимум верхнетреугольной части матрицы: " << minUpperTriangularMatrix(m) << endl;
	cout << "Минимум главной диагонали матрицы: " << minDiagonalMatrix(m) << endl;
	cout << "Максимум главной диагонали матрицы: " << maxDiagonalMatrix(m) << endl;
	cout << "Минимум второстепенной диагонали матрицы: " << minSecondDiagonalMatrix(m) << endl;
	cout << "Максимум второстепенной диагонали матрицы: " << maxSecondDiagonalMatrix(m) << endl;
	cout << "Cреднеарифметическое значение элементов матрицы: " << arithmeticMeanValueMatrix(m) << endl;
	cout << "Cреднеарифметическое значение элементов нижнетреугольной части матрицы: " << arithmeticMeanValueLowerTriangularMatrix(m) << endl;
	cout << "Cреднеарифметическое значение элементов верхнетреугольной части матрицы: " << arithmeticMeanValueUpperTriangularMatrix(m) << endl;
	sumRowsMatrix(m);
	sumColumnsMatrix(m);
	minValueRowsMatrix(m);
	minValueColumnsMatrix(m);
	maxValueRowsMatrix(m);
	maxValueColumnsMatrix(m);
	arithmeticMeanValueRowsMatrix(m);
	arithmeticMeanValueColumnsMatrix(m);
	cout << "Сумма элементов нижнетреугольной части матрицы: " << sumLowerTriangularMatrix(m) << endl;
	cout << "Cумма элементов верхнетреугольной части матрицы: " << sumUpperTriangularMatrix(m) << endl;
	cout << "Ближайший элемент к среднеарифметическому значению элементов матрицы: " << elementArithmeticMeanValueMatrix(m) << endl;

	_getch();
}

// минимум матрицы
float minMatrix(float (*m)[N]) {
	int i,j;
	float min = *m[0];
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++) {
			if (min > m[i][j])
				min = m[i][j];
		}
	return min;
}

// максимум матрицы
float maxMatrix(float (*m)[N]) {
	int i, j;
	float max = *m[0];
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++) {
			if (max < m[i][j])
				max = m[i][j];
		}
	return max;
}

// максимум нижнетреугольной части матрицы
float maxLowerTriangularMatrix(float (*m)[N]) {
	int i, j;
	float max = *m[0];
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++) {
			if (max < m[i][j] && i >= j)
				max = m[i][j];
		}
	return max;
}

// максимум верхнетреугольной части матрицы
float maxUpperTriangularMatrix(float (*m)[N]) {
	int i, j;
	float max = *m[0];
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++) {
			if (max < m[i][j] && i <= j)
				max = m[i][j];
		}
	return max;
}

// минимум нижнетреугольной части матрицы
float minLowerTriangularMatrix(float (*m)[N]) {
	int i, j;
	float min = *m[0];
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++) {
			if (min > m[i][j] && i >= j)
				min = m[i][j];
		}
	return min;
}

// минимум верхнетреугольной части матрицы
float minUpperTriangularMatrix(float (*m)[N]) {
	int i, j;
	float min = *m[0];
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++) {
			if (min > m[i][j] && i <= j)
				min = m[i][j];
		}
	return min;
}

// минимум главной диагонали
float minDiagonalMatrix(float (*m)[N]) {
	int i, j;
	float min = *m[0];
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++) {
			if (min > m[i][j] && i == j)
				min = m[i][j];
		}
	return min;
}

// максимум главной диагонали
float maxDiagonalMatrix(float (*m)[N]) {
	int i, j;
	float max = *m[0];
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++) {
			if (max < m[i][j] && i == j)
				max = m[i][j];
		}
	return max;
}

// минимум второстепенной диагонали
float minSecondDiagonalMatrix(float (*m)[N]) {
	int i, j;
	float min = DBL_MAX;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++) {
			if (min > m[i][j] && i + j == N - 1)
				min = m[i][j];
		}
	return min;
}

// максимум второстепенной диагонали
float maxSecondDiagonalMatrix(float (*m)[N]) {
	int i, j;
	float max = -1;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++) {
			if (max < m[i][j] && i + j == N - 1)
				max = m[i][j];
		}
	return max;
}

// среднеарифметическое значение элементов
float arithmeticMeanValueMatrix(float (*m)[N]) {
	int i, j;
	float sum = 0;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++) {
			sum += m[i][j];
		}
	return sum / (N * N);
}

// среднеарифметическое значение элементов нижнетреугольной части
float arithmeticMeanValueLowerTriangularMatrix(float (*m)[N]) {
	int i, j, count = 0;
	float sum = 0;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++) {
			if (i >= j) {
				sum += m[i][j];
				count++;
			}
		}
	return sum / count;
}

// среднеарифметическое значение элементов верхнетреугольной части
float arithmeticMeanValueUpperTriangularMatrix(float (*m)[N]) {
	int i, j, count = 0;
	float sum = 0;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++) {
			if (i <= j) {
				sum += m[i][j];
				count++;
			}
		}
	return sum / count;
}

// суммы строк
void sumRowsMatrix(float (*m)[N]) {
	int i, j;
	float sum;
	for (i = 0; i < N; i++) {
		sum = 0;
		for (j = 0; j < N; j++) {
			sum += m[i][j];
		}
		cout << "Сумма " << i + 1 << " строки: " << sum << endl;
	}
}

// суммы столбцов
void sumColumnsMatrix(float (*m)[N]) {
	int i, j;
	float sum;
	for (i = 0; i < N; i++) {
		sum = 0;
		for (j = 0; j < N; j++) {
			sum += m[j][i];
		}
		cout << "Сумма " << i + 1 << " столбца: " << sum << endl;
	}
}

// мин значение строк
void minValueRowsMatrix(float (*m)[N]) {
	int i, j;
	float min;
	for (i = 0; i < N; i++) {
		min = DBL_MAX;
		for (j = 0; j < N; j++)
			if (min > m[i][j])
				min = m[i][j];
		cout << "Минмальное значение " << i + 1 << " строки: " << min << endl;
	}
}

// мин значение столбцов
void minValueColumnsMatrix(float (*m)[N]) {
	int i, j;
	float min;
	for (i = 0; i < N; i++) {
		min = DBL_MAX;
		for (j = 0; j < N; j++)
			if (min > m[j][i])
				min = m[j][i];
		cout << "Минмальное значение " << i + 1 << " столбца: " << min << endl;
	}
}

// макс значение строк
void maxValueRowsMatrix(float (*m)[N]) {
	int i, j;
	float max;
	for (i = 0; i < N; i++) {
		max = -1;
		for (j = 0; j < N; j++)
			if (max < m[i][j])
				max = m[i][j];
		cout << "Максимальное значение " << i + 1 << " строки: " << max << endl;
	}
}

// макс значение столбцов
void maxValueColumnsMatrix(float (*m)[N]) {
	int i, j;
	float max;
	for (i = 0; i < N; i++) {
		max = -1;
		for (j = 0; j < N; j++)
			if (max < m[j][i])
				max = m[j][i];
		cout << "Максимальное значение " << i + 1 << " столбца: " << max << endl;
	}
}

// среднеарифметическое значение строк
void arithmeticMeanValueRowsMatrix(float (*m)[N]) {
	int i, j;
	float sum;
	for (i = 0; i < N; i++) {
		sum = 0;
		for (j = 0; j < N; j++)
			sum += m[i][j];
		cout << "Среднеарифметическое значение " << i + 1 << " строки: " << sum / N << endl;
	}
}

// среднеарифметическое значение столбцов
void arithmeticMeanValueColumnsMatrix(float (*m)[N]) {
	int i, j;
	float sum;
	for (i = 0; i < N; i++) {
		sum = 0;
		for (j = 0; j < N; j++)
			sum += m[j][i];
		cout << "Cреднеарифметическое значение " << i + 1 << " столбца: " << sum / N << endl;
	}
}

// сумма элементов нижнетреугольной части матрицы
float sumLowerTriangularMatrix(float (*m)[N]) {
	int i, j;
	float sum = 0;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++) {
			if (i >= j)
				sum += m[i][j];
		}
	return sum;
}

// сумма элементов верхнетреугольной части матрицы
float sumUpperTriangularMatrix(float (*m)[N]) {
	int i, j;
	float sum = 0;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++) {
			if (i <= j)
				sum += m[i][j];
		}
	return sum;
}

// ближайший элемент к среднеарифметическому значению элементов
float elementArithmeticMeanValueMatrix(float (*m)[N]) {
	int i, j;
	float element = DBL_MAX;
	float val = arithmeticMeanValueMatrix(m);
	float diff = abs(element - val);
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++) {
			if (abs(m[i][j] - val) < diff) {
				element = m[i][j];
				diff = abs(element - val);
			}
		}
	return element;
}