#include "UI.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <Windows.h>
using namespace std;

HANDLE hCon;

enum Color {
	DARKBLUE = 1, DARKGREEN, DARKTEAL, DARKRED, DARKPINK, DARKYELLOW,
	GRAY, DARKGRAY, BLUE, GREEN, TEAL, RED, PINK, YELLOW, WHITE
};

void SetColor(Color c)
{
	if (hCon == NULL)
		hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon, c);
}

void UI::create_matrix()
{
	for (int i = 0; i < 11; i++)
		for (int j = 0; j < 11; j++)
			this->my_matrix(i, j) = 0;
	for (int i = 0; i < 11; i++)
		for (int j = 0; j < 11; j++)
			this->pc_matrix(i, j) = 0;
}

void UI::atack_my_matrix(int i,int j)
{
	if (i == 0 && j == 0)
	{
		if (this->my_matrix(i + 1, j + 1) == 1)this->my_matrix(i + 1, j + 1) = 3;
		else
			if (this->my_matrix(i + 1, j + 1) == 2|| this->my_matrix(i + 1, j + 1) == 0)this->my_matrix(i + 1, j + 1) = 2;
			else
				if (this->my_matrix(i + 1, j + 1) == 3)this->my_matrix(i + 1, j + 1) = 3;
	}
	else if (i == 0)
	{
		if (this->my_matrix(i + 1, j) == 1)this->my_matrix(i + 1, j) = 3;
		else
			if (this->my_matrix(i + 1, j) == 2|| this->my_matrix(i + 1, j) == 0)this->my_matrix(i + 1, j) = 2;
			else
				if (this->my_matrix(i + 1, j) == 3)this->my_matrix(i + 1, j) = 3;
	}
	else if (j == 0)
	{
		if (this->my_matrix(i, j + 1) == 1)this->my_matrix(i, j + 1) = 3;
		else
			if (this->my_matrix(i, j + 1) == 2|| this->my_matrix(i, j + 1) == 0)this->my_matrix(i, j + 1) = 2;
			else
				if (this->my_matrix(i, j + 1) == 3)this->my_matrix(i, j + 1) = 3;
	}
	else
	{
		if (this->my_matrix(i, j) == 1)this->my_matrix(i, j) = 3;
		else
			if (this->my_matrix(i, j) == 2|| this->my_matrix(i, j) == 0)this->my_matrix(i, j) = 2;
			else
				if (this->my_matrix(i, j) == 3)this->my_matrix(i, j) = 3;
	}
}

