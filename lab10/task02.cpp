#include "main.h"

void task02_1(int*, int);
void task02_2(int*, int);
void task02_3();
void task02_4();

void task02() {
	const int n = 100;
	int array[] = { 16, 78, 99, 6, -29, 19, -52, 65, -88, 51,
				-79, -22, 32, -25, -62, -69, -2, -59, -75, 89,
				-87, 95, -22, 85, -49, -75, 76, 73, -59, -52,
				30, 49, -28, -48, 0, 57, -6, -85, 0, -18,
				-97, -21, -95, 64, 22, -2, 69, -84, -1, -71,
				-25, 47, 72, 43, 15, -44, 44, 61, 4, 74,
				88, -61, 0, -64, -83, 97, 0, 90, 15, 8,
				-54, 19, 73, 35, -67, -87, 85, -99, -70, 10,
				98, 58, -10, -29, 95, 62, 77, 89, 36, -32,
				78, 60, -79, -18, 30, -13, -34, -92, 1, -38 };


	int p;

	do {
		cout << "Введите номер подзадания (-1 для выхода): ";
		cin >> p;

		switch (p) {
		case 1: task02_1(array, n); break;
		case 2: task02_2(array, n); break;
		case 3: task02_3(); break;
		case 4: task02_4(); break;

		case -1: cout << "Выход из подпрограммы.\n"; break;
		default: cout << "Неверный номер.\n";
		}

		cout << endl;
	} while (p != -1);
}

void task02_1(int* array, int size) {
	double avg = 0;

	for (int i = 0; i < size; i++) {
		avg += *(array + i);
	}

	avg /= size;
	cout << "average: " << avg << endl;

	return;
}

void task02_2(int* array, int size) {
	const int n = 50, m = 2;
	int matrix[n][m];
	int* px = &matrix[0][0];

	double avg = 0;

	for (int i = 0; i < size; i++) {
		*(px + i) = *(array + i);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			avg += *(*(matrix + i) + j);
		}
		cout << "i = " << i << "; avg = " << avg / m << endl;
	}

	return;
}

void task02_3() {
	const int n = 10;
	char array[n][n][n];
	char* px = &array[0][0][0];

	int m = 500, count = 0;
	char** zArray = new char*[m];

	for (int i = 0; i < (n * n * n); i++) {
		*(px + i) = char(getRandomInt(65, 90));
		cout << *(px + i) << endl;


		if (*(px + i) == 'Z') {
			zArray[count] = (px + i);
			count++;
		}
	}

	cout << endl;

	for (int i = 0; i < count; i++) {
		cout << (void*)zArray[i] << endl;
	}

	delete[] zArray;
	
	return;
}

void task02_4() {
	const int n = 100;
	char str[n];

	cin.ignore();
	cout << "Введите строку (до 100 символов): ";
	cin.getline(str, n);

	bool flag = true;
	for (int i = 0; *(str + i) != '\0'; i++) {

		if (*(str + i) != ' ' && flag) {
			flag = false;
			cout << (void*)(str + i) << endl;
		}
		else if (*(str + i) == ' ') {
			flag = true;
		}
	}

	return;
}