#ifndef CLASSES_OR_STATS_H_INCLUDED
#define CLASSES_OR_STATS_H_INCLUDED

struct STAT
{

    int strength = 0;
    int dexterity = 0;
    int intelligence = 0;
    int charisma = 0;
    int constitution = 0;
    int wisdom = 0;
    int total = 0;
    int totalLeft = 32;
    //"Real stats"
    int healthPoints = 0;
    int maxHealth = 0;
    int maxMana = 0;
    int manaPoints = 0;
    int persuasion = 0;
    int plusAttack = 0;
    int attack = 0;
    int armorClass = 0;
    int weaponSpec = 0;
    int weaponType = 0;
    int thieving = 0;
    int barter = 0;
    int gold = 0;
    int chance = 0;
    int buff = 0;
    int healing = 0;
    int magic = 0;
    int HPots = 0;
    int MPots = 0;
    int level = 1;
    int experience = 100;
    int turnOrder = 0;
    int armorBuff = 0;
    int weaponBuff = 0;
    bool yourTurn = 1;

};

struct armor
{
    int cost = 0;
    //how much it costs
    int armorClassPlus = 0;
    //light armor = 4
    //medium armor = 6
    //heavy armor = 8
    int armorBuffPlus = 0;
    //armor class + ->#<-
};

struct weapon
{
    int cost = 0;
    //how much stuff costs
    int weaponBuffPlus = 0;
    //damage + #
    int weaponsPlus = 0;
    //Daggers = 5
    //longsword = 6(+4 to armorclass)
    //rapier = 5
    //mace = 6
    //scimitar = 7
    //two handed sword = 9 (-3 to armorclass)
    //two handed axe = 10 ( -4 to armorclass)
    //bow = 7 ( +2 to armorclass)
    //bow = 5 ( +3 to armorclass)
    //staff = 5 (+2 to x.magic)
};
#endif // CLASSES_OR_STATS_H_INCLUDED
