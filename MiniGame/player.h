#pragma once
#include "includes.h"

#include "menu.cpp"
Menu menu;

class Player {
public:

	int x = 1;

	int xp = 100;
	int food = 100;

	char Model[101];

	void ModelCreate() {
		Model[0] = { ' ' };
		Model[1] = { '|' };
		for (int i = 2; i <= 100; i++)
		{
			Model[i] = {' '};
		}
	}

	void Movement() {
		if (GetAsyncKeyState(VK_ESCAPE))
		{
			menu.Render();
		}
		if (GetAsyncKeyState(VK_RIGHT)) // вправо
		{
			Model[x] = ' ';
			x++;
			if (x > 101) { x = 101; }
			Model[x] = '>';
		}
		if (GetAsyncKeyState(VK_LEFT)) // влево
		{
			Model[x] = ' ';
			x--;
			if (x < 0) { x = 0; }
			Model[x] = '<';
		}
		

	}
};
