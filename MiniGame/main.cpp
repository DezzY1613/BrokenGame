#include "includes.h"
#include "render.h"
#include "textures.h"
#include "player.h"

Textures tx;
Player pl;

renderCl render;


int main() {
	setlocale(LC_ALL, "Ru");

	menu.Render();


	pl.ModelCreate();

	
	while (true) {
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		render.createPl(pl.Model, pl.x);
		render.create(tx.LAND, tx.EARTH, tx.STONE);
		pl.Movement();
		Sleep(100);
		system("cls");
	}

	

	return -0;
}