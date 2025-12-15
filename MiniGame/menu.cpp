#include "includes.h"

class Menu {
public: //					0								 1					  2								  3					   4						  5
	const string buttons[6]{"Новая Игра", "\x1b[38;2;150;0;0mНовая Игра\x1b[0m", "Управление", "\x1b[38;2;150;0;0mУправление\x1b[0m", "Выход", "\x1b[38;2;150;0;0mВыход\x1b[0m", };

	int y = 2; // по умолачанию на кнопке новая игра

	bool play = false;

	void Render() {
		system("cls");

		while (!play) {

			if (y == 2)
			{
				cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t"; // отступы
				cout << "\x1b[38;2;0;153;153mMiniGame\x1b[0m";
				cout << "\n\n\n\n\t\t\t\t\t\t       " << buttons[1] << endl << endl;
				cout << "\t\t\t\t\t\t       " << buttons[2] << endl << endl;
				cout << "\t\t\t\t\t\t         " << buttons[4] << endl << endl;
				cout << "\n\n\n\n\n\n\n\n\nУправление на стрелки и пробел\t\t\t\t\t\t\t\t\t\t\tby Dezz";
			}
			if (y == 1)
			{
				cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t"; // отступы
				cout << "\x1b[38;2;0;153;153mMiniGame\x1b[0m";
				cout << "\n\n\n\n\t\t\t\t\t\t       " << buttons[0] << endl << endl;
				cout << "\t\t\t\t\t\t       " << buttons[3] << endl << endl;
				cout << "\t\t\t\t\t\t         " << buttons[4] << endl << endl;
				cout << "\n\n\n\n\n\n\n\n\nУправление на стрелки и пробел\t\t\t\t\t\t\t\t\t\t\tby Dezz";
			}if (y == 0)
			{
				cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t"; // отступы
				cout << "\x1b[38;2;0;153;153mMiniGame\x1b[0m";
				cout << "\n\n\n\n\t\t\t\t\t\t       " << buttons[0] << endl << endl;
				cout << "\t\t\t\t\t\t       " << buttons[2] << endl << endl;
				cout << "\t\t\t\t\t\t         " << buttons[5] << endl << endl;
				cout << "\n\n\n\n\n\n\n\n\nУправление на стрелки и пробел\t\t\t\t\t\t\t\t\t\t\tby Dezz";
			}


			if (GetAsyncKeyState(VK_DOWN) && y != 0)
			{
				y--;
			}
			if (GetAsyncKeyState(VK_UP) && y != 2)
			{
				y++;
			}
			if (GetAsyncKeyState(VK_SPACE)) {
				
				switch (y) {
				case 2:
					play = true;
					break;
				case 1:
					system("cls");
					cout << "Управление на стрелки ( <- и -> ). На esc выходит главное меню..." << endl;
					system("pause");
					break;
				case 0:
					exit(-0);
					break;
				}
			}

			Sleep(100);
			system("cls");
		}

		play = false;
	}

};