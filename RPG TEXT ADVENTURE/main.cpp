#include <iostream>
#include <iomanip>
#include "Classes_or_Stats.h"
#include "Verifiers.h"

int main()
{
    using std::cout;
    using std::endl;
    using std::cin;
    int armor,weapons;
    STAT x;
    cout << "Welcome to the greatest RPG ever created" << endl;
    cout << "Please enter in your stats adding up to a total of 32" << endl;
    cout << "Strength? " << endl;
    cin >> x.strength;
    x.totalLeft-=x.strength;
    cout <<"\nRemaining total is " << x.totalLeft << "\nDexterity? " << endl;
    cin >> x.dexterity;
    x.totalLeft-=x.dexterity;
    cout <<"\nRemaining total is " << x.totalLeft << "\nIntelligence? " << endl;
    cin >> x.intelligence;
    x.totalLeft-=x.intelligence;
    cout <<"\nRemaining total is " << x.totalLeft << "\nCharisma? " << endl;
    cin >> x.charisma;
    x.totalLeft-=x.charisma;
    cout <<"\nRemaining total is " << x.totalLeft << "\nConstitution? " << endl;
    cin >> x.constitution;
    x.totalLeft-=x.constitution;
    cout <<"\nRemaining total is " << x.totalLeft << "\nWisdom? " << endl;
    cin >> x.wisdom;


    x.total = (x.strength + x.charisma + x.wisdom + x.constitution + x.dexterity + x.intelligence);
    while (x.total> 32){
    x.totalLeft = 32;
    cout << "Please enter in your stats adding up to a total of 32 again" << endl;
    cout << "Strength? " << endl;
    cin >> x.strength;
    x.totalLeft-=x.strength;
    cout <<"\nRemaining total is " << x.totalLeft << "\nDexterity? " << endl;
    cin >> x.dexterity;
    x.totalLeft-=x.dexterity;
    cout <<"\nRemaining total is " << x.totalLeft << "\nIntelligence? " << endl;
    cin >> x.intelligence;
    x.totalLeft-=x.intelligence;
    cout <<"\nRemaining total is " << x.totalLeft << "\nCharisma? " << endl;
    cin >> x.charisma;
    x.totalLeft-=x.charisma;
    cout <<"\nRemaining total is " << x.totalLeft << "\nConstitution? " << endl;
    cin >> x.constitution;
    x.totalLeft-=x.constitution;
    cout <<"\nRemaining total is " << x.totalLeft << "\nWisdom? " << endl;
    cin >> x.wisdom;
    }
    switch (verifyInput(0,10))
    {
    case 1: //Wizard
        weapons = 4;
        armor = 4;
    case 2: //WarLord
        weapons = 14;
        armor = 6;
    case 3: //Paladin
        weapons = 10;
        armor = 10;
    case 4: //fighter
        weapons = 12;
        armor = 8;
    case 5: //rogue
        weapons = 8;
        armor = 7;
    case 6: //bard
        weapons = 7;
        armor = 10;
    case 7: //Barbarian
        weapons = 15;
        armor = 5;
    case 8:
    }

    x.healthPoints = (x.constitution * 5);
    x.manaPoints = (x.wisdom * 5);
    x.gold = (x.charisma * 10);
    x.barter = (x.charisma * 3);
    x.thieving = (x.dexterity * 3);


    cout <<"\n Welcome to the world of Durkheart\nYou will become an adventurer in this world and will\nbe put through trials that may kill you\nthere is no saving in this game\nyour life will be your only one\ngood luck\n\n\n\n";


    return 0;
}
