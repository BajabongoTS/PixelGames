#include "text.h"
#include "Options.h"
#include <iostream>
#include <string>


using namespace std;


int main() {
	string n;

	// Title screan
	title();

	// Options
	options();

	// Input
	input();
	cin >> n;

	startGame(n);

	gotoInventory(n);




	return 0;
}


