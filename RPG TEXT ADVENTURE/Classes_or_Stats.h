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
    int ArenaCounter = 0;
    int ArenaPrice = 30;
    int Act = 1;


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
    int weaponbuff = 0;
    //damage + #
    int weaponSpec = 0;
    //Daggers = 5
    //longsword = 6(+4 to armorclass)
    //rapier = 5
    //mace = 6
    //scimitar = 7
    //two handed sword = 9 (-3 to armorclass)
    //two handed axe = 10 ( -4 to armorclass)
    //bow = 7 ( +2 to armorclass)
    //shortbow = 5 ( +3 to armorclass)
    //staff = 5 (+2 to x.magic)
    int weaponType = 0;
    //1-5
    //1-10
    //1-20
    //1-25
    //1-60
};

STAT Guthreed()
{
    STAT x;
    x.strength = 25;
    x.dexterity = 10;
    x.intelligence = 5;
    x.charisma = 5;
    x.wisdom = 2;
    x.constitution = 30;
    int armor = 25;
    int weapons = 25;
    int magicAbility = 1;
    int rangeAbility = 1;
    int buffAbility = 20;
    int healAbility = 1;

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
    return x;
}

int valuemaker(weapon x, armor y)
{
    int p;
    if (x.cost > 0)
    {
        p = (x.cost/2);
    }
    else if (y.cost > 0)
    {
        p = (y.cost/2);
    }
    else
    {
        p = 0;
    }
    return p;
}
struct ItemInInventory
{
    int weight = 0;
    string name = "Empty";
    armor x;
    weapon y;
    int value = valuemaker(y, x);


};

struct Inventory
{
    ItemInInventory a;
    ItemInInventory b;
    ItemInInventory c;
    ItemInInventory d;
    ItemInInventory e;
    ItemInInventory f;
    ItemInInventory g;
    ItemInInventory h;
    ItemInInventory i;
    ItemInInventory j;
    ItemInInventory k;
    ItemInInventory l;
    ItemInInventory m;
    ItemInInventory n;
    ItemInInventory o;
    ItemInInventory p;
};

#endif // CLASSES_OR_STATS_H_INCLUDED