void UI::atack_pc_matrix(char* c)
{	
	if (c[0] == 'A')
	{
		if (this->pc_matrix(1, c[1] - '0') == 1)this->pc_matrix(1, c[1] - '0') = 3;
		else
			if (this->pc_matrix(1, c[1] - '0') == 2 || this->pc_matrix(1, c[1] - '0') == 0)this->pc_matrix(1, c[1] - '0') = 2;
			else
				if (this->pc_matrix(1, c[1] - '0') == 3)this->pc_matrix(1, c[1] - '0') = 3;
	}
	else 
		if (c[0] == 'B')
		{
			if (this->pc_matrix(2, c[1] - '0') == 1)this->pc_matrix(2, c[1] - '0') = 3;
			else
				if (this->pc_matrix(2, c[1] - '0') == 2 || this->pc_matrix(2, c[1] - '0') == 0)this->pc_matrix(2, c[1] - '0') = 2;
				else
					if (this->pc_matrix(2, c[1] - '0') == 3)this->pc_matrix(2, c[1] - '0') = 3;
		}
		else if (c[0] == 'C')
		{
			if (this->pc_matrix(3, c[1] - '0') == 1)this->pc_matrix(3, c[1] - '0') = 3;
			else
				if (this->pc_matrix(3, c[1] - '0') == 2 || this->pc_matrix(3, c[1] - '0') == 0)this->pc_matrix(3, c[1] - '0') = 2;
				else
					if (this->pc_matrix(3, c[1] - '0') == 3)this->pc_matrix(3, c[1] - '0') = 3;
		}
		else if (c[0] == 'D')
		{
			if (this->pc_matrix(4, c[1] - '0') == 1)this->pc_matrix(4, c[1] - '0') = 3;
			else
				if (this->pc_matrix(4, c[1] - '0') == 2|| this->pc_matrix(4, c[1] - '0') == 0)this->pc_matrix(4, c[1] - '0') = 2;
				else
					if (this->pc_matrix(4, c[1] - '0') == 3)this->pc_matrix(4, c[1] - '0') = 3;
		}
		else if (c[0] == 'E')
		{
			if (this->pc_matrix(5, c[1] - '0') == 1)this->pc_matrix(5, c[1] - '0') = 3;
			else
				if (this->pc_matrix(5, c[1] - '0') == 2|| this->pc_matrix(5, c[1] - '0') == 0)this->pc_matrix(5, c[1] - '0') = 2;
				else
					if (this->pc_matrix(5, c[1] - '0') == 3)this->pc_matrix(5, c[1] - '0') = 3;
		}
		else if (c[0] == 'F')
		{
			if (this->pc_matrix(6, c[1] - '0') == 1)this->pc_matrix(6, c[1] - '0') = 3;
			else
				if (this->pc_matrix(6, c[1] - '0') == 2|| this->pc_matrix(6, c[1] - '0') == 0)this->pc_matrix(6, c[1] - '0') = 2;
				else
					if (this->pc_matrix(6, c[1] - '0') == 3)this->pc_matrix(6, c[1] - '0') = 3;
		}
		else if (c[0] == 'G')
		{
			if (this->pc_matrix(7, c[1] - '0') == 1)this->pc_matrix(7, c[1] - '0') = 3;
			else
				if (this->pc_matrix(7, c[1] - '0') == 2|| this->pc_matrix(7, c[1] - '0') == 0)this->pc_matrix(7, c[1] - '0') = 2;
				else
					if (this->pc_matrix(7, c[1] - '0') == 3)this->pc_matrix(7, c[1] - '0') = 3;
		}
		else if (c[0] == 'H')
		{
			if (this->pc_matrix(8, c[1] - '0') == 1)this->pc_matrix(8, c[1] - '0') = 3;
			else
				if (this->pc_matrix(8, c[1] - '0') == 2|| this->pc_matrix(8, c[1] - '0') == 0)this->pc_matrix(8, c[1] - '0') = 2;
				else
					if (this->pc_matrix(8, c[1] - '0') == 3)this->pc_matrix(8, c[1] - '0') = 3;
		}
		else if (c[0] == 'I')
		{
			if (this->pc_matrix(9, c[1] - '0') == 1)this->pc_matrix(9, c[1] - '0') = 3;
			else
				if (this->pc_matrix(9, c[1] - '0') == 2|| this->pc_matrix(9, c[1] - '0') == 0)this->pc_matrix(9, c[1] - '0') = 2;
				else
					if (this->pc_matrix(9, c[1] - '0') == 3)this->pc_matrix(9, c[1] - '0') = 3;
		}
		else if (c[0] == 'J')
		{
			if (this->pc_matrix(10, c[1] - '0') == 1)this->pc_matrix(10, c[1] - '0') = 3;
			else
				if (this->pc_matrix(10, c[1] - '0') == 2|| this->pc_matrix(10, c[1] - '0') == 0)this->pc_matrix(10, c[1] - '0') = 2;
				else
					if (this->pc_matrix(10, c[1] - '0') == 3)this->pc_matrix(10, c[1] - '0') = 3;
		}
}

