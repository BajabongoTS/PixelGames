#pragma once
#include <vector>
#include <string>

extern std::string items;
extern std::string pasiws;


void title();

void options();

void input();

// Inventory

void viewArmor();

void Options_of_Wepons_or_PasiweItem();

void showItemsAndPasiws();

namespace AsciiWeapons {
    extern std::vector<std::string> sword;
    extern std::vector<std::string> shields;

    void viewWeapon(const std::vector<std::string>& weapon);
    void viewPasiweItem(const std::vector<std::string>& pasiws);
}

