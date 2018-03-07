#ifndef BATTLESYSTEM_H_INCLUDED
#define BATTLESYSTEM_H_INCLUDED

#include "HPBar.h"

STAT randomItemSuperEasy(STAT x)
{
    bool cont = 0;
    int yaBoughtIt = 0;
    armor x1,x2,x3,x4,x5,x6,x7;

    x1.armorBuffPlus = (rand() % 2)+1;
    x2.armorBuffPlus = (rand() % 2)+1;
    x3.armorBuffPlus = (rand() % 2)+1;
    x4.armorBuffPlus = (rand() % 2)+1;
    x5.armorBuffPlus = (rand() % 2)+1;
    x6.armorBuffPlus = (rand() % 2)+1;
    x7.armorBuffPlus = (rand() % 2)+1;

    //light armor = 4
    //medium armor = 6
    //heavy armor = 8
    x1.armorClassPlus = (rand() %4)+1;//light
    x2.armorClassPlus = (rand() %4)+1;//light
    x3.armorClassPlus = (rand() %6)+1;//medium
    x4.armorClassPlus = (rand() %6)+1;//medium
    x5.armorClassPlus = (rand() %8)+1;//heavy
    x6.armorClassPlus = (rand() %8)+1;//heavy
    x7.armorClassPlus = (rand() %8)+1;//heavy

    //COST
    x1.cost = ((rand() % 50)+150) * (x1.armorClassPlus);
    x2.cost = ((rand() % 50)+150) * (x2.armorClassPlus);
    x3.cost = ((rand() % 50)+150) * (x3.armorClassPlus);
    x4.cost = ((rand() % 50)+150) * (x4.armorClassPlus);
    x5.cost = ((rand() % 50)+150) * (x5.armorClassPlus);
    x6.cost = ((rand() % 50)+150) * (x6.armorClassPlus);
    x7.cost = ((rand() % 50)+150) * (x7.armorClassPlus);

while (cont == 0)
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|                 Your choices are.....                         |";
    cout <<"\n----------------------------------------------------------------|";
    cout <<"\nCurrent Armorclass: " << x.armorClass << " Armor Buff: " << x.armorBuff;
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n1.) Light Armor 1 for : " << x1.cost << " -- Armorclass: " << x1.armorClassPlus << " -- buff to armorclass: " << x1.armorBuffPlus;
    cout <<"\n2.) Light Armor 2 for : " << x2.cost << " -- Armorclass: " << x2.armorClassPlus << " -- buff to armorclass: " << x2.armorBuffPlus;
    cout <<"\n3.) Medium Armor 1 for: " << x3.cost << " -- Armorclass: " << x3.armorClassPlus << " -- buff to armorclass: " << x3.armorBuffPlus;
    cout <<"\n4.) Medium Armor 2 for: " << x4.cost << " -- Armorclass: " << x4.armorClassPlus << " -- buff to armorclass: " << x4.armorBuffPlus;
    cout <<"\n5.) Heavy Armor 1 for : " << x5.cost << " -- Armorclass: " << x5.armorClassPlus << " -- buff to armorclass: " << x5.armorBuffPlus;
    cout <<"\n6.) Heavy Armor 2 for : " << x6.cost << " -- Armorclass: " << x6.armorClassPlus << " -- buff to armorclass: " << x6.armorBuffPlus;
    cout <<"\n7.) Heavy Armor 3 for : " << x7.cost << " -- Armorclass: " << x7.armorClassPlus << " -- buff to armorclass: " << x7.armorBuffPlus;
    cout <<"\n|===============================================================|";
    cout <<"\n                   Choice:";

    switch (verifyInput(0,8))
    {
        case 1: // 1st option
            if (x.gold >= x1.cost)
            {
                x.gold -= x1.cost;
                x.armorClass = x1.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x1.armorBuffPlus
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 2: // 2nd option
            if (x.gold >= x2.cost)
            {
                x.gold -= x2.cost;
                x.armorClass = x2.armorClassPlus + 5 + (x.dexterity/4) + x2.armorBuffPlus;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 3: // 3rd option
            if (x.gold >= x3.cost)
            {
                x.gold -= x3.cost;
                x.armorClass = x3.armorClassPlus + 5 + (x.dexterity/4) + x3.armorBuffPlus;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 4: // 4th option
            if (x.gold >= x4.cost)
            {
                x.gold -= x4.cost;
                x.armorClass = x4.armorClassPlus + 5 + (x.dexterity/4) + x4.armorBuffPlus;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 5: // 5th option
            if (x.gold >= x5.cost)
            {
                x.gold -= x5.cost;
                x.armorClass = x5.armorClassPlus + 5 + (x.dexterity/4) + x5.armorBuffPlus;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 6: // 6th option
            if (x.gold >= x6.cost)
            {
                x.gold -= x6.cost;
                x.armorClass = x6.armorClassPlus + 5 + (x.dexterity/4) + x6.armorBuffPlus;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 7: //7th option
            if (x.gold >= x7.cost)
            {
                x.gold -= x7.cost;
                x.armorClass = x7.armorClassPlus + 5 + (x.dexterity/4) + x7.armorBuffPlus;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
    }
}
    return (x);


}


STAT makemonsterSuperEasy()
{
    STAT x;
    x.strength = (rand() % 5)+1;
    x.dexterity = (rand() % 5)+1;
    x.intelligence = (rand() % 5)+1;
    x.charisma = (rand() % 5)+1;
    x.wisdom = (rand() % 5)+1;
    x.constitution = (rand() % 5)+1;
    int armor = (rand() % 5)+1;
    int weapons = (rand() % 5)+1;
    int magicAbility = (rand() % 3)+1;
    int rangeAbility = (rand() % 3)+1;
    int buffAbility = (rand() % 3)+1;
    int healAbility = (rand() % 3)+1;

    x.healthPoints = (x.constitution * 5) + 10;
    x.manaPoints = (x.intelligence * 3) + (magicAbility * 5);
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
    x.level = (rand() % 3)+1;
    x.gold = (x.charisma * 10) + 25;
    return(x);
}

STAT makemonsterEasy()
{
    STAT x;
    x.strength = (rand() % 10)+1;
    x.dexterity = (rand() % 10)+1;
    x.intelligence = (rand() % 10)+1;
    x.charisma = (rand() % 10)+1;
    x.wisdom = (rand() % 10)+1;
    x.constitution = (rand() % 10)+1;
    int armor = (rand() % 10)+1;
    int weapons = (rand() % 10)+1;
    int magicAbility = (rand() % 5)+1;
    int rangeAbility = (rand() % 5)+1;
    int buffAbility = (rand() % 5)+1;
    int healAbility = (rand() % 5)+1;

    x.healthPoints = (x.constitution * 5) + 10;
    x.manaPoints = (x.intelligence * 3) + (magicAbility * 5);
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
    x.level = (rand() % 6)+1;
    x.gold = (x.charisma * 10) + 25;

    return(x);
}

STAT makemonsterMedium()
{
    STAT x;
    x.strength = (rand() % 13)+1;
    x.dexterity = (rand() % 13)+1;
    x.intelligence = (rand() % 13)+1;
    x.charisma = (rand() % 13)+1;
    x.wisdom = (rand() % 13)+1;
    x.constitution = (rand() % 13)+1;
    int armor = (rand() % 13)+1;
    int weapons = (rand() % 13)+1;
    int magicAbility = (rand() % 8)+1;
    int rangeAbility = (rand() % 8)+1;
    int buffAbility = (rand() % 8)+1;
    int healAbility = (rand() % 8)+1;

    x.healthPoints = (x.constitution * 5) + 10;
    x.manaPoints = (x.intelligence * 3) + (magicAbility * 5);
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
    x.level = (rand() % 10)+1;
    x.gold = (x.charisma * 10) + 25;

    return(x);
}

STAT makemonsterHard()
{
    STAT x;
    x.strength = (rand() % 15)+1;
    x.dexterity = (rand() % 15)+1;
    x.intelligence = (rand() % 15)+1;
    x.charisma = (rand() % 15)+1;
    x.wisdom = (rand() % 15)+1;
    x.constitution = (rand() % 15)+1;
    int armor = (rand() % 15)+1;
    int weapons = (rand() % 15)+1;
    int magicAbility = (rand() % 10)+1;
    int rangeAbility = (rand() % 10)+1;
    int buffAbility = (rand() % 10)+1;
    int healAbility = (rand() % 10)+1;

    x.healthPoints = (x.constitution * 5) + 10;
    x.manaPoints = (x.intelligence * 3) + (magicAbility * 5);
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
    x.level = (rand() % 15)+1;
    x.gold = (x.charisma * 10) + 25;

    return(x);
}

STAT makemonsterExtreme()
{
    STAT x;
    x.strength = (rand() % 20)+1;
    x.dexterity = (rand() % 20)+1;
    x.intelligence = (rand() % 20)+1;
    x.charisma = (rand() % 20)+1;
    x.wisdom = (rand() % 20)+1;
    x.constitution = (rand() % 20)+1;
    int armor = (rand() % 20)+1;
    int weapons = (rand() % 20)+1;
    int magicAbility = (rand() % 15)+1;
    int rangeAbility = (rand() % 15)+1;
    int buffAbility = (rand() % 15)+1;
    int healAbility = (rand() % 15)+1;

    x.healthPoints = (x.constitution * 5) + 10;
    x.manaPoints = (x.intelligence * 3) + (magicAbility * 5);
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
    x.level = (rand() % 25)+1;
    x.gold = (x.charisma * 10) + 25;

    return(x);
}

void levelUp()
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"|===============================================================================|" << endl;
    cout <<"|               Here is the list of stats preferred for each character          |" << endl;
    cout <<"|                      Also the list of what each stat affects                  |" << endl;
    cout <<"|-------------------------------------------------------------------------------|" << endl;
    cout <<"|  1.)Strength:     This stat affects carry weight, attack power for melee      |" << endl;
    cout <<"|                   attack power.                                               |" << endl;
    cout <<"|                                                                               |" << endl;
    cout <<"|  2.)Dexterity:    This stat affects speed, attacks per turn, and range attack |" << endl;
    cout <<"|                                                                               |" << endl;
    cout <<"|  3.)Intelligence: This stat affects overall 'smartness' in situations and     |" << endl;
    cout <<"|                   ability to learn as well as quantity of magic learned       |" << endl;
    cout <<"|                                                                               |" << endl;
    cout <<"|  4.)Charisma:     This stat affects persuasion and ability to barter in shops |" << endl;
    cout <<"|                                                                               |" << endl;
    cout <<"|  5.)Constitution: This stat directly controls the amount of health you have   |" << endl;
    cout <<"|                                                                               |" << endl;
    cout <<"|  6.)Wisdom:       This stat affects the use of magic spells and ability to    |" << endl;
    cout <<"|                   apply reason                                                |" << endl;
    cout <<"|-------------------------------------------------------------------------------|" << endl;
    cout <<"                                     choice: ";
}

int dead()
{
    cout <<"\n|=======================================YOU HAVE DIED============================================|\n";
    return 0;
}

STAT levelCheck(STAT x)
{
    int xpNeeded;
    xpNeeded = 100 * (x.level+1);
    if(x.experience>=xpNeeded)
    {
        cout << "\nCONGRATULATIONS. YOU HAVE GAINED A LEVEL. YOU HAVE EARNED ONE SKILL POINT\n";
        levelUp();
        switch (verifyInput(0,7))
        {
        case 1: //Str
            x.strength++;
            cout <<"\nYou've chosen strength.\n";
            break;

        case 2: //dex
            x.armorClass -= (x.dexterity/4);
            x.dexterity++;
            cout <<"\nYou've chosen dexterity.\n";
            break;

        case 3://int
            x.intelligence++;
            cout <<"\nYou've chosen intelligence.\n";
            break;
        case 4: //Charisma
            x.charisma++;
            cout <<"\nYou've chosen charisma.\n";
            break;
        case 5: //Constitution
            x.constitution++;
            cout <<"\nYou've chosen constitution.\n";
            break;
        case 6: //Wisdom
            x.manaPoints-=(x.wisdom *3);
            x.wisdom++;
            cout <<"\nYou've chosen Wisdom.\n";
            break;
        }
        x.healthPoints = (x.constitution * 5) + 20;
        x.manaPoints += (x.wisdom * 3) + 10;
        x.maxHealth = x.healthPoints;
        x.maxMana = x.manaPoints;
        x.barter = (x.charisma /3) + 2;
        x.thieving = (x.dexterity / 3) + 2;
        x.armorClass += x.dexterity/4;
        x.magic = (x.wisdom/3);
        x.plusAttack = (x.strength/3);
        system("pause");
        return (x);
    }
    else
    {
        cout << "\nYou have not leveled up. :( \n";
        system("pause");
        return (x);
    }
}

void BattleMenu(STAT x, STAT y)
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|                             BATTLE                            |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|===============================================================|";
    cout <<"\n|-Your options:-                                                |";
    cout <<"\n|           1.) Melee Attack                                    |";
    cout <<"\n|                                                               |";
    cout <<"\n|           2.) Spells Available                                |";
    cout <<"\n|                                                               |";
    cout <<"\n|           3.) Drink HP Potion                                 |";
    cout <<"\n|                                                               |";
    cout <<"\n|           4.) Drink MP Potion                                 |";
    cout <<"\n|===============================================================|";
    HpMpBar(x);
    hpBar(y);
    cout <<"\n|===============================================================|";
    cout <<"\n                    Choice: ";
}
void Spells()
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|================================================================================================|\n";
    cout <<"\n|                                              SPELLS AVAILABLE                                  |";
    cout <<"\n|------------------------------------------------------------------------------------------------|";
    cout <<"\n|    choice    MP Cost  REQUIRED WISDOM LEVEL  SPELL              Info                           |";
    cout <<"\n|       1          5               1           Confusion     enemy loses 1 turn (lowest chance)  |";
    cout <<"\n|       2          10              2           Fireball      Enemy potentially takes d6 damage   |";
    cout <<"\n|       3          10              3           Wind Strike   Enemy Potentially takes d8 damage   |";
    cout <<"\n|       4          10              4           Trap          Enemy loses 1 turn (higher chance)  |";
    cout <<"\n|       5          15              5           Earthquake    Enemy Drops weapon (lowers attack)  |";
    cout <<"\n|       6          20              10          Magic Missle  Damages enemy for 3 d10 damage      |";
    cout <<"\n|       7          25              15          Mind Control  Enemy loses 1 turn (highest chance) |";
    cout <<"\n|       8          30              20          Vorpal Attack Small chance to instant kill enemy  |";
    cout <<"\n|       9          50              32          Super Nova    chance to deals 3d20 damage         |";
    cout <<"\n|================================================================================================|";
    cout <<"\n                                        Choice: ";

}

STAT Battle(STAT x, STAT y)
{
    int d20M = 0;
    int totalDamage = 0;
    int d20 = 0;
    int goldWon = 0;
    int experienceEarned;
    int weaponDropped;
    int weaponDroppedX;
    weaponDroppedX = x.weaponSpec;
    int second =0;
    int melee = 0;
    unsigned int steald20;
    if (x.weaponType >=60)
    {
        melee = (rand() % 60)+1;
    }
    else if (x.weaponType >=55)
    {
        melee = (rand() % 55)+1;
    }
    else if (x.weaponType >=45)
    {
        melee = (rand() % 45)+1;
    }
    else if (x.weaponType >=40)
    {
        melee = (rand() % 40)+1;
    }
    else if (x.weaponType >=35)
    {
        melee = (rand() % 35)+1;
    }
    else if (x.weaponType >=30)
    {
        melee = (rand() % 30)+1;
    }
    else if (x.weaponType >=25)
    {
        melee = (rand() % 25)+1;
    }
    else if (x.weaponType >=24)
    {
        melee = (rand() % 24)+1;
    }
    else if (x.weaponType >=23)
    {
        melee = (rand() % 23)+1;
    }
    else if (x.weaponType >=22)
    {
        melee = (rand() % 22)+1;
    }
    else if (x.weaponType >=21)
    {
        melee = (rand() % 21)+1;
    }
    else if (x.weaponType >=20)
    {
        melee = (rand() % 20)+1;
    }
    else if (x.weaponType >=19)
    {
        melee = (rand() % 19)+1;
    }
    else if (x.weaponType >=18)
    {
        melee = (rand() % 18)+1;
    }
    else if (x.weaponType >=17)
    {
        melee = (rand() % 17)+1;
    }
    else if (x.weaponType >=16)
    {
        melee = (rand() % 16)+1;
    }
    else if (x.weaponType >=15)
    {
        melee = (rand() % 15)+1;
    }
    else if (x.weaponType >=14)
    {
        melee = (rand() % 14)+1;
    }
    else if (x.weaponType >=13)
    {
        melee = (rand() % 13)+1;
    }
    else if (x.weaponType >=12)
    {
        melee = (rand() % 12)+1;
    }
    else if (x.weaponType >=11)
    {
        melee = (rand() % 11)+1;
    }
    else if (x.weaponType >=10)
    {
        melee = (rand() % 10)+1;
    }
    else if (x.weaponType >=9)
    {
        melee = (rand() % 9)+1;
    }
    else if (x.weaponType >=8)
    {
        melee = (rand() % 8)+1;
    }
    else if (x.weaponType >=7)
    {
        melee = (rand() % 7)+1;
    }
    else if (x.weaponType >=6)
    {
        melee = (rand() % 6)+1;
    }
    else if (x.weaponType >=5)
    {
        melee = (rand() % 5)+1;
    }
    else if (x.weaponType >=4)
    {
        melee = (rand() % 4)+1;
    }
    else if (x.weaponType >=3)
    {
        melee = (rand() % 3)+1;
    }
    else if (x.weaponType >=2)
    {
        melee = (rand() % 2)+1;
    }
    else if (x.weaponType >=1)
    {
        melee = 1;
    }

    while (x.healthPoints > 0 || y.healthPoints > 0)
    {

        if(x.yourTurn = 1)
        {
    BattleMenu(x,y);
    switch(verifyInput(0,5))
    {
    case 1: // MELEE ATTACK
        cout << "\n\nYou attempt to slash at the enemy\n";
        d20M = (rand() % 20)+1 + x.attack;
        melee = (rand() % 6) +1;
        totalDamage = (x.plusAttack+x.weaponSpec+x.buff) + melee + x.weaponBuff;

        if(d20M > y.armorClass)
        {
            cout << "You attack the opponent for " <<  totalDamage <<" damage\n";
            y.healthPoints -=totalDamage;
            y.yourTurn = 1;
            x.yourTurn = 0;
        }
        else
        {
            cout << "\nyou missed";
            x.yourTurn = 0;
            y.yourTurn = 1;
        }
        break;
    case 2: // SPELLS
        Spells();
        second = verifyInput(0,10);
        switch (second)
        {
        {

        case 1: // 5               1           Confusion     enemy loses one turn
            if (x.wisdom > 1)
            {
                if (x.manaPoints > 5)
                {
                int d20 = ((rand() % 20)+1) + x.magic;
                if ( d20 > y.armorClass)
                {
                   x.yourTurn =1;
                   y.yourTurn = 0;
                }
                else
                {
                    cout << "\nFail\n";
                    y.yourTurn = 1;
                    x.yourTurn = 0;
                }
                }
                else
                {
                    cout <<"\nDO NOT HAVE ENOUGH MANA\n";
                }
            }
            else
            {
            cout <<"\nYour wisdom is not high enough.";
            }
            break;

        case 2: //2          10              2           Fireball      Enemy potentially takes d6 damage
            if (x.wisdom > 2)
            {
                if (x.manaPoints > 10)
                {
                int d20 = ((rand() % 20)+1) + x.magic;
                if ( d20 > y.armorClass)
                {
                   int d6 = ((rand() % 6)+1) + x.weaponSpec + x.attack;
                   y.healthPoints-=d6;
                   x.yourTurn = 0;
                   y.yourTurn = 1;
                }
                else
                {
                    cout << "\nFail\n";
                    x.yourTurn = 0;
                    y.yourTurn = 1;
                }
                }
                else
                {
                    cout <<"\nDO NOT HAVE ENOUGH MANA\n";
                }
            }
            else
            {
            cout <<"\nYour wisdom is not high enough.";
            }
            break;

        case 3: //3          10              3           Wind Strike   Enemy Potentially takes d8 damage
            if (x.wisdom > 3)
            {
                if (x.manaPoints > 10)
                {
                int d20 = ((rand() % 20)+1) + x.magic;
                if ( d20 > y.armorClass)
                {
                   int d8 = ((rand() % 8)+1) + x.weaponSpec + x.attack;
                   y.healthPoints-=d8;
                   x.yourTurn = 0;
                   y.yourTurn = 1;
                }
                else
                {
                    cout << "\nFail\n";
                    x.yourTurn = 0;
                    y.yourTurn = 1;
                }
                }
                else
                {
                    cout <<"\nDO NOT HAVE ENOUGH MANA\n";
                }
            }
            else
            {
            cout <<"\nYour wisdom is not high enough.";
            }
            break;

        case 4: //4          10              4           Trap          Enemy loses 1 turns but higher chance
            if (x.wisdom > 4)
            {
                if (x.manaPoints > 10)
                {
                int d20 = ((rand() % 20)+1) + x.magic + 5;
                if ( d20 > y.armorClass)
                {
                   x.yourTurn = 1;
                   y.yourTurn = 0;
                }
                else
                {
                    cout << "\nFail\n";
                    y.yourTurn = 1;
                    x.yourTurn = 0;
                }
                }
                else
                {
                    cout <<"\nDO NOT HAVE ENOUGH MANA\n";
                }
            }
            else
            {
            cout <<"\nYour wisdom is not high enough.";
            }
            break;

        case 5: //5          15              5           Earthquake    Enemy Drops weapon (lowers attack)
            if (x.wisdom > 5)
            {
                if (x.manaPoints > 15)
                {
                int d20 = ((rand() % 20)+1) + x.magic;
                if ( d20 > y.armorClass)
                {
                    weaponDropped = y.weaponSpec;
                   y.attack -= y.weaponSpec;
                }
                else
                {
                    cout << "\nFail\n";
                }
                x.yourTurn = 0;
                y.yourTurn = 1;
                }
                else
                {
                    cout <<"\nDO NOT HAVE ENOUGH MANA\n";
                }
            }
            else
            {
            cout <<"\nYour wisdom is not high enough.";
            }
            x.yourTurn = 0;
            y.yourTurn = 1;
            break;

        case 6: //6          20              10          Magic Missle  Damages enemy for 3 d10 damage
            if (x.wisdom > 10)
            {
                if (x.manaPoints > 20)
                {
                int total = x.magic;
                int d101 = (rand() % 10) +1;
                int d102 = (rand() % 10) +1;
                int d103 = (rand() % 10) +1;
                y.healthPoints-= (total + d101 + d102 + d103);
                x.yourTurn = 0;
                y.yourTurn = 1;
                }
                else
                {
                    cout <<"\nDO NOT HAVE ENOUGH MANA\n";
                }
            }
            else
            {
            cout <<"\nYour wisdom is not high enough.";
            }
            break;


        case 7: //7          25              15          Mind Control  Enemy Stops attacking for 1 turns  HIGHEST CHANCE
            if (x.wisdom > 15)
            {
                if (x.manaPoints > 25)
                {
                int d20 = ((rand() % 20)+1) + x.magic + 8;
                if ( d20 > y.armorClass)
                {
                x.yourTurn = 1;
                y.yourTurn = 0;
                }
                else
                {
                    cout << "\nFail\n";
                y.yourTurn = 1;
                x.yourTurn = 0;
                }
                }
                else
                {
                    cout <<"\nDO NOT HAVE ENOUGH MANA\n";
                }
            }
            else
            {
            cout <<"\nYour wisdom is not high enough.";
            }
            break;

        case 8: // 8          30              20          Vorpal Attack Small chance to instant kill enemy
            if (x.wisdom >= 20)
            {
                if (x.manaPoints > 30)
                {
                int d20 = ((rand() % 20)+1) + x.magic;
                if ( d20 > (y.armorClass+ (y.healthPoints/3)))
                {
                   y.healthPoints = 0;
                   x.yourTurn = 0;
                   y.yourTurn = 1;
                }
                else
                {
                    cout << "\nFail\n";
                    x.yourTurn = 0;
                    y.yourTurn = 1;
                }
                }
                else
                {
                    cout <<"\nDO NOT HAVE ENOUGH MANA\n";
                }
            }
            else
            {
            cout <<"\nYour wisdom is not high enough.";
            }

            break;

        case 9: //9          50              32          Super Nova    This attack deals 3d20 damage
            if (x.wisdom >= 32)
            {
                if (x.manaPoints > 50)
                {
                int d20 = ((rand() % 20)+1) + x.magic;
                if ( d20 > y.armorClass)
                {
                   int d201 = ((rand() % 20)+1) + x.weaponSpec + x.attack;
                   int d202 =((rand() % 20)+1) + x.weaponSpec + x.attack;
                   int d203 = ((rand() % 20)+1) + x.weaponSpec + x.attack;
                   y.healthPoints -= (d201 + d202 + d203);
                   x.yourTurn = 0;
                   y.yourTurn = 1;
                }
                else
                {
                    cout << "\nFail\n";
                    x.yourTurn = 0;
                    y.yourTurn = 1;
                }
                }
                else
                {
                    cout <<"\nDO NOT HAVE ENOUGH MANA\n";
                }
            }
            else
            {
            cout <<"\nYour wisdom is not high enough.";
            }

            break;
        }
        break;
        }
        break;

    case 3://Drink HP Pot
        cout << "\nYou attempt to drink a healing potion.\n";
        if (x.HPots > 0)
        {
            x.HPots -= 1;
            int healing_pot = (rand() % 20)+5;
            if (x.maxHealth < (healing_pot+x.healthPoints))
            {
                x.healthPoints = x.maxHealth;
            }
            else
            {
                x.healthPoints += healing_pot;
            }
            cout << "You drink one potion healing \n";
            x.yourTurn = 0;
            y.yourTurn = 1;
        }
        system("pause");
        break;

    case 4: // Drink MP Pot
        cout << "\nYou attempt to drink a healing potion.\n";
        if (x.MPots > 0)
        {
            x.MPots -= 1;
            int mana_pot = (rand() % 20)+5;
            if (x.maxHealth < (mana_pot+x.healthPoints))
            {
                x.manaPoints = x.maxMana;
            }
            else
            {
                x.manaPoints += mana_pot;
            }
            cout << "You drink one mana potion \n";
            x.yourTurn = 0;
            y.yourTurn = 1;
        }
        system("pause");
        break;


    }
        }


    if (x.healthPoints <= 0)
    {
        cout <<"\nYour adventure ends here....";
        exit(EXIT_SUCCESS);
        dead();
    }
    if (y.healthPoints <= 0)
    {
        cout <<"\nYou defeated your opponent!";
        goldWon = y.gold/3;
        experienceEarned = (y.level * 5);
        cout <<"\nYou gain "<< goldWon <<" gold. \nYou always have gained " << experienceEarned <<" experience";
        y.weaponSpec = weaponDropped;
        x.weaponSpec = weaponDroppedX;
        x.gold = goldWon + x.gold;
        x.experience = x.experience + experienceEarned;
        return(x);
        x.yourTurn = 1;
        y.yourTurn = 0;
    }

    if(y.yourTurn == 1)
    {
        cout << "\n\nThe enemy attacks you\n";
        d20M = (rand() % 20)+1 + y.attack;
        totalDamage = (y.plusAttack+y.weaponSpec+y.buff);
        if(d20M > (x.armorClass + x.armorBuff))
        {
            cout << "The opponent damages you for " <<  totalDamage <<" damage\n";
            x.healthPoints -=totalDamage;
            x.yourTurn = 1;
            y.yourTurn = 0;
            system("pause");
        }
        else
        {
            cout << "\nThe opponent missed\n";
            y.yourTurn = 0;
            x.yourTurn = 1;
            system("pause");
        }
    }

    }

}

#endif // BATTLESYSTEM_H_INCLUDED