void UI::add_ships_my_matrix(char* c,char* type)
{
	if (c[0] == 'A' && strcmp(type, "RAZBOI") == 0) this->my_matrix(1, c[1] - '0') = 1, this->my_matrix(2, c[1] - '0') = 1, this->my_matrix(3, c[1] - '0') = 1, this->my_matrix(4, c[1] - '0') = 1, this->my_matrix(5, c[1] - '0') = 1;
	else if (c[0] == 'A' && strcmp(type, "YACHT") == 0) this->my_matrix(1, c[1] - '0') = 1, this->my_matrix(2, c[1] - '0') = 1, this->my_matrix(3, c[1] - '0') = 1;
	else if (c[0] == 'A' && strcmp(type, "SUBMARINE") == 0) this->my_matrix(1, c[1] - '0') = 1, this->my_matrix(2, c[1] - '0') = 1;
	
	if (c[0] == 'B' && strcmp(type, "RAZBOI") == 0) this->my_matrix(2, c[1] - '0') = 1, this->my_matrix(3, c[1] - '0') = 1, this->my_matrix(4, c[1] - '0') = 1, this->my_matrix(5, c[1] - '0') = 1, this->my_matrix(6, c[1] - '0') = 1;
	else if (c[0] == 'B' && strcmp(type, "YACHT") == 0) this->my_matrix(2, c[1] - '0') = 1, this->my_matrix(3, c[1] - '0') = 1, this->my_matrix(4, c[1] - '0') = 1;
	else if (c[0] == 'B' && strcmp(type, "SUBMARINE") == 0) this->my_matrix(2, c[1] - '0') = 1, this->my_matrix(3, c[1] - '0') = 1;

	if (c[0] == 'C' && strcmp(type, "RAZBOI") == 0) this->my_matrix(3, c[1] - '0') = 1, this->my_matrix(4, c[1] - '0') = 1, this->my_matrix(5, c[1] - '0') = 1, this->my_matrix(6, c[1] - '0') = 1, this->my_matrix(7, c[1] - '0') = 1;
	else if (c[0] == 'C' && strcmp(type, "YACHT") == 0) this->my_matrix(3, c[1] - '0') = 1, this->my_matrix(4, c[1] - '0') = 1, this->my_matrix(5, c[1] - '0') = 1;
	else if (c[0] == 'C' && strcmp(type, "SUBMARINE") == 0) this->my_matrix(3, c[1] - '0') = 1, this->my_matrix(4, c[1] - '0') = 1;

	if (c[0] == 'D' && strcmp(type, "RAZBOI") == 0) this->my_matrix(4, c[1] - '0') = 1, this->my_matrix(5, c[1] - '0') = 1, this->my_matrix(6, c[1] - '0') = 1, this->my_matrix(7, c[1] - '0') = 1, this->my_matrix(8, c[1] - '0') = 1;
	else if (c[0] == 'D' && strcmp(type, "YACHT") == 0) this->my_matrix(4, c[1] - '0') = 1, this->my_matrix(5, c[1] - '0') = 1, this->my_matrix(6, c[1] - '0') = 1;
	else if (c[0] == 'D' && strcmp(type, "SUBMARINE") == 0) this->my_matrix(4, c[1] - '0') = 1, this->my_matrix(5, c[1] - '0') = 1;

	if (c[0] == 'E' && strcmp(type, "RAZBOI") == 0) this->my_matrix(5, c[1] - '0') = 1, this->my_matrix(6, c[1] - '0') = 1, this->my_matrix(7, c[1] - '0') = 1, this->my_matrix(8, c[1] - '0') = 1, this->my_matrix(9, c[1] - '0') = 1;
	else if (c[0] == 'E' && strcmp(type, "YACHT") == 0) this->my_matrix(5, c[1] - '0') = 1, this->my_matrix(6, c[1] - '0') = 1, this->my_matrix(7, c[1] - '0') = 1;
	else if (c[0] == 'E' && strcmp(type, "SUBMARINE") == 0) this->my_matrix(5, c[1] - '0') = 1, this->my_matrix(6, c[1] - '0') = 1;

	if (c[0] == 'F' && strcmp(type, "RAZBOI") == 0) this->my_matrix(6, c[1] - '0') = 1, this->my_matrix(7, c[1] - '0') = 1, this->my_matrix(8, c[1] - '0') = 1, this->my_matrix(9, c[1] - '0') = 1, this->my_matrix(10, c[1] - '0') = 1;
	else if (c[0] == 'F' && strcmp(type, "YACHT") == 0) this->my_matrix(6, c[1] - '0') = 1, this->my_matrix(7, c[1] - '0') = 1, this->my_matrix(8, c[1] - '0') = 1;
	else if (c[0] == 'F' && strcmp(type, "SUBMARINE") == 0) this->my_matrix(6, c[1] - '0') = 1, this->my_matrix(7, c[1] - '0') = 1;

	if (c[0] == 'G' && strcmp(type, "RAZBOI") == 0) cout << "Nu se paote\n";
	else if (c[0] == 'G' && strcmp(type, "YACHT") == 0) this->my_matrix(7, c[1] - '0') = 1, this->my_matrix(8, c[1] - '0') = 1, this->my_matrix(9, c[1] - '0') = 1;
	else if (c[0] == 'G' && strcmp(type, "SUBMARINE") == 0) this->my_matrix(7, c[1] - '0') = 1, this->my_matrix(8, c[1] - '0') = 1;

	if (c[0] == 'H' && strcmp(type, "RAZBOI") == 0) cout << "Nu se paote\n";
	else if (c[0] == 'H' && strcmp(type, "YACHT") == 0) this->my_matrix(8, c[1] - '0') = 1, this->my_matrix(9, c[1] - '0') = 1, this->my_matrix(10, c[1] - '0') = 1;
	else if (c[0] == 'H' && strcmp(type, "SUBMARINE") == 0) this->my_matrix(8, c[1] - '0') = 1, this->my_matrix(9, c[1] - '0') = 1;

	if (c[0] == 'I' && strcmp(type, "RAZBOI") == 0) cout << "Nu se paote\n";
	else if (c[0] == 'I' && strcmp(type, "YACHT") == 0) cout << "Nu se paote\n";
	else if (c[0] == 'I' && strcmp(type, "SUBMARINE") == 0) this->my_matrix(9, c[1] - '0') = 1, this->my_matrix(10, c[1] - '0') = 1;

	if (c[0] == 'J' && strcmp(type, "RAZBOI") == 0) cout << "Nu se poate\n";
	else if (c[0] == 'J' && strcmp(type, "YACHT") == 0) cout << "Nu se poate\n";
	else if (c[0] == 'J' && strcmp(type, "SUBMARINE") == 0) cout << "Nu se poate\n";
}

