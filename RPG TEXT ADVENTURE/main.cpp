#include <iostream>
#include <array>
#include <memory>
#include <new>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <cassert>
#include <fstream>
#include <ctime>
#include <cstdlib>

using std::cin;
using std::cout;
using std::setw;
using std::setfill;
using std::endl;
using std::string;

#include "Classes_or_Stats.h"
#include "Verifiers.h"
#include "Menus.h"
#include "BattleSystem.h"
#include "HPBar.h"

int main()
{
    srand(time(0));
    int armor,weapons, magicAbility,buffAbility,healAbility, rangeAbility; // DECLARING LOCAL VARIABLES
    unsigned int d20,d12,d8,d6;
    bool successOrFail, moveOn;
    Mainmenu();
    switch (verifyInput(0,10)) // ADDS UP TO 30
    {
    case 1: //Wizard
        weapons = 4;
        armor = 3;
        magicAbility = 17;
        buffAbility = 6;
        healAbility = 0;
        rangeAbility = 0;
        break;
    case 2: //Warlord
        weapons = 20;
        armor = 8;
        magicAbility = 0;
        buffAbility = 2;
        healAbility = 0;
        rangeAbility = 0;
        break;
    case 3: //Paladin
        weapons = 5;
        armor = 8;
        magicAbility = 2;
        buffAbility = 5;
        healAbility = 10;
        rangeAbility = 0;
        break;
    case 4: //fighter
        weapons = 10;
        armor = 10;
        magicAbility = 0;
        buffAbility = 0;
        healAbility = 0;
        rangeAbility = 10;
        break;
    case 5: //rogue
        weapons = 9;
        armor = 5;
        magicAbility = 0;
        buffAbility = 2;
        healAbility = 0;
        rangeAbility = 14;
        break;
    case 6: //bard
        weapons = 5;
        armor = 8;
        magicAbility = 4;
        buffAbility = 8;
        healAbility = 5;
        rangeAbility = 0;
        break;
    case 7: //Barbarian
        weapons = 23;
        armor = 3;
        magicAbility = 0;
        buffAbility = 4;
        healAbility = 0;
        rangeAbility = 0;
        break;
    case 8: //Ranger
        weapons = 10;
        armor = 5;
        magicAbility = 3;
        buffAbility = 2;
        healAbility = 0;
        rangeAbility = 10;
        break;
    case 9: //Blade Dancer
        weapons = 5;
        armor = 5;
        magicAbility = 5;
        buffAbility = 5;
        healAbility = 5;
        rangeAbility = 5;
        break;
    };

    STAT x;

    StatsMenu();

    cout << "Please enter in your stats adding up to a total of 32" << endl;
    cout << "Strength? " << endl;
    x.strength = verifyInput(-1,x.totalLeft+1);
    x.totalLeft-=x.strength;
    cout <<"\nRemaining total is " << x.totalLeft << "\nDexterity? " << endl;
    x.dexterity = verifyInput(-1,x.totalLeft+1);
    x.totalLeft-=x.dexterity;
    cout <<"\nRemaining total is " << x.totalLeft << "\nIntelligence? " << endl;
    x.intelligence = verifyInput(-1,x.totalLeft+1);
    x.totalLeft-=x.intelligence;
    cout <<"\nRemaining total is " << x.totalLeft << "\nCharisma? " << endl;
    x.charisma = verifyInput(-1,x.totalLeft+1);
    x.totalLeft-=x.charisma;
    cout <<"\nRemaining total is " << x.totalLeft << "\nConstitution? " << endl;
    x.constitution = verifyInput(-1,x.totalLeft+1);
    x.totalLeft-=x.constitution;
    cout <<"\nRemaining total is " << x.totalLeft << "\nWisdom? " << endl;
    x.wisdom = verifyInput(-1,x.totalLeft+1);


    x.total = (x.strength + x.charisma + x.wisdom + x.constitution + x.dexterity + x.intelligence);
    while (x.total> 32){
    x.totalLeft = 32;
    cout << "Please enter in your stats adding up to a total of 32 again:" << endl;
    cout << "Strength? " << endl;
    x.strength = verifyInput(-1,x.totalLeft+1);
    x.totalLeft-=x.strength;
    cout <<"\nRemaining total is " << x.totalLeft << "\nDexterity? " << endl;
    x.dexterity = verifyInput(-1,x.totalLeft+1);
    x.totalLeft-=x.dexterity;
    cout <<"\nRemaining total is " << x.totalLeft << "\nIntelligence? " << endl;
    x.intelligence = verifyInput(-1,x.totalLeft+1);
    x.totalLeft-=x.intelligence;
    cout <<"\nRemaining total is " << x.totalLeft << "\nCharisma? " << endl;
    x.charisma = verifyInput(-1,x.totalLeft+1);
    x.totalLeft-=x.charisma;
    cout <<"\nRemaining total is " << x.totalLeft << "\nConstitution? " << endl;
    x.constitution = verifyInput(-1,x.totalLeft+1);
    x.totalLeft-=x.constitution;
    cout <<"\nRemaining total is " << x.totalLeft << "\nWisdom? " << endl;
    x.wisdom = verifyInput(-1,x.totalLeft+1);
    }


    x.healthPoints = (x.constitution * 5) + 10;
    x.manaPoints = (x.intelligence * 5) + (magicAbility * 5);
    x.maxHealth = x.healthPoints;
    x.maxMana = x.manaPoints;
    x.barter = (x.charisma /3) + 2;
    x.thieving = (x.dexterity / 3) + 2;
    x.armorClass = ((armor/4) + 10 + (x.dexterity/4));
    x.weaponSpec = (weapons/3);
    x.attack = ((rangeAbility + magicAbility)/3) + x.weaponSpec;
    x.buff = buffAbility/4;
    x.chance = x.dexterity/4;
    x.healing = healAbility/4;
    x.magic = (x.wisdom/3);
    x.plusAttack = (x.strength/3);
    x.persuasion = (x.charisma/3);
    x.weaponType = (weapons/2);

    x.gold = (x.charisma * 10) + 65;
    Difficulty();
    switch (verifyInput(0,5))
    {
    case 1://Easy
        x.gold = (x.gold * 2);
        break;
    case 2://normal
        x.gold = x.gold;
        break;
    case 3://hard
        x.gold = (x.gold/2);
        break;
    case 4://EXTREME
        x.gold = (x.gold/4);
        break;
    }
    STAT opponent;
    CastleImage();
    cout << "A long time ago, in the year of the hawk, in the world of Ezrulie (ezz-rule-ee) the great war reigned on throughout the ages between the dragon kings and the inhabitants of Ezrulie. During this war, in the town of Daggerfall, there lived an individual which would save us all.....\n";
    system("Pause");

    LevelOne(); //THE OLD MANS HOUSE
    switch (verifyInput(0,4))
    {
    case 1: //Knock
        Knock(x);
        switch(verifyInput(0,4))
        {
        case 1: // Explaination
            cout <<"\nYou try to explain to him that you are a servant of the guild and that you are trying to look for the dragons. he is hesitant at first but gradually reveals the location of the dragon sighting and after he tell you this, he sticks out his hand gesturing that he would like some gold. You reluctantly give him 25 gold and leave for the inn\n";
            x.gold -=25;
            system("pause");
            successOrFail = 1;
            break;
        case 2: // im your child!
            d20 = (rand() % 20)+1;
            d20 += x.persuasion;
            if ( d20 > 10)
            {
                cout << "\nSuccess\n" << endl;
                successOrFail = 1;
                system("pause");
                cout <<"\nYou are able to trick him into thinking that you are his child and then you ask him about the dragon sighting for 'scientific' purposes and he tells you that they were sighted at. you bid him farewell but he stops you before leaving and gives you a health potion and 10 gold. You thank him and leave him to go to the inn that is in town to get some well needed sleep\n";
                x.HPots++;
                x.gold +=10;
                system("pause");
            }
            else
            {
                cout << "\nFail\n" << endl;
                successOrFail = 0;
                system("pause");
                cout <<"\nTurns out, he does not have a child so he tells you to get the hell out and you head for the inn. maybe he will be more willing in the morning....\n";
                system("pause");
            }
            break;
        case 3:// go to sleep
            d20 = (rand() % 20)+1;
            d20 += x.magic;
            if ( d20 > 10)
            {
                cout << "\nSuccess" << endl;
                successOrFail = 1;
                cout << "\nYou successfully put him to sleep and start searching his home. you find 20 gold that you humbly take for yourself as well as notes about the dragon sighting and where they are at. Eureka\n";
                x.gold +=20;
                system("pause");
                break;
            }
            else
            {
                cout << "\nFail" << endl;
                successOrFail = 0;
                cout << "\nHe knows you tried to use magic against him so he uses a little magic of his out and shoves you out of his home with a gust of wind. you head you head to the inn, maybe he will be more talkative in the morning\n";
                system("pause");
            }
            break;
        }
        break;

    case 2: //break in
        Break_In(x);
        switch(verifyInput(0,3))
        {
        case 1:
            cout << "\nYou attempt to steal everything you can find\n";
            d20 = (rand() % 20)+1;
            d20 += x.thieving;
            if ( d20 > 19)
            {
                cout << "\nYou are able to steal 500 gold and the location of the dragon sightings\n" << endl;
                x.gold += 500;
                successOrFail = 1;
                system("pause");
                break;
            }
            else if(d20 >15)
            {
                cout << "\nYou are able to steal 300 gold and the location of the dragon sightings\n" << endl;
                x.gold += 300;
                successOrFail = 1;
                system("pause");
                break;
            }
            else if(d20 > 10)
            {
                cout <<"\nYou are able to steal 25 gold and the location of the dragon sightings\n" << endl;
                x.gold += 25;
                successOrFail = 1;
                system("pause");
                break;
            }
            else
            {
                cout << "\nYou are WAY TOO LOUD and wake up the resident";
                cout << "\nHe rushes at you and forces you out of his house through the use of a gust of wind. You are flung backwards and hit the opposite brick wall across the street\n";
                d6 = (rand() % 6) + 1;
                x.healthPoints-=d6;
                cout << "\nYou take " << d6 << " health Damage.\n";
                successOrFail = 0;
                system("pause");
            }
        case 2://wake up the resident
            {
                cout <<"\nyou wake up the resident and tell him why you are here. You apologize for breaking into his house and he acccepts your apology and gladly tells you where the dragon sighting came from and the location of them.\n";
                successOrFail = 1;
            }
            break;
        if (successOrFail = 0)
        {
            d8 = (rand() % 8)+1;
            d20 = (rand() % 20)+1;
            if ( x.armorClass > d20)
            {
                cout << "\nin response to a stranger in his house, he tries to hit you with his staff but fails and hits you very lightly in the shin. He is clearly a pretty weak person so you politely just ask him to stop and you explain the situation you are in with the dragon sighting and he asks you why you didn't just knock, he would've told you everything fairly easily. He tells you the exact location of the dragon sightings\n";
                successOrFail = 1;
                cout <<"\nYou head for the local inn to rest up fairly content that you finished your job\n";
                system("pause");
            }
            else
            {
                cout <<"\nTurns out, the resident does not like you being in his house and strikes you. Turns out he packs more of a punch then some other old gentleman\n";
                cout <<"\nYou take " << d8 << " damage";
                x.healthPoints -= d8;
                cout <<"\nYou run away and hope that he is more talkative in the morning.\n";
                system("pause");
            }
        }
        }
        break;
    case 3: //Leave
        Leave();
        successOrFail = 0;
        system("pause");
        break;
    }
    TitleLogo();
    system("pause");
    GoingToINN();
    system("pause");
    Bar(x);
    switch(verifyInput(0,4))
    {

    case 1://agree to pay -30 gold
        x = payInnKeeper(x);
        system("pause");
        break;

    case 2: //TRY TO BARTER
        x = InnKeeperBarter(x);
        system("pause");
        break;

    case 3: //CAST MIND CONTROL ON HIM
        x = MindControlInnkeeper(x);
        system("pause");
        break;
    }

    if (successOrFail == 0)
    {
        x = goingbackOldMan(x);
        system("pause");
        successOrFail = 1;
    }

    moveOn = 0;
    while (moveOn == 0)
{
        onTheRoadAgain();
        STAT y =makemonsterSuperEasy();
        d6 = (rand() % 6)+1;
        switch(verifyInput(0,7))
    {
    case 1: // go find monsters to fight
        wilderness();
        system("pause");
        if(d6 == 1)
        {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nYou encounter a wild boar\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            system("pause");
        }
        else if (d6 == 2)
        {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nYou encounter a small goblin\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            system("pause");
        }

        else if (d6 == 3)
        {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nYou encounter a deserter\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            system("pause");
        }

        else if (d6 == 4)
        {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nYou encounter a highwayman\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            system("pause");
        }
        else if (d6 == 5)
        {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nYou encounter a giant spider\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            system("pause");
        }

        else
        {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nYou encounter a Wisp\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            system("pause");
        }
        x = Battle(x,y);
        x = levelCheck(x);
        break;

    case 2: // go to armorsmith
        cout << "ARMOR";
        system("pause");
        break;

    case 3: // Go to weaponsmith
       cout <<"WEAPONS";
        system("pause");
        break;

    case 4: //go to cleric to get healed
       cout << "HEALING";
        system("pause");
        break;

    case 5: //go to a different inn to rest
       cout <<"RESTING TIME";
        system("pause");
        break;

    case 7: //move on to the next one
        cout <<"moveing on";
        system("pause");
        break;
    }
}

    return 0;
}
