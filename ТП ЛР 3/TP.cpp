#include <iostream>
#include <string>
#include <conio.h>

#include "Progressions.h"
#include "ArithmeticProgression.h"
#include "GeometricProgression.h"

using namespace std;

void applyCommand(Progressions* array) 
{
	int command;

	for (;;) 
	{
		system("@cls||clear");
		array->print();

		cout << "Выберите нужное действие:" << endl;
		cout << "1. Заполнение" << endl;
		cout << "2. Сумма" << endl;
		cout << "3. Выход в меню" << endl << endl;
		cout << "Команда: ";
		cin >> command;

		system("@cls||clear");

		switch (command)
		{
		case 3:
			return;

		case 1:
			array->fill();
			cout << endl << endl << "Нажмите любую клавишу для выхода в меню" << endl;
			_getch();
			break;

		case 2:
			array->print();
			cout << endl;
			int size = array->getSize();
			array->sum(size);
			cout << endl << endl << "Нажмите любую клавишу для выхода в меню" << endl;
			_getch();
			break;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");

	Progressions *classes[2] = { new ArithmeticProgression(), new GeometricProgression() };
	
	int command;

	for (;;) 
	{
		system("@cls||clear");

		cout << "Выберите нужное действие:" << endl;
		cout << "1. Арифметическая прогрессия" << endl;
		cout << "2. Геометрическая прогрессия" << endl;
		cout << "0. Завершение программы и сохранение в файл" << endl << endl;
		cout << "Команда: " ;
		cin >> command;
		
		if (command >= 1 && command <= 2)
			applyCommand(classes[command - 1]);

		if (!command)
		{
			for (int i = 0; i < 2; i++)
			{
				delete classes[i];
			}
			return 0;
		}
	}
}