void UI::add_ships_pc_matrix()
{
	int i, j, k, l, m, n, o, p;
	srand(time(NULL));
	do {
		i = rand() % 10;
		j = rand() % 10;
	} while (i == 0 || j == 0 || i > 6);
	this->pc_matrix(i, j) = 1, this->pc_matrix(i + 1, j) = 1, this->pc_matrix(i + 2, j) = 1, this->pc_matrix(i + 3, j) = 1, this->pc_matrix(i + 4, j) = 1;

	do {
		k = rand() % 10;
		l = rand() % 10;
	} while (k == 0 || l == 0 || k > 8 || this->pc_matrix(k, l) == 1);
	this->pc_matrix(k, l) = 1, this->pc_matrix(k + 1, l) = 1, this->pc_matrix(k + 2, l) = 1;

	do {
		m = rand() % 10;
		n = rand() % 10;
	} while (m == 0 || n == 0 || m > 9 || this->pc_matrix(m, n) == 1);
	this->pc_matrix(m, n) = 1, this->pc_matrix(m + 1, n) = 1;

	do {
		o = rand() % 10;
		p = rand() % 10;
	} while (o == 0 || p == 0 || k > 8 || this->pc_matrix(o ,p) == 1);
	this->pc_matrix(o, p) = 1, this->pc_matrix(o + 1, p) = 1;
}

int UI::verify_my_matrix()
{
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (this->my_matrix(i, j) == 1)
				return 0;
		}
	}
		return 1;
}

int UI::verify_pc_matrix()
{
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (this->pc_matrix(i, j) == 1)
				return 0;
		}
	}
	return 1;
}

