#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	//system("color B5");
	
	cout << "Задание 1\n";
	int answer, A, B, res;
	do {
		cout << "1 - [+]\n2 - [-]\n3 - [exit]" << endl;
		cin >> answer;
		switch (answer) {
		case 1:
			system("cls");
			cout << "First number: "; cin >> A;
			cout << "Second number: "; cin >> B;
			res = A + B;
			cout << "Answer: " << res << endl;
			break;
		case 2:
			system("cls");
			cout << "First number: "; cin >> A;
			cout << "Second number: "; cin >> B;
			res = A - B;
			cout << "Answer: " << res << endl;
			break;
		case 3:
			system("cls");
			cout << "Exit" << endl;
			break;
		}


	} while (answer != 3);
	/*Разработать программу, которая выводит на экран горизонтальную линию из символов.
		Число символов, какой использовать символ, и какая будет линия - верт.или горизонт.
		- указывает пользователь.*/


	cout << "\n\nЗадание 2\n";
	
	int line,ANS;
	cout << "1 - [|]\n2 - [_]\n3 - [exit]" << endl;
	cin >> ANS;
	char sym;
	cin >> sym;
	int i = 0;
	while (ANS != 3) {
		switch (ANS) {
		case 1:
			cin >> line;
			while (i < line) {
				cout << sym << "\n";
				i++;
			}
			break;
		case 2:
			
			cin >> line;
			while (i < line) {
				cout << sym;
				i++;
			}
			break;
		case 3:
			cout << "Exit";
			break;
		}
	}

	cout << "\n\nЧасть 2\n";
	do {
		cout << "1 - [|]\n2 - [_]\n3 - [exit]" << endl;
		cin >> ANS;
		cin >> sym;
		int i = 0;
			switch (ANS) {
			case 1:
				cin >> line;
				system("cls");
				while (i < line) {
					cout << sym << "\n";
					i++;
				}
				cout << "\n";
				break;
			case 2:
				system("cls");
				cin >> line;
				while (i < line) {
					cout << sym;
					i++;
				}
				cout << "\n";
				break;
			case 3:
				system("cls");
				cout << "Exit";
				break;
			}
		}while (ANS != 3);
		

	int SIZE; int take = 5; int count = 0; // машины возят по 5 ящиков
	cout << "\nВведите количество ящиков:\n";
	cin >> SIZE;
	/*do {
	} while (SIZE > 0);*/

	while (SIZE > 0) {
		SIZE = SIZE - take;
		++count;
	}
	cout << "\nМашин подъехало: " << count;
}
