#include "Options.h"
#include "text.h"
#include <iostream>

using namespace std;


// Game

void startGame(string& n) {
    if (n == "Play") {
        gameLoop(n);
        if (n == "Quit") {
            exitMessage();
        }
    }
}

// Inventory

void gotoInventory(string& n) {
    if (n == "Inventory") {
        // Wiew inventory
        viewArmor();

        Options_of_Wepons_or_PasiweItem();

        choseOption(n);

        goback(n);

        gameLoop(n);
        if (n == "Quit") {
            exitMessage();
        }
    }
}


void choseOption(string& n) {
    for (int i = 0; i < 3; ++i) cout << endl;

    bool validOption = false;
    while (!validOption) {
        cout << "Choose an option (Wepons / PasiweItems): ";
        cin >> n;

        if (n == "Wepons") {
            AsciiWeapons::viewWeapon(AsciiWeapons::sword);
            validOption = true;
        }
        else if (n == "PasiweItems") {
            AsciiWeapons::viewPasiweItem(AsciiWeapons::shields);
            validOption = true;
        }
        else {
            cout << "Option not found. Try again." << endl;
        }
    }
}


// Dla obu 

void goback(string& n) {
    while (n != "back") {
        cout << "######################" << endl;
        cout << "Do you want do come back: ";
        cin >> n;

        if (n == "back") {
            choseOption(n);
        }

        else if (n == "no") {
            break;
        }

    }
}

void gameLoop(string& n) {
    while (n != "Quit") {
        cout << "###########################" << endl;
        cout << "Enter if you want to Quit: " << ends;
        cin >> n;
    }
}

void exitMessage() {
    cout << "##################" << endl;
    cout << "Bye!!!!" << endl;
    cout << "##################" << endl;
}
