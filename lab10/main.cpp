#include "main.h"

int getRandomInt(int min, int max) {
	return min + rand() % (max - min + 1);
}

double getRandomFloat(double min, double max) {
	return min + (max - min) / RAND_MAX * rand();
}

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int p;

	do {
		cout << "Введите номер задания (-1 для выхода): ";
		cin >> p;

		switch (p) {
		case 1: task01(); break;
		case 2: task02(); break;

		case -1: cout << "Выход из программы.\n"; break;
		default: cout << "Неверный номер.\n";
		}

		cout << endl;
	} while (p != -1);

	system("pause");
	return 0;
}