void UI::show()
{
	for (int i = 0; i < 11; i++)
	{
		cout << '\t' << '\t' << '\t';
		for (int j = 0; j < 11; j++)
		{
			if (i == 0 && j == 0) cout << " " << " ";
			else if (j == 0 && i == 1)cout << "A" << " ";
			else if (j == 0 && i == 2)cout << "B" << " ";
			else if (j == 0 && i == 3)cout << "C" << " ";
			else if (j == 0 && i == 4)cout << "D" << " ";
			else if (j == 0 && i == 5)cout << "E" << " ";
			else if (j == 0 && i == 6)cout << "F" << " ";
			else if (j == 0 && i == 7)cout << "G" << " ";
			else if (j == 0 && i == 8)cout << "H" << " ";
			else if (j == 0 && i == 9)cout << "I" << " ";
			else if (j == 0 && i == 10)cout << "J" << " ";
			else if (i == 0)cout << j << " ";
			else if (this->my_matrix(i, j) == 0) cout << char(248) << " ";
			else if (this->my_matrix(i, j) == 1)cout << char(219) << " ";
			else if (this->my_matrix(i, j) == 2)SetColor(GREEN), cout << char(254) << " ", SetColor(GRAY);
			else if (this->my_matrix(i, j) == 3)SetColor(RED), cout << char(254) << " ", SetColor(GRAY);
		}
		cout << '\t' << '\t' << '\t';
		for (int j = 0; j < 11; j++)
		{
			if (i == 0 && j == 0) cout << " " << " ";
			else if (j == 0 && i == 1)cout << "A" << " ";
			else if (j == 0 && i == 2)cout << "B" << " ";
			else if (j == 0 && i == 3)cout << "C" << " ";
			else if (j == 0 && i == 4)cout << "D" << " ";
			else if (j == 0 && i == 5)cout << "E" << " ";
			else if (j == 0 && i == 6)cout << "F" << " ";
			else if (j == 0 && i == 7)cout << "G" << " ";
			else if (j == 0 && i == 8)cout << "H" << " ";
			else if (j == 0 && i == 9)cout << "I" << " ";
			else if (j == 0 && i == 10)cout << "J" << " ";
			else if (i == 0)cout << j << " ";
			else if (this->pc_matrix(i, j) == 0) cout << char(248) << " ";
			else if (this->pc_matrix(i, j) == 1)cout << char(248) << " ";
			else if (this->pc_matrix(i, j) == 2)SetColor(GREEN), cout << char(254) << " ", SetColor(GRAY);
			else if (this->pc_matrix(i, j) == 3)SetColor(RED), cout << char(254) << " ", SetColor(GRAY);
		}
		cout << endl;
	}
}

void UI::display()
{
	cout << '\n';
	cout << "    _______       _____       ________   ________   __       ______      ______   __    __   __   ______   ______       \n";
	cout << "   |   _   " << char(92) << "     /  _  "<<char(92)<<"     |___  ___| |___  ___| |  |     |  ____|    |   ___| |  |  |  | |  | |   _  | |   ___|      \n";
	cout << "   |  |_|  /    /  / " << char(92) << "  " << char(92) << "       |  |       |  |    |  |     |  |___     |  |___  |  |__|  | |  | |  |_| | |  |___   \n";
	cout << "   |   _  <    /  /___" << char(92) << "  " << char(92) << "      |  |       |  |    |  |     |  ____|    |___   | |   __   | |  | |   ___| |___   |  \n";
	cout << "   |  |_|  " << char(92) << "  /  _______  " << char(92) << "     |  |       |  |    |  |___  |  |___      ___|  | |  |  |  | |  | |  |      ___|  |  \n";
	cout << "   |_______/ /__/       " << char(92) << "__" << char(92) << "    |__|       |__|    |______| |______|    |______| |__|  |__| |__| |__|     |______|  \n";
	cout << "*********************************************************************************************************************\n";
	cout << "\n\n";
}

UI::UI()
{

}

UI::UI(Matrix& my_matrix, Matrix& pc_matrix)
{
	this->my_matrix = my_matrix;
	this->pc_matrix = pc_matrix;
}

UI::~UI()
{
}

void UI::run()
{
	system("cls");
	string option;
	display();
	cout << "Start new game (YES/NO): ", cin >> option;
	if (option == "YES")
	{
		system("cls");
		string name;
		display();
		cout << "NAME: ", cin >> name;
		this->create_matrix();
		system("cls");
		int nr = 0;
		char c[256];
		char type[256];
		while (nr != 4)
		{
			system("cls");
			display();
			show();
			cout << "Add ships\n";
			cout << "Position (e.g. B3): ", cin >> c;
			cout << "Type (e.g. YACHT): ", cin >> type;
			this->add_ships_my_matrix(c, type);
			nr++;
		}
		this->add_ships_pc_matrix();
		system("cls");
		display();
		show();
		cout << "ATTACK!\n";
		while (verify_my_matrix() == 0 && verify_pc_matrix() == 0)
		{
			char c[256];
			cout << "Position (e.g. B3): ", cin >> c;
			atack_pc_matrix(c);
			atack_my_matrix(rand() % 10, rand() % 10);
			system("cls");
			display();
			show();
		}
		system("cls");
		display();
		if (verify_my_matrix() == 1)
			cout << "WINNER PC\n";
		else
			cout << "WINNER " << name << '\n';
	}
	else
	{
		display();
		cout << "END GAME";
	}
	
}

int main()
{
	UI ui;
	ui.run();
}