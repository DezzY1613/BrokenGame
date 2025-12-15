#pragma once
#include "includes.h"


class renderCl {
public:

	void createPl(char Model[], int x) {
		for (int i = 0; i <= x; i++)
		{
			cout << Model[i];
		}

	}

	void create(string LAND, string EARTH, string STONE) {

		cout << endl;


		for (int i = 0; i <= 50; i++)
		{
			cout << LAND;
		}
		cout << endl;
		for (int i = 0; i <= 50; i++)
		{
			cout << EARTH;
		}
		cout << endl;
		for (int i = 0; i <= 50; i++)
		{
			cout << STONE;
		}
		cout << endl;
		for (int i = 0; i <= 50; i++)
		{
			cout << STONE;
		}
		

	}

};