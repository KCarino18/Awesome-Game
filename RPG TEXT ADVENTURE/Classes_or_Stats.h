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
    bool yourTurn = 1;
};

#endif // CLASSES_OR_STATS_H_INCLUDED
