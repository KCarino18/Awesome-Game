#ifndef BATTLESYSTEM_H_INCLUDED
#define BATTLESYSTEM_H_INCLUDED

#include "HPBar.h"

void generateNameWorkers()
{
    string firstName;
    string secondName;
    int random = (rand() % 4) + 1;
    int random2 = (rand() % 9) + 1;

    switch(random)
    {
    case 1:
        firstName = "very short";
        break;
    case 2:
        firstName = "short";
        break;
    case 3:
        firstName = "tall";
        break;
    case 4:
        firstName = "very tall";
        break;
    }

    switch(random2)
    {
    case 1:
        secondName = " halfling";
        break;
    case 2:
        secondName = " half-elf";
        break;
    case 3:
        secondName = " elf";
        break;
    case 4:
        secondName = " wood elf";
        break;
    case 5:
        secondName = " drow elf";
        break;
    case 6:
        secondName = " half-orc";
        break;
    case 7:
        secondName = " dragonborn";
        break;
    case 8:
        secondName = " dwarf";
        break;
    case 9:
        secondName = " Tiefling";
        break;
    }
    firstName = firstName + secondName;
    cout << setw(21) << setfill(' ') << firstName;
}

int priorityToDoActII()
{
    int value = 0;
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|                           Priority                            |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|      As you look around, you see a few stores as well as      |";
    cout <<"\n|       a few locals that are surrounding what looks like       |";
    cout <<"\n|        a fighting dome of some sorts. What will you do?       |";
    cout <<"\n|===============================================================|";
    cout <<"\n|    1.) Go to Weaponsmith.                                     |";
    cout <<"\n|    2.) Go to Armorsmith                                       |";
    cout <<"\n|    3.) Go to Clinic                                           |";
    cout <<"\n|    4.) Go to Local Inn                                        |";
    cout <<"\n|    5.) Go see whats going on in the arena.                    |";
    cout <<"\n|    6.) Go see the village elder to try to see                 |";
    cout <<"\n|===============================================================|";
    cout <<"\n                      Choice: ";
    value = verifyInput(0,7);
    return value;
}

void generateNameOfBeast()
{
    string firstName;
    string secondName;
    int random = (rand() % 20) + 1;
    int random2 = (rand() % 32) + 1;

    switch(random)
    {
    case 1:
        firstName = "Reginald ";
        break;

    case 2:
        firstName = "Peter ";
        break;

    case 3:
        firstName = "Paran-thesis ";
        break;

    case 4:
        firstName = "Marry-o ";
        break;

    case 5:
        firstName = "Kash ";
        break;

    case 6:
        firstName = "Spyro ";
        break;

    case 7:
        firstName = "Barb ";
        break;

    case 8:
        firstName = "Grunther ";
        break;

    case 9:
        firstName = "Paronto ";
        break;

    case 10:
        firstName = "Lockno ";
        break;

    case 11:
        firstName = "Krik ";
        break;

    case 12:
        firstName = "Turino ";
        break;

    case 13:
        firstName = "Yesura ";
        break;

    case 14:
        firstName = "Qwerty ";
        break;

    case 15:
        firstName = "Ester ";
        break;

    case 16:
        firstName = "Unis ";
        break;

    case 17:
        firstName = "Ilister ";
        break;

    case 18:
        firstName = "Ferinko ";
        break;

    case 19:
        firstName = "Shamus ";
        break;

    case 20:
        firstName = "Mooreben ";
        break;
    }

  switch(random2)
  {
  case 1:
    secondName = "the Goblin";
    break;

  case 2:
    secondName = "the Dragon";
    break;

  case 3:
    secondName = "the Bandit";
    break;
  case 4:
    secondName = "the Old Man";
    break;
  case 5:
    secondName = "the Barbarian";
    break;
  case 6:
    secondName = "the Corrupt Guard";
    break;
  case 7:
    secondName = "the Ghoul";
    break;
  case 8:
    secondName = "the Vampire";
    break;
  case 9:
    secondName = "the Giant";
    break;
  case 10:
    secondName = "the Harmless";
    break;
  case 11:
    secondName = "the Deathbringer";
    break;
  case 12:
    secondName = "the Guardian";
    break;
  case 13:
    secondName = "the God";
    break;
  case 14:
    secondName = "the Dark Knight";
    break;
  case 15:
    secondName = "the Knight";
    break;
  case 16:
    secondName = "the Thief";
    break;
  case 17:
    secondName = "the Highwayman";
    break;
  case 18:
    secondName = "the Mugger";
    break;
  case 19:
    secondName = "the Drunkard";
    break;
  case 20:
    secondName = "the Minotaur";
    break;
  case 21:
    secondName = "the Pegasus";
    break;
  case 22:
    secondName = "the Cyclops";
    break;
  case 23:
    secondName = "the Giant Spider";
    break;
  case 24:
    secondName = "the Very Small Spider";
    break;
  case 25:
    secondName = "the Harmful";
    break;
  case 26:
    secondName = "the bear";
    break;
  case 27:
    secondName = "the wolf";
    break;
  case 28:
    secondName = "the Gambler";
    break;
  case 29:
    secondName = "the Werewolf";
    break;
  case 30:
    secondName = "the Servant";
    break;
  case 31:
    secondName = "the Zealot";
    break;
  case 32:
    secondName = "the Crazed";
    break;
}

firstName = firstName + secondName;
 cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
 cout << setw(40) << setfill(' ') << firstName;
 cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

void generateLightArmor()
{
    string first;
    string second;
    int random = (rand() % 4)+1;
    int random2 = (rand() % 4)+1;

    switch(random2)
    {
    case 1:
        second = "Protection";
        break;

    case 2:
        second = "Fortification";
        break;

    case 3:
        second = "Mastery";
        break;

    case 4:
        second = "Tanos";
        break;
    }

    switch(random)
    {
    case 1: //padded
        first = "Padded Armor of ";
        first = first + second;
        cout << setw(39) << setfill(' ') << first;
        break;

    case 2: //Robe
        first = "Robe of ";
        first = first + second;
        cout << setw(39) << setfill(' ') << first;
        break;

    case 3: //Leather
        first = "Leather Armor of ";
        first = first + second;
        cout << setw(39) << setfill(' ') << first;
        break;

    case 4: //Studded Leather Armor
        first = "Studded Leather Armor Of ";
        first = first + second;
        cout << setw(39) << setfill(' ') << first;
        break;
    }
}

void generateMediumArmor()
{
    string first;
    string second;
    int random = (rand() % 5)+1;
    int random2 = (rand() % 4)+1;

    switch(random2)
    {
    case 1:
        second = "Protection";
        break;

    case 2:
        second = "Fortification";
        break;

    case 3:
        second = "Mastery";
        break;

    case 4:
        second = "Tanos";
        break;
    }

    switch(random)
    {
    case 1: //Hide
        first = "Hide Armor of ";
        first = first + second;
        cout << setw(39) << setfill(' ') << first;
        break;

    case 2: //Chain shirt
        first = "Chain shirt of ";
        first = first + second;
        cout << setw(39) << setfill(' ') << first;
        break;

    case 3: //Scale Mail
        first = "Scale Mail of ";
        first = first + second;
        cout << setw(39) << setfill(' ') << first;
        break;

    case 4: //BreastPlate
        first = "Breastplate Of ";
        first = first + second;
        cout << setw(39) << setfill(' ') << first;
        break;

    case 5: //Half Plate
        first = "Half Plate Of ";
        first = first + second;
        cout << setw(39) << setfill(' ') << first;
        break;
    }
}

void generateHeavyArmor()
{
    string first;
    string second;
    int random = (rand() % 4)+1;
    int random2 = (rand() % 4)+1;

    switch(random2)
    {
    case 1:
        second = "Protection";
        break;

    case 2:
        second = "Fortification";
        break;

    case 3:
        second = "Mastery";
        break;

    case 4:
        second = "Tanos";
        break;
    }

    switch(random)
    {
    case 1: //Hide
        first = "Ring Mail of ";
        first = first + second;
        cout << setw(39) << setfill(' ') << first;
        break;

    case 2: //Chain shirt
        first = "Chain Mail of ";
        first = first + second;
        cout << setw(39) << setfill(' ') << first;
        break;

    case 3: //Scale Mail
        first = "Splint Armor of ";
        first = first + second;
        cout << setw(39) << setfill(' ') << first;
        break;

    case 4: //BreastPlate
        first = "Plate Armor of ";
        first = first + second;
        cout << setw(39) << setfill(' ') << first;
        break;
    }
}

void generateDaggers()
{
    int random = (rand() % 8)+1;
    string name;
switch(random)
{
case 1: //reg
    name = "Daggers";
    break;
case 2:
    name = "Frost Daggers";
    break;
case 3:
    name = "Fire Daggers";
    break;
case 4:
    name = "Daggers of Death";
    break;
case 5:
    name = "Daggers of Misfortune";
    break;
case 6:
    name = "Daggers of Leeching";
    break;
case 7:
    name = "Daggers of Ruthgood";
    break;
case 8:
    name = "Hidden Blade";
    break;

}
cout << setw(39) << setfill(' ') << name;
}
void generateLongsword()
{
    int random = (rand() % 12)+1;
    string name;
    switch(random)
    {
    case 1:
        name = "Key Shaped Blade";
        break;
    case 2:
        name = "Sabre of Light";
        break;
    case 3:
        name = "Sword of Energy";
        break;
    case 4:
        name = "Longsword";
        break;
    case 5:
        name = "Longsword of Frost";
        break;
    case 6:
        name = "Longsword of Flame";
        break;
    case 7:
        name = "Daedric Blade";
        break;
    case 8:
        name = "Buster Sword";
        break;
    case 9:
        name = "Katana";
        break;
    case 10:
        name = "Masamune";
        break;
    case 11:
        name = "Excalibur II";
        break;
    case 12:
        name = "Sword of Master";
        break;
    }
    cout << setw(39) << setfill(' ') << name;
}
void generateRapier()
{
    int random = (rand() % 9)+1;
    string name;
    switch(random)
    {
    case 1:
        name = "Yoho A Pirate Life";
        break;
    case 2:
        name = "Rapier of Dueling";
        break;
    case 3:
        name = "Rapier";
        break;
    case 4:
        name = "Rapier of Frost";
        break;
    case 5:
        name = "Rapier of Flame";
        break;
    case 6:
        name = "Rapier of Death";
        break;
    case 7:
        name = "Rapier of Royalty";
        break;
    case 8:
        name = "Ornamental Blade";
        break;
    case 9:
        name = "Curved Blade";
        break;
    }
    cout << setw(39) << setfill(' ') << name;
}
void generateMace()
{
       int random = (rand() % 12)+1;
    string name;
    switch(random)
    {
    case 1:
        name = "Hammer";
        break;
    case 2:
        name = "Mace";
        break;
    case 3:
        name = "Hammer of the Gods";
        break;
    case 4:
        name = "Mace of Religion";
        break;
    case 5:
        name = "Mace of Righteousness";
        break;
    case 6:
        name = "Blacksmiths Hammer";
        break;
    case 7:
        name = "Mace of Frost";
        break;
    case 8:
        name = "Mace of Flames";
        break;
    case 9:
        name = "Hammer of Frost";
        break;
    case 10:
        name = "Hammer of Flames";
        break;
    case 11:
        name = "Ornamental Mace";
        break;
    case 12:
        name = "Ornamental Hammer";
        break;
    }
    cout << setw(39) << setfill(' ') << name;
}
void generateScimitar()
{
        int random = (rand() % 9)+1;
    string name;
    switch(random)
    {
    case 1:
        name = "Bandits Blade";
        break;
    case 2:
        name = "Scimitar";
        break;
    case 3:
        name = "Scimitar of Death";
        break;
    case 4:
        name = "Scimitar of the Sands";
        break;
    case 5:
        name = "Scimitar of Frost";
        break;
    case 6:
        name = "Scimitar of Flame";
        break;
    case 7:
        name = "Scimitar of Reckoning";
        break;
    case 8:
        name = "Scimitar of Velor";
        break;
    case 9:
        name = "Scimitar of Al-Kharid";
        break;
    }
    cout << setw(39) << setfill(' ') << name;
}
void generateTwoHandedSword()
{
        int random = (rand() % 12)+1;
    string name;
    switch(random)
    {
    case 1:
        name = "Frostmourne";
        break;
    case 2:
        name = "Two-Handed Sword";
        break;
    case 3:
        name = "Two-Handed Sword of Frost";
        break;
    case 4:
        name = "Two-Handed Sword of Flames";
        break;
    case 5:
        name = "Two-Handed Sword of Plort";
        break;
    case 6:
        name = "Bloodskal Blade";
        break;
    case 7:
        name = "Greatsword of Flame";
        break;
    case 8:
        name = "Twin Blade of the Phoenix";
        break;
    case 9:
        name = "Zweihander";
        break;
    case 10:
        name = "Ludwig's Holy Blade";
        break;
    case 11:
        name = "Shuraba";
        break;
    case 12:
        name = "Monster Hunting Sword";
        break;
    }
    cout << setw(39) << setfill(' ') << name;
}
void generateTwoHandedAxe()
{
        int random = (rand() % 10)+1;
    string name;
    switch(random)
    {
    case 1:
        name = "Krato's Axes";
        break;
    case 2:
        name = "Vikings Axes";
        break;
    case 3:
        name = "Great Axe";
        break;
    case 4:
        name = "Great Axe of Frost";
        break;
    case 5:
        name = "Great Axe of Flames";
        break;
    case 6:
        name = "Axe of Volkstag";
        break;
    case 7:
        name = "Celestial Bush Axe";
        break;
    case 8:
        name = "Axe of Chaos";
        break;
    case 9:
        name = "Axe of Light";
        break;
    case 10:
        name = "Axe of the Burrows";
        break;
    }
    cout << setw(39) << setfill(' ') << name;
}
void generateBow()
{
        int random = (rand() % 12)+1;
    string name;
    switch(random)
    {
    case 1:
        name = "Longbow";
        break;
    case 2:
        name = "Longbow of Light";
        break;
    case 3:
        name = "Longbow of Chaos";
        break;
    case 4:
        name = "Longbow of Flame";
        break;
    case 5:
        name = "Longbow of Frost";
        break;
    case 6:
        name = "Azkar";
        break;
    case 7:
        name = "Khergit Bow";
        break;
    case 8:
        name = "Bow of Mechanix";
        break;
    case 9:
        name = "Bow of Scarring";
        break;
    case 10:
        name = "Bow of Leeching";
        break;
    case 11:
        name = "Bow of Azaroth";
        break;
    case 12:
        name = "Bow of Twoard";
        break;
    }
    cout << setw(39) << setfill(' ') << name;
}
void generateShortBow()
{
    int random = (rand() % 8)+1;
    string name;
    switch(random)
    {
    case 1:
        name = "Shortbow";
        break;
    case 2:
        name = "Shortbow of Death";
        break;
    case 3:
        name = "Shortbow of Light";
        break;
    case 4:
        name = "Shortbow of Flame";
        break;
    case 5:
        name = "Shortbow of Frost";
        break;
    case 6:
        name = "Shortbow of Piercing";
        break;
    case 7:
        name = "Shortbow of Trunket";
        break;
    case 8:
        name = "Shortbow of Finesse";
        break;
    }
    cout << setw(39) << setfill(' ') << name;
}
void generateStaff()
{
    int random = (rand() % 8)+1;
    string name;
    switch(random)
    {
    case 1:
        name = "Staff";
        break;
    case 2:
        name = "Spiked Staff";
        break;
    case 3:
        name = "Air Staff";
        break;
    case 4:
        name = "Earth Staff";
        break;
    case 5:
        name = "Fire Staff";
        break;
    case 6:
        name = "Water Staff";
        break;
    case 7:
        name = "Staff of Varrock";
        break;
    case 8:
        name = "Staff of the Greybeards";
        break;
    }
    cout << setw(39) << setfill(' ') << name;
}

STAT randomWeaponSuperEasy(STAT x)
{
    bool cont = 0;
    int weaponYes = x.attack - x.weaponSpec;
    weapon mace,dagger,longsword,rapier,scimitar,twohandedsword,twohandedaxe,bow,shortbow,staff;

    mace.weaponbuff = 1 + 3;
    dagger.weaponbuff = 1 + 2;
    longsword.weaponbuff = 1 + 3;
    rapier.weaponbuff = 1 + 2;
    scimitar.weaponbuff = 1 + 3;
    twohandedaxe.weaponbuff = 1 + 5;
    twohandedsword.weaponbuff = 1 + 4;
    bow.weaponbuff = 1 + 3;
    shortbow.weaponbuff = 1 + 2;
    staff.weaponbuff = 1 + 2;
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

    mace.weaponType = (rand() % 5)+1;
    dagger.weaponType = (rand() % 5)+1;
    longsword.weaponType = (rand() % 5)+1;
    rapier.weaponType = (rand() % 5)+1;
    scimitar.weaponType = (rand() % 5)+1;
    twohandedaxe.weaponType = (rand() % 5)+1;
    twohandedsword.weaponType = (rand() % 5)+1;
    bow.weaponType = (rand() % 5)+1;
    shortbow.weaponType = (rand() % 5)+1;
    staff.weaponType = (rand() % 5)+1;

    mace.weaponSpec = (rand() % 2)+1;
    dagger.weaponSpec = (rand() % 2)+1;
    longsword.weaponSpec  = (rand() % 2)+1;
    rapier.weaponSpec =  (rand() % 2)+1;
    scimitar.weaponSpec  = (rand() % 2)+1;
    twohandedaxe.weaponSpec  = (rand() % 2)+1;
    twohandedsword.weaponSpec  = (rand() % 2)+1;
    bow.weaponSpec =  (rand() % 2)+1;
    shortbow.weaponSpec  = (rand() % 2)+1;
    staff.weaponSpec =  (rand() % 2)+1;

    mace.cost = ((rand() % 50)+150) * mace.weaponbuff;
    dagger.cost = ((rand() % 50)+150) * dagger.weaponbuff;
    longsword.cost = ((rand() % 50)+150) * longsword.weaponbuff;
    rapier.cost = ((rand() % 50)+150) * rapier.weaponbuff;
    scimitar.cost = ((rand() % 50)+150) * scimitar.weaponbuff;
    twohandedaxe.cost = ((rand() % 50)+150) * twohandedaxe.weaponbuff;
    twohandedsword.cost = ((rand() % 50)+150) * twohandedsword.weaponbuff;
    bow.cost = ((rand() % 50)+150) * bow.weaponbuff;
    shortbow.cost = ((rand() % 50)+150) * shortbow.weaponbuff;
    staff.cost = ((rand() % 50)+150) * staff.weaponbuff;

    while (cont == 0)
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|======================================================================================================================|";
    cout <<"\n|                                               Your choices are.....                                                  |";
    cout <<"\n|----------------------------------------------------------------------------------------------------------------------|";
    cout <<"\n|         Current Weapon Type: " <<setw(3) << setfill(' ') << x.weaponType <<"   Current Weapon Spec:" << setw(3) << setfill(' ') << x.weaponSpec <<  "        Weapon Buff: " << setw(3) << setfill(' ') << x.weaponBuff << "          Current Gold: " << setw(7) << setfill(' ') << x.gold << "    |";
    cout <<"\n|----------------------------------------------------------------------------------------------------------------------|";
    cout <<"\n| 1.) ";
    generateBow();
    cout <<" for :" << setw(4) << setfill(' ') << bow.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << bow.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << bow.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << bow.weaponSpec << " |";
    cout <<"\n| 2.) ";
    generateDaggers();
    cout <<" for :" << setw(4) << setfill(' ') << dagger.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << dagger.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << dagger.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << dagger.weaponSpec << " |";
    cout <<"\n| 3.) ";
    generateLongsword();
    cout <<" for :" << setw(4) << setfill(' ') << longsword.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << longsword.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << longsword.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << longsword.weaponSpec << " |";
    cout <<"\n| 4.) ";
    generateMace();
    cout <<" for :" << setw(4) << setfill(' ') << mace.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << mace.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << mace.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << mace.weaponSpec << " |";
    cout <<"\n| 5.) ";
    generateRapier();
    cout <<" for :" << setw(4) << setfill(' ') << rapier.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << rapier.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << rapier.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << rapier.weaponSpec << " |";
    cout <<"\n| 6.) ";
    generateScimitar();
    cout <<" for :" << setw(4) << setfill(' ') << scimitar.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << scimitar.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << scimitar.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << scimitar.weaponSpec << " |";
    cout <<"\n| 7.) ";
    generateShortBow();
    cout <<" for :" << setw(4) << setfill(' ') << shortbow.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << shortbow.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << shortbow.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << shortbow.weaponSpec << " |";
    cout <<"\n| 8.) ";
    generateStaff();
    cout <<" for :" << setw(4) << setfill(' ') << staff.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << staff.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << staff.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << staff.weaponSpec << " |";
    cout <<"\n| 9.) ";
    generateTwoHandedAxe();
    cout <<" for :" << setw(4) << setfill(' ') << twohandedaxe.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << twohandedaxe.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << twohandedaxe.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << twohandedaxe.weaponSpec << " |";
    cout <<"\n|10.) ";
    generateTwoHandedSword();
    cout <<" for :" << setw(4) << setfill(' ') << twohandedsword.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << twohandedsword.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << twohandedsword.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << twohandedsword.weaponSpec << " |";
    cout <<"\n|11.) Exit                                                                                                             |";
    cout <<"\n|======================================================================================================================|";
    cout <<"\n                                                      Choice:";

    switch (verifyInput(0,12))
    {
        case 1: // Bow
            if (x.gold >= bow.cost)
            {
                x.gold -= bow.cost;
                x.attack = weaponYes + bow.weaponSpec;
                x.weaponType = bow.weaponType;
                x.weaponBuff = bow.weaponbuff;
                x.armorClass =+ 2;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 2: // Daggers
            if (x.gold >= dagger.cost)
            {
                x.gold -= dagger.cost;
                x.attack = weaponYes + dagger.weaponSpec;
                x.weaponType = dagger.weaponType;
                x.weaponBuff = dagger.weaponbuff;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 3: // Longsword
            if (x.gold >= longsword.cost)
            {
                x.gold -= longsword.cost;
                x.attack = weaponYes + longsword.weaponSpec;
                x.weaponType = longsword.weaponType;
                x.weaponBuff = longsword.weaponbuff;
                x.armorClass =+ 2;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 4: // Mace
            if (x.gold >= mace.cost)
            {
                x.gold -= mace.cost;
                x.attack = weaponYes + mace.weaponSpec;
                x.weaponType = mace.weaponType;
                x.weaponBuff = mace.weaponbuff;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 5: // Rapier
            if (x.gold >= rapier.cost)
            {
                x.gold -= rapier.cost;
                x.attack = weaponYes + rapier.weaponSpec;
                x.weaponType = rapier.weaponType;
                x.weaponBuff = rapier.weaponbuff;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 6: // scimitar
            if (x.gold >= scimitar.cost)
            {
                x.gold -= scimitar.cost;
                x.attack = weaponYes + scimitar.weaponSpec;
                x.weaponType = scimitar.weaponType;
                x.weaponBuff = scimitar.weaponbuff;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 7: //shortbow
            if (x.gold >= shortbow.cost)
            {
                x.gold -= shortbow.cost;
                x.attack = weaponYes + shortbow.weaponSpec;
                x.weaponType = shortbow.weaponType;
                x.weaponBuff = shortbow.weaponbuff;
                x.armorClass =+ 3;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;

        case 8: //Staff
            if (x.gold >= staff.cost)
            {
                x.gold -= staff.cost;
                x.attack = weaponYes + staff.weaponSpec;
                x.weaponType = staff.weaponType;
                x.weaponBuff = staff.weaponbuff;
                x.magic=+ 2;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;

        case 9: //2-handed Axe
            if (x.gold >= twohandedaxe.cost)
            {
                x.gold -= twohandedaxe.cost;
                x.attack = weaponYes + twohandedaxe.weaponSpec;
                x.weaponType = twohandedaxe.weaponType;
                x.weaponBuff = twohandedaxe.weaponbuff;
                x.armorClass =- 2;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 10: //twohanded Sword
            if (x.gold >= twohandedsword.cost)
            {
                x.gold -= twohandedsword.cost;
                x.attack = weaponYes + twohandedsword.weaponSpec;
                x.weaponType = twohandedsword.weaponType;
                x.weaponBuff = twohandedsword.weaponbuff;
                x.armorClass =- 2;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 11:
            cont = 1;
            break;
    }
}
    return (x);
}

STAT randomWeaponEasy(STAT x)
{
    bool cont = 0;
    int weaponYes = x.attack - x.weaponSpec;
    weapon mace,dagger,longsword,rapier,scimitar,twohandedsword,twohandedaxe,bow,shortbow,staff;

    mace.weaponbuff = (rand() % 2)+3;
    dagger.weaponbuff = (rand() % 2)+2;
    longsword.weaponbuff = (rand() % 2)+3;
    rapier.weaponbuff = (rand() % 2)+2;
    scimitar.weaponbuff = (rand() % 2)+3;
    twohandedaxe.weaponbuff = (rand() % 2)+5;
    twohandedsword.weaponbuff = (rand() % 2)+4;
    bow.weaponbuff = (rand() % 2)+3;
    shortbow.weaponbuff = (rand() % 2)+2;
    staff.weaponbuff = (rand() % 2)+2;
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

    mace.weaponType = (rand() % 10)+1;
    dagger.weaponType = (rand() % 10)+1;
    longsword.weaponType = (rand() % 10)+1;
    rapier.weaponType = (rand() % 10)+1;
    scimitar.weaponType = (rand() % 10)+1;
    twohandedaxe.weaponType = (rand() % 10)+1;
    twohandedsword.weaponType = (rand() % 10)+1;
    bow.weaponType = (rand() % 10)+1;
    shortbow.weaponType = (rand() % 10)+1;
    staff.weaponType = (rand() % 10)+1;

    mace.weaponSpec = (rand() % 3)+1;
    dagger.weaponSpec = (rand() % 3)+1;
    longsword.weaponSpec  = (rand() % 3)+1;
    rapier.weaponSpec =  (rand() % 3)+1;
    scimitar.weaponSpec  = (rand() % 3)+1;
    twohandedaxe.weaponSpec  = (rand() % 3)+1;
    twohandedsword.weaponSpec  = (rand() % 3)+1;
    bow.weaponSpec =  (rand() % 3)+1;
    shortbow.weaponSpec  = (rand() % 3)+1;
    staff.weaponSpec =  (rand() % 3)+1;

    mace.cost = ((rand() % 50)+200) * mace.weaponbuff;
    dagger.cost = ((rand() % 50)+200) * dagger.weaponbuff;
    longsword.cost = ((rand() % 50)+200) * longsword.weaponbuff;
    rapier.cost = ((rand() % 50)+200) * rapier.weaponbuff;
    scimitar.cost = ((rand() % 50)+200) * scimitar.weaponbuff;
    twohandedaxe.cost = ((rand() % 50)+200) * twohandedaxe.weaponbuff;
    twohandedsword.cost = ((rand() % 50)+200) * twohandedsword.weaponbuff;
    bow.cost = ((rand() % 50)+200) * bow.weaponbuff;
    shortbow.cost = ((rand() % 50)+200) * shortbow.weaponbuff;
    staff.cost = ((rand() % 50)+200) * staff.weaponbuff;

    while (cont == 0)
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|======================================================================================================================|";
    cout <<"\n|                                               Your choices are.....                                                  |";
    cout <<"\n|----------------------------------------------------------------------------------------------------------------------|";
    cout <<"\n|         Current Weapon Type: " <<setw(3) << setfill(' ') << x.weaponType <<"   Current Weapon Spec:" << setw(3) << setfill(' ') << x.weaponSpec <<  "        Weapon Buff: " << setw(3) << setfill(' ') << x.weaponBuff << "          Current Gold: " << setw(7) << setfill(' ') << x.gold << "    |";
    cout <<"\n|----------------------------------------------------------------------------------------------------------------------|";
    cout <<"\n| 1.) ";
    generateBow();
    cout <<" for :" << setw(4) << setfill(' ') << bow.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << bow.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << bow.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << bow.weaponSpec << " |";
    cout <<"\n| 2.) ";
    generateDaggers();
    cout <<" for :" << setw(4) << setfill(' ') << dagger.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << dagger.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << dagger.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << dagger.weaponSpec << " |";
    cout <<"\n| 3.) ";
    generateLongsword();
    cout <<" for :" << setw(4) << setfill(' ') << longsword.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << longsword.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << longsword.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << longsword.weaponSpec << " |";
    cout <<"\n| 4.) ";
    generateMace();
    cout <<" for :" << setw(4) << setfill(' ') << mace.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << mace.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << mace.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << mace.weaponSpec << " |";
    cout <<"\n| 5.) ";
    generateRapier();
    cout <<" for :" << setw(4) << setfill(' ') << rapier.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << rapier.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << rapier.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << rapier.weaponSpec << " |";
    cout <<"\n| 6.) ";
    generateScimitar();
    cout <<" for :" << setw(4) << setfill(' ') << scimitar.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << scimitar.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << scimitar.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << scimitar.weaponSpec << " |";
    cout <<"\n| 7.) ";
    generateShortBow();
    cout <<" for :" << setw(4) << setfill(' ') << shortbow.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << shortbow.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << shortbow.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << shortbow.weaponSpec << " |";
    cout <<"\n| 8.) ";
    generateStaff();
    cout <<" for :" << setw(4) << setfill(' ') << staff.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << staff.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << staff.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << staff.weaponSpec << " |";
    cout <<"\n| 9.) ";
    generateTwoHandedAxe();
    cout <<" for :" << setw(4) << setfill(' ') << twohandedaxe.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << twohandedaxe.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << twohandedaxe.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << twohandedaxe.weaponSpec << " |";
    cout <<"\n|10.) ";
    generateTwoHandedSword();
    cout <<" for :" << setw(4) << setfill(' ') << twohandedsword.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << twohandedsword.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << twohandedsword.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << twohandedsword.weaponSpec << " |";
    cout <<"\n|11.) Exit                                                                                                             |";
    cout <<"\n|======================================================================================================================|";
    cout <<"\n                                                      Choice:";

    switch (verifyInput(0,12))
    {
        case 1: // Bow
            if (x.gold >= bow.cost)
            {
                x.gold -= bow.cost;
                x.attack = weaponYes + bow.weaponSpec;
                x.weaponType = bow.weaponType;
                x.weaponBuff = bow.weaponbuff;
                x.armorClass =+ 2;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 2: // Daggers
            if (x.gold >= dagger.cost)
            {
                x.gold -= dagger.cost;
                x.attack = weaponYes + dagger.weaponSpec;
                x.weaponType = dagger.weaponType;
                x.weaponBuff = dagger.weaponbuff;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 3: // Longsword
            if (x.gold >= longsword.cost)
            {
                x.gold -= longsword.cost;
                x.attack = weaponYes + longsword.weaponSpec;
                x.weaponType = longsword.weaponType;
                x.weaponBuff = longsword.weaponbuff;
                x.armorClass =+ 2;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 4: // Mace
            if (x.gold >= mace.cost)
            {
                x.gold -= mace.cost;
                x.attack = weaponYes + mace.weaponSpec;
                x.weaponType = mace.weaponType;
                x.weaponBuff = mace.weaponbuff;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 5: // Rapier
            if (x.gold >= rapier.cost)
            {
                x.gold -= rapier.cost;
                x.attack = weaponYes + rapier.weaponSpec;
                x.weaponType = rapier.weaponType;
                x.weaponBuff = rapier.weaponbuff;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 6: // scimitar
            if (x.gold >= scimitar.cost)
            {
                x.gold -= scimitar.cost;
                x.attack = weaponYes + scimitar.weaponSpec;
                x.weaponType = scimitar.weaponType;
                x.weaponBuff = scimitar.weaponbuff;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 7: //shortbow
            if (x.gold >= shortbow.cost)
            {
                x.gold -= shortbow.cost;
                x.attack = weaponYes + shortbow.weaponSpec;
                x.weaponType = shortbow.weaponType;
                x.weaponBuff = shortbow.weaponbuff;
                x.armorClass =+ 3;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;

        case 8: //Staff
            if (x.gold >= staff.cost)
            {
                x.gold -= staff.cost;
                x.attack = weaponYes + staff.weaponSpec;
                x.weaponType = staff.weaponType;
                x.weaponBuff = staff.weaponbuff;
                x.magic=+ 2;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;

        case 9: //2-handed Axe
            if (x.gold >= twohandedaxe.cost)
            {
                x.gold -= twohandedaxe.cost;
                x.attack = weaponYes + twohandedaxe.weaponSpec;
                x.weaponType = twohandedaxe.weaponType;
                x.weaponBuff = twohandedaxe.weaponbuff;
                x.armorClass =- 2;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 10: //twohanded Sword
            if (x.gold >= twohandedsword.cost)
            {
                x.gold -= twohandedsword.cost;
                x.attack = weaponYes + twohandedsword.weaponSpec;
                x.weaponType = twohandedsword.weaponType;
                x.weaponBuff = twohandedsword.weaponbuff;
                x.armorClass =- 2;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 11:
            cont = 1;
            break;
    }
}
    return (x);
}

STAT randomWeaponMedium(STAT x)
{
    bool cont = 0;
    int weaponYes = x.attack - x.weaponSpec;
    weapon mace,dagger,longsword,rapier,scimitar,twohandedsword,twohandedaxe,bow,shortbow,staff;

    mace.weaponbuff = (rand() % 4)+3;
    dagger.weaponbuff = (rand() % 4)+2;
    longsword.weaponbuff = (rand() % 4)+3;
    rapier.weaponbuff = (rand() % 4)+2;
    scimitar.weaponbuff = (rand() % 4)+3;
    twohandedaxe.weaponbuff = (rand() % 4)+5;
    twohandedsword.weaponbuff = (rand() % 4)+4;
    bow.weaponbuff = (rand() % 4)+3;
    shortbow.weaponbuff = (rand() % 4)+2;
    staff.weaponbuff = (rand() % 4)+2;
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

    mace.weaponType = (rand() % 20)+1;
    dagger.weaponType = (rand() % 20)+1;
    longsword.weaponType = (rand() % 20)+1;
    rapier.weaponType = (rand() % 20)+1;
    scimitar.weaponType = (rand() % 20)+1;
    twohandedaxe.weaponType = (rand() % 20)+1;
    twohandedsword.weaponType = (rand() % 20)+1;
    bow.weaponType = (rand() % 20)+1;
    shortbow.weaponType = (rand() % 20)+1;
    staff.weaponType = (rand() % 20)+1;

    mace.weaponSpec = (rand() % 5)+1;
    dagger.weaponSpec = (rand() % 5)+1;
    longsword.weaponSpec  = (rand() % 5)+1;
    rapier.weaponSpec =  (rand() % 5)+1;
    scimitar.weaponSpec  = (rand() % 5)+1;
    twohandedaxe.weaponSpec  = (rand() % 5)+1;
    twohandedsword.weaponSpec  = (rand() % 5)+1;
    bow.weaponSpec =  (rand() % 5)+1;
    shortbow.weaponSpec  = (rand() % 5)+1;
    staff.weaponSpec =  (rand() % 5)+1;

    mace.cost = ((rand() % 50)+250) * mace.weaponbuff;
    dagger.cost = ((rand() % 50)+250) * dagger.weaponbuff;
    longsword.cost = ((rand() % 50)+250) * longsword.weaponbuff;
    rapier.cost = ((rand() % 50)+250) * rapier.weaponbuff;
    scimitar.cost = ((rand() % 50)+250) * scimitar.weaponbuff;
    twohandedaxe.cost = ((rand() % 50)+250) * twohandedaxe.weaponbuff;
    twohandedsword.cost = ((rand() % 50)+250) * twohandedsword.weaponbuff;
    bow.cost = ((rand() % 50)+250) * bow.weaponbuff;
    shortbow.cost = ((rand() % 50)+250) * shortbow.weaponbuff;
    staff.cost = ((rand() % 50)+250) * staff.weaponbuff;

    while (cont == 0)
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|======================================================================================================================|";
    cout <<"\n|                                               Your choices are.....                                                  |";
    cout <<"\n|----------------------------------------------------------------------------------------------------------------------|";
    cout <<"\n|         Current Weapon Type: " <<setw(3) << setfill(' ') << x.weaponType <<"   Current Weapon Spec:" << setw(3) << setfill(' ') << x.weaponSpec <<  "        Weapon Buff: " << setw(3) << setfill(' ') << x.weaponBuff << "          Current Gold: " << setw(7) << setfill(' ') << x.gold << "    |";
    cout <<"\n|----------------------------------------------------------------------------------------------------------------------|";
    cout <<"\n| 1.) ";
    generateBow();
    cout <<" for :" << setw(4) << setfill(' ') << bow.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << bow.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << bow.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << bow.weaponSpec << " |";
    cout <<"\n| 2.) ";
    generateDaggers();
    cout <<" for :" << setw(4) << setfill(' ') << dagger.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << dagger.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << dagger.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << dagger.weaponSpec << " |";
    cout <<"\n| 3.) ";
    generateLongsword();
    cout <<" for :" << setw(4) << setfill(' ') << longsword.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << longsword.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << longsword.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << longsword.weaponSpec << " |";
    cout <<"\n| 4.) ";
    generateMace();
    cout <<" for :" << setw(4) << setfill(' ') << mace.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << mace.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << mace.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << mace.weaponSpec << " |";
    cout <<"\n| 5.) ";
    generateRapier();
    cout <<" for :" << setw(4) << setfill(' ') << rapier.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << rapier.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << rapier.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << rapier.weaponSpec << " |";
    cout <<"\n| 6.) ";
    generateScimitar();
    cout <<" for :" << setw(4) << setfill(' ') << scimitar.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << scimitar.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << scimitar.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << scimitar.weaponSpec << " |";
    cout <<"\n| 7.) ";
    generateShortBow();
    cout <<" for :" << setw(4) << setfill(' ') << shortbow.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << shortbow.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << shortbow.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << shortbow.weaponSpec << " |";
    cout <<"\n| 8.) ";
    generateStaff();
    cout <<" for :" << setw(4) << setfill(' ') << staff.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << staff.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << staff.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << staff.weaponSpec << " |";
    cout <<"\n| 9.) ";
    generateTwoHandedAxe();
    cout <<" for :" << setw(4) << setfill(' ') << twohandedaxe.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << twohandedaxe.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << twohandedaxe.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << twohandedaxe.weaponSpec << " |";
    cout <<"\n|10.) ";
    generateTwoHandedSword();
    cout <<" for :" << setw(4) << setfill(' ') << twohandedsword.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << twohandedsword.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << twohandedsword.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << twohandedsword.weaponSpec << " |";
    cout <<"\n|11.) Exit                                                                                                             |";
    cout <<"\n|======================================================================================================================|";
    cout <<"\n                                                      Choice:";

    switch (verifyInput(0,12))
    {
        case 1: // Bow
            if (x.gold >= bow.cost)
            {
                x.gold -= bow.cost;
                x.attack = weaponYes + bow.weaponSpec;
                x.weaponType = bow.weaponType;
                x.weaponBuff = bow.weaponbuff;
                x.armorClass =+ 2;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 2: // Daggers
            if (x.gold >= dagger.cost)
            {
                x.gold -= dagger.cost;
                x.attack = weaponYes + dagger.weaponSpec;
                x.weaponType = dagger.weaponType;
                x.weaponBuff = dagger.weaponbuff;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 3: // Longsword
            if (x.gold >= longsword.cost)
            {
                x.gold -= longsword.cost;
                x.attack = weaponYes + longsword.weaponSpec;
                x.weaponType = longsword.weaponType;
                x.weaponBuff = longsword.weaponbuff;
                x.armorClass =+ 2;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 4: // Mace
            if (x.gold >= mace.cost)
            {
                x.gold -= mace.cost;
                x.attack = weaponYes + mace.weaponSpec;
                x.weaponType = mace.weaponType;
                x.weaponBuff = mace.weaponbuff;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 5: // Rapier
            if (x.gold >= rapier.cost)
            {
                x.gold -= rapier.cost;
                x.attack = weaponYes + rapier.weaponSpec;
                x.weaponType = rapier.weaponType;
                x.weaponBuff = rapier.weaponbuff;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 6: // scimitar
            if (x.gold >= scimitar.cost)
            {
                x.gold -= scimitar.cost;
                x.attack = weaponYes + scimitar.weaponSpec;
                x.weaponType = scimitar.weaponType;
                x.weaponBuff = scimitar.weaponbuff;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 7: //shortbow
            if (x.gold >= shortbow.cost)
            {
                x.gold -= shortbow.cost;
                x.attack = weaponYes + shortbow.weaponSpec;
                x.weaponType = shortbow.weaponType;
                x.weaponBuff = shortbow.weaponbuff;
                x.armorClass =+ 3;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;

        case 8: //Staff
            if (x.gold >= staff.cost)
            {
                x.gold -= staff.cost;
                x.attack = weaponYes + staff.weaponSpec;
                x.weaponType = staff.weaponType;
                x.weaponBuff = staff.weaponbuff;
                x.magic=+ 2;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;

        case 9: //2-handed Axe
            if (x.gold >= twohandedaxe.cost)
            {
                x.gold -= twohandedaxe.cost;
                x.attack = weaponYes + twohandedaxe.weaponSpec;
                x.weaponType = twohandedaxe.weaponType;
                x.weaponBuff = twohandedaxe.weaponbuff;
                x.armorClass =- 2;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 10: //twohanded Sword
            if (x.gold >= twohandedsword.cost)
            {
                x.gold -= twohandedsword.cost;
                x.attack = weaponYes + twohandedsword.weaponSpec;
                x.weaponType = twohandedsword.weaponType;
                x.weaponBuff = twohandedsword.weaponbuff;
                x.armorClass =- 2;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 11:
            cont = 1;
            break;
    }
}
    return (x);
}

STAT randomWeaponHard(STAT x)
{
    bool cont = 0;
    int weaponYes = x.attack - x.weaponSpec;
    weapon mace,dagger,longsword,rapier,scimitar,twohandedsword,twohandedaxe,bow,shortbow,staff;

    mace.weaponbuff = (rand() % 6)+3;
    dagger.weaponbuff = (rand() % 6)+2;
    longsword.weaponbuff = (rand() % 6)+3;
    rapier.weaponbuff = (rand() % 6)+2;
    scimitar.weaponbuff = (rand() % 6)+3;
    twohandedaxe.weaponbuff = (rand() % 6)+5;
    twohandedsword.weaponbuff = (rand() % 6)+4;
    bow.weaponbuff = (rand() % 6)+3;
    shortbow.weaponbuff = (rand() % 6)+2;
    staff.weaponbuff = (rand() % 6)+2;
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

    mace.weaponType = (rand() % 25)+1;
    dagger.weaponType = (rand() % 25)+1;
    longsword.weaponType = (rand() % 25)+1;
    rapier.weaponType = (rand() % 25)+1;
    scimitar.weaponType = (rand() % 25)+1;
    twohandedaxe.weaponType = (rand() % 25)+1;
    twohandedsword.weaponType = (rand() % 25)+1;
    bow.weaponType = (rand() % 25)+1;
    shortbow.weaponType = (rand() % 25)+1;
    staff.weaponType = (rand() % 25)+1;

    mace.weaponSpec = (rand() % 7)+1;
    dagger.weaponSpec = (rand() % 7)+1;
    longsword.weaponSpec  = (rand() % 7)+1;
    rapier.weaponSpec =  (rand() % 7)+1;
    scimitar.weaponSpec  = (rand() % 7)+1;
    twohandedaxe.weaponSpec  = (rand() % 7)+1;
    twohandedsword.weaponSpec  = (rand() % 7)+1;
    bow.weaponSpec =  (rand() % 7)+1;
    shortbow.weaponSpec  = (rand() % 7)+1;
    staff.weaponSpec =  (rand() % 7)+1;

    mace.cost = ((rand() % 50)+300) * mace.weaponbuff;
    dagger.cost = ((rand() % 50)+300) * dagger.weaponbuff;
    longsword.cost = ((rand() % 50)+300) * longsword.weaponbuff;
    rapier.cost = ((rand() % 50)+300) * rapier.weaponbuff;
    scimitar.cost = ((rand() % 50)+300) * scimitar.weaponbuff;
    twohandedaxe.cost = ((rand() % 50)+300) * twohandedaxe.weaponbuff;
    twohandedsword.cost = ((rand() % 50)+300) * twohandedsword.weaponbuff;
    bow.cost = ((rand() % 50)+300) * bow.weaponbuff;
    shortbow.cost = ((rand() % 50)+300) * shortbow.weaponbuff;
    staff.cost = ((rand() % 50)+300) * staff.weaponbuff;

    while (cont == 0)
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|======================================================================================================================|";
    cout <<"\n|                                               Your choices are.....                                                  |";
    cout <<"\n|----------------------------------------------------------------------------------------------------------------------|";
    cout <<"\n|         Current Weapon Type: " <<setw(3) << setfill(' ') << x.weaponType <<"   Current Weapon Spec:" << setw(3) << setfill(' ') << x.weaponSpec <<  "        Weapon Buff: " << setw(3) << setfill(' ') << x.weaponBuff << "          Current Gold: " << setw(7) << setfill(' ') << x.gold << "    |";
    cout <<"\n|----------------------------------------------------------------------------------------------------------------------|";
    cout <<"\n| 1.) ";
    generateBow();
    cout <<" for :" << setw(4) << setfill(' ') << bow.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << bow.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << bow.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << bow.weaponSpec << " |";
    cout <<"\n| 2.) ";
    generateDaggers();
    cout <<" for :" << setw(4) << setfill(' ') << dagger.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << dagger.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << dagger.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << dagger.weaponSpec << " |";
    cout <<"\n| 3.) ";
    generateLongsword();
    cout <<" for :" << setw(4) << setfill(' ') << longsword.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << longsword.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << longsword.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << longsword.weaponSpec << " |";
    cout <<"\n| 4.) ";
    generateMace();
    cout <<" for :" << setw(4) << setfill(' ') << mace.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << mace.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << mace.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << mace.weaponSpec << " |";
    cout <<"\n| 5.) ";
    generateRapier();
    cout <<" for :" << setw(4) << setfill(' ') << rapier.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << rapier.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << rapier.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << rapier.weaponSpec << " |";
    cout <<"\n| 6.) ";
    generateScimitar();
    cout <<" for :" << setw(4) << setfill(' ') << scimitar.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << scimitar.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << scimitar.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << scimitar.weaponSpec << " |";
    cout <<"\n| 7.) ";
    generateShortBow();
    cout <<" for :" << setw(4) << setfill(' ') << shortbow.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << shortbow.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << shortbow.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << shortbow.weaponSpec << " |";
    cout <<"\n| 8.) ";
    generateStaff();
    cout <<" for :" << setw(4) << setfill(' ') << staff.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << staff.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << staff.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << staff.weaponSpec << " |";
    cout <<"\n| 9.) ";
    generateTwoHandedAxe();
    cout <<" for :" << setw(4) << setfill(' ') << twohandedaxe.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << twohandedaxe.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << twohandedaxe.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << twohandedaxe.weaponSpec << " |";
    cout <<"\n|10.) ";
    generateTwoHandedSword();
    cout <<" for :" << setw(4) << setfill(' ') << twohandedsword.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << twohandedsword.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << twohandedsword.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << twohandedsword.weaponSpec << " |";
    cout <<"\n|11.) Exit                                                                                                             |";
    cout <<"\n|======================================================================================================================|";
    cout <<"\n                                                      Choice:";

    switch (verifyInput(0,12))
    {
        case 1: // Bow
            if (x.gold >= bow.cost)
            {
                x.gold -= bow.cost;
                x.attack = weaponYes + bow.weaponSpec;
                x.weaponType = bow.weaponType;
                x.weaponBuff = bow.weaponbuff;
                x.armorClass =+ 2;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 2: // Daggers
            if (x.gold >= dagger.cost)
            {
                x.gold -= dagger.cost;
                x.attack = weaponYes + dagger.weaponSpec;
                x.weaponType = dagger.weaponType;
                x.weaponBuff = dagger.weaponbuff;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 3: // Longsword
            if (x.gold >= longsword.cost)
            {
                x.gold -= longsword.cost;
                x.attack = weaponYes + longsword.weaponSpec;
                x.weaponType = longsword.weaponType;
                x.weaponBuff = longsword.weaponbuff;
                x.armorClass =+ 2;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 4: // Mace
            if (x.gold >= mace.cost)
            {
                x.gold -= mace.cost;
                x.attack = weaponYes + mace.weaponSpec;
                x.weaponType = mace.weaponType;
                x.weaponBuff = mace.weaponbuff;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 5: // Rapier
            if (x.gold >= rapier.cost)
            {
                x.gold -= rapier.cost;
                x.attack = weaponYes + rapier.weaponSpec;
                x.weaponType = rapier.weaponType;
                x.weaponBuff = rapier.weaponbuff;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 6: // scimitar
            if (x.gold >= scimitar.cost)
            {
                x.gold -= scimitar.cost;
                x.attack = weaponYes + scimitar.weaponSpec;
                x.weaponType = scimitar.weaponType;
                x.weaponBuff = scimitar.weaponbuff;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 7: //shortbow
            if (x.gold >= shortbow.cost)
            {
                x.gold -= shortbow.cost;
                x.attack = weaponYes + shortbow.weaponSpec;
                x.weaponType = shortbow.weaponType;
                x.weaponBuff = shortbow.weaponbuff;
                x.armorClass =+ 3;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;

        case 8: //Staff
            if (x.gold >= staff.cost)
            {
                x.gold -= staff.cost;
                x.attack = weaponYes + staff.weaponSpec;
                x.weaponType = staff.weaponType;
                x.weaponBuff = staff.weaponbuff;
                x.magic=+ 2;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;

        case 9: //2-handed Axe
            if (x.gold >= twohandedaxe.cost)
            {
                x.gold -= twohandedaxe.cost;
                x.attack = weaponYes + twohandedaxe.weaponSpec;
                x.weaponType = twohandedaxe.weaponType;
                x.weaponBuff = twohandedaxe.weaponbuff;
                x.armorClass =- 2;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 10: //twohanded Sword
            if (x.gold >= twohandedsword.cost)
            {
                x.gold -= twohandedsword.cost;
                x.attack = weaponYes + twohandedsword.weaponSpec;
                x.weaponType = twohandedsword.weaponType;
                x.weaponBuff = twohandedsword.weaponbuff;
                x.armorClass =- 2;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 11:
            cont = 1;
            break;
    }
}
    return (x);
}

STAT INeedHealing(STAT x)
{
    bool cont = 0;
    int healthwithMod;
    while (cont == 0 )
    {
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|                     Act II - Healing                          |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|         'Welcome to the Clerics Guild my son/daughter.'       |";
    cout <<"\n|        A ";
    generateNameWorkers();
    cout << " greets you at the door.        |";
    cout <<"\n|===============================================================|";
    cout <<"\n|            Here, you can get healed at varying rates          |";
    cout <<"\n|===============================================================|";
    cout <<"\n|     Current HP: " << setw(10) << setfill(' ') << x.healthPoints << "    /" << setw(10) << setfill(' ') << x.maxHealth << "                     |";
    cout <<"\n|                 Current Gold:" << setw(10) << setfill(' ') << x.gold << " gp                    |";
    cout <<"\n|===============================================================|";
    cout <<"\n|  1.) Small Healing ( +5 HP) for 50gp                          |";
    cout <<"\n|  2.) Medium Healing ( +10 HP) for 75gp                        |";
    cout <<"\n|  3.) Large Healing ( +30 HP) for 150gp                        |";
    cout <<"\n|  4.) Extra Healing ( +75 HP) for 250gp                        |";
    cout <<"\n|  5.) Extreme Healing ( +150 HP) for 500gp                     |";
    cout <<"\n|  6.) Full Heal (Heals to full HP) for 3000gp                  |";
    cout <<"\n|  7.) Buy HP Potion (100gp)                                    |";
    cout <<"\n|  8.) Buy MP Potion (100gp)                                    |";
    cout <<"\n|  9.) Exit                                                     |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n                         Choice: ";
        switch(verifyInput(0,10))
        {
        case 1: // small healing +5hp
            if (x.gold >= 50)
            {
                healthwithMod = x.healthPoints + 5;
                x.gold -= 50;
                if (healthwithMod >= x.maxHealth)
                {
                    x.healthPoints = x.maxHealth;
                    cout <<"\nHealing to full health\n";
                    system("pause");
                }
                else
                {
                    x.healthPoints += 5;
                    cout <<"\nHealing 5HP\n";
                    system("pause");
                }
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 2: //  75gp medium healing +10hp
            if (x.gold >= 75)
            {
                healthwithMod = x.healthPoints + 10;
                x.gold -= 75;
                if (healthwithMod >= x.maxHealth)
                {
                    x.healthPoints = x.maxHealth;
                    cout <<"\nHealing to full health\n";
                    system("pause");
                }
                else
                {
                    x.healthPoints += 10;
                    cout <<"\nHealing 10HP\n";
                    system("pause");
                }
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 3: //  150gp Large healing +30hp
            if (x.gold >= 150)
            {
                healthwithMod = x.healthPoints + 30;
                if (healthwithMod >= x.maxHealth)
                {
                    x.healthPoints = x.maxHealth;
                    x.gold -= 150;
                    cout <<"\nHealing to full health\n";
                    system("pause");
                }
                else
                {
                    x.healthPoints += 30;
                    cout <<"\nHealing 30HP\n";
                    system("pause");
                }
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 4: //  250gp medium healing +75hp
            if (x.gold >= 250)
            {
                healthwithMod = x.healthPoints + 75;
                x.gold -= 250;
                if (healthwithMod >= x.maxHealth)
                {
                    x.healthPoints = x.maxHealth;
                    cout <<"\nHealing to full health\n";
                    system("pause");
                }
                else
                {
                    x.healthPoints += 75;
                    cout <<"\nHealing 75HP\n";
                    system("pause");
                }
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 5: //  500gp medium healing +150hp
            if (x.gold >= 500)
            {
                healthwithMod = x.healthPoints + 150;
                x.gold -= 500;
                if (healthwithMod >= x.maxHealth)
                {
                    x.healthPoints = x.maxHealth;
                    cout <<"\nHealing to full health\n";
                    system("pause");
                }
                else
                {
                    x.healthPoints += 150;
                    cout <<"\nHealing 150HP\n";
                    system("pause");
                }
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 6: //  5000gp medium healing
            if (x.gold >= 5000)
            {
                    x.healthPoints = x.maxHealth;
                    x.gold -= 5000;
                    cout <<"\nHealing to full health\n";
                    system("pause");
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 7: // hp poy
            if (x.gold >= 100)
            {
                x.gold = x.gold - 100;
                x.HPots++;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 8: // buy mp pot
            if (x.gold >= 100)
            {
                x.gold = x.gold - 100;
                x.MPots++;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 9: // exit
            cont = 1;
            break;
        }

    }
    return x;
}
STAT RoyalInn(STAT x)
{
    int healthwithMod;
    int MPwithMod;
    int yuppers = x.Act * 30;
    bool cont = 0;
    while ( cont == 0)
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|                           INN                                 |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|              'Welcome to the Leaky Lizard'                    |";
    cout <<"\n|      A rugged human greets you at the door and you enter.     |";
    cout <<"\n|===============================================================|";
    cout <<"\n|            Here is the price to sleep in the inn              |";
    cout <<"\n|===============================================================|";
    cout <<"\n|     Current HP: " << setw(10) << setfill(' ') << x.healthPoints << "    /" << setw(10) << setfill(' ') << x.maxHealth << "                     |";
    cout <<"\n|     Current MP: " << setw(10) << setfill(' ') << x.manaPoints << "    /" << setw(10) << setfill(' ') << x.maxMana << "                     |";
    cout <<"\n|                 Current Gold:" << setw(10) << setfill(' ') << x.gold << " gp                    |";
    cout <<"\n|===============================================================|";
    cout <<"\n|                                                               |";
    cout <<"\n|  1.) Sleep in the inn. (";
    cout << setw(3) << setfill(' ') << yuppers;
    cout << " gp) (+10hp, +10mp)                |";
    cout <<"\n|                                                               |";
    cout <<"\n|  2.) Leave                                                    |";
    cout <<"\n|===============================================================|";
    cout <<"\n                          Choice: ";


    switch(verifyInput(0,3))
    {
    case 1: //SleepyTime
        if (x.gold >= (yuppers))
            {
                healthwithMod = x.healthPoints + 10;
                x.gold = x.gold - yuppers;
                if (healthwithMod >= x.maxHealth)
                {
                    x.healthPoints = x.maxHealth;
                    cout <<"\nHealing to full health\n";
                    system("pause");
                }
                else
                {
                    x.healthPoints += 10;
                    cout <<"\nHealing 10HP\n";
                    system("pause");
                }
                MPwithMod = x.manaPoints + 10;
                if(MPwithMod >= x.maxMana)
                {
                    x.manaPoints = x.maxMana;
                    cout <<"\nHealing to full mana\n";
                    system("pause");
                }
                else
                {
                    x.manaPoints += 10;
                    cout <<"\nHealing 10MP\n";
                    system("pause");
                }
                }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
    case 2:
        cont = 1;
        break;

    }
}
 return x;
}
STAT randomWeaponExtreme(STAT x)
{
    bool cont = 0;
    int yaBoughtIt = 0;
    int weaponYes = x.attack - x.weaponSpec;
    weapon mace,dagger,longsword,rapier,scimitar,twohandedsword,twohandedaxe,bow,shortbow,staff;

    mace.weaponbuff = (rand() % 7)+3;
    dagger.weaponbuff = (rand() % 7)+2;
    longsword.weaponbuff = (rand() % 7)+3;
    rapier.weaponbuff = (rand() % 7)+2;
    scimitar.weaponbuff = (rand() % 7)+3;
    twohandedaxe.weaponbuff = (rand() % 7)+5;
    twohandedsword.weaponbuff = (rand() % 7)+4;
    bow.weaponbuff = (rand() % 7)+3;
    shortbow.weaponbuff = (rand() % 7)+2;
    staff.weaponbuff = (rand() % 7)+2;
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

    mace.weaponType = (rand() % 60)+1;
    dagger.weaponType = (rand() % 60)+1;
    longsword.weaponType = (rand() % 60)+1;
    rapier.weaponType = (rand() % 60)+1;
    scimitar.weaponType = (rand() % 60)+1;
    twohandedaxe.weaponType = (rand() % 60)+1;
    twohandedsword.weaponType = (rand() % 60)+1;
    bow.weaponType = (rand() % 60)+1;
    shortbow.weaponType = (rand() % 60)+1;
    staff.weaponType = (rand() % 60)+1;

    mace.weaponSpec = (rand() % 10)+1;
    dagger.weaponSpec = (rand() % 10)+1;
    longsword.weaponSpec  = (rand() % 10)+1;
    rapier.weaponSpec =  (rand() % 10)+1;
    scimitar.weaponSpec  = (rand() % 10)+1;
    twohandedaxe.weaponSpec  = (rand() % 10)+1;
    twohandedsword.weaponSpec  = (rand() % 10)+1;
    bow.weaponSpec =  (rand() % 10)+1;
    shortbow.weaponSpec  = (rand() % 10)+1;
    staff.weaponSpec =  (rand() % 10)+1;

    mace.cost = ((rand() % 100)+300) * mace.weaponbuff;
    dagger.cost = ((rand() % 100)+300) * dagger.weaponbuff;
    longsword.cost = ((rand() % 100)+300) * longsword.weaponbuff;
    rapier.cost = ((rand() % 100)+300) * rapier.weaponbuff;
    scimitar.cost = ((rand() % 100)+300) * scimitar.weaponbuff;
    twohandedaxe.cost = ((rand() % 100)+300) * twohandedaxe.weaponbuff;
    twohandedsword.cost = ((rand() % 100)+300) * twohandedsword.weaponbuff;
    bow.cost = ((rand() % 100)+300) * bow.weaponbuff;
    shortbow.cost = ((rand() % 100)+300) * shortbow.weaponbuff;
    staff.cost = ((rand() % 100)+300) * staff.weaponbuff;

    while (cont == 0)
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|======================================================================================================================|";
    cout <<"\n|                                               Your choices are.....                                                  |";
    cout <<"\n|----------------------------------------------------------------------------------------------------------------------|";
    cout <<"\n|         Current Weapon Type: " <<setw(3) << setfill(' ') << x.weaponType <<"   Current Weapon Spec:" << setw(3) << setfill(' ') << x.weaponSpec <<  "        Weapon Buff: " << setw(3) << setfill(' ') << x.weaponBuff << "          Current Gold: " << setw(7) << setfill(' ') << x.gold << "    |";
    cout <<"\n|----------------------------------------------------------------------------------------------------------------------|";
    cout <<"\n| 1.) ";
    generateBow();
    cout <<" for :" << setw(4) << setfill(' ') << bow.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << bow.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << bow.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << bow.weaponSpec << " |";
    cout <<"\n| 2.) ";
    generateDaggers();
    cout <<" for :" << setw(4) << setfill(' ') << dagger.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << dagger.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << dagger.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << dagger.weaponSpec << " |";
    cout <<"\n| 3.) ";
    generateLongsword();
    cout <<" for :" << setw(4) << setfill(' ') << longsword.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << longsword.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << longsword.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << longsword.weaponSpec << " |";
    cout <<"\n| 4.) ";
    generateMace();
    cout <<" for :" << setw(4) << setfill(' ') << mace.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << mace.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << mace.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << mace.weaponSpec << " |";
    cout <<"\n| 5.) ";
    generateRapier();
    cout <<" for :" << setw(4) << setfill(' ') << rapier.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << rapier.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << rapier.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << rapier.weaponSpec << " |";
    cout <<"\n| 6.) ";
    generateScimitar();
    cout <<" for :" << setw(4) << setfill(' ') << scimitar.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << scimitar.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << scimitar.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << scimitar.weaponSpec << " |";
    cout <<"\n| 7.) ";
    generateShortBow();
    cout <<" for :" << setw(4) << setfill(' ') << shortbow.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << shortbow.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << shortbow.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << shortbow.weaponSpec << " |";
    cout <<"\n| 8.) ";
    generateStaff();
    cout <<" for :" << setw(4) << setfill(' ') << staff.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << staff.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << staff.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << staff.weaponSpec << " |";
    cout <<"\n| 9.) ";
    generateTwoHandedAxe();
    cout <<" for :" << setw(4) << setfill(' ') << twohandedaxe.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << twohandedaxe.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << twohandedaxe.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << twohandedaxe.weaponSpec << " |";
    cout <<"\n|10.) ";
    generateTwoHandedSword();
    cout <<" for :" << setw(4) << setfill(' ') << twohandedsword.cost << "        Weapon Buff: " << setw(3) << setfill(' ') << twohandedsword.weaponbuff << "   Weapon Type: " << setw(3) << setfill(' ') << twohandedsword.weaponType<<"    Weapon Spec: " << setw(3) << setfill(' ') << twohandedsword.weaponSpec << " |";
    cout <<"\n|11.) Exit                                                                                                             |";
    cout <<"\n|======================================================================================================================|";
    cout <<"\n                                                      Choice:";

    switch (verifyInput(0,12))
    {
        case 1: // Bow
            if (x.gold >= bow.cost)
            {
                x.gold -= bow.cost;
                x.attack = weaponYes + bow.weaponSpec;
                x.weaponType = bow.weaponType;
                x.weaponBuff = bow.weaponbuff;
                x.armorClass =+ 2;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 2: // Daggers
            if (x.gold >= dagger.cost)
            {
                x.gold -= dagger.cost;
                x.attack = weaponYes + dagger.weaponSpec;
                x.weaponType = dagger.weaponType;
                x.weaponBuff = dagger.weaponbuff;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 3: // Longsword
            if (x.gold >= longsword.cost)
            {
                x.gold -= longsword.cost;
                x.attack = weaponYes + longsword.weaponSpec;
                x.weaponType = longsword.weaponType;
                x.weaponBuff = longsword.weaponbuff;
                x.armorClass =+ 2;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 4: // Mace
            if (x.gold >= mace.cost)
            {
                x.gold -= mace.cost;
                x.attack = weaponYes + mace.weaponSpec;
                x.weaponType = mace.weaponType;
                x.weaponBuff = mace.weaponbuff;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 5: // Rapier
            if (x.gold >= rapier.cost)
            {
                x.gold -= rapier.cost;
                x.attack = weaponYes + rapier.weaponSpec;
                x.weaponType = rapier.weaponType;
                x.weaponBuff = rapier.weaponbuff;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 6: // scimitar
            if (x.gold >= scimitar.cost)
            {
                x.gold -= scimitar.cost;
                x.attack = weaponYes + scimitar.weaponSpec;
                x.weaponType = scimitar.weaponType;
                x.weaponBuff = scimitar.weaponbuff;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 7: //shortbow
            if (x.gold >= shortbow.cost)
            {
                x.gold -= shortbow.cost;
                x.attack = weaponYes + shortbow.weaponSpec;
                x.weaponType = shortbow.weaponType;
                x.weaponBuff = shortbow.weaponbuff;
                x.armorClass =+ 3;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;

        case 8: //Staff
            if (x.gold >= staff.cost)
            {
                x.gold -= staff.cost;
                x.attack = weaponYes + staff.weaponSpec;
                x.weaponType = staff.weaponType;
                x.weaponBuff = staff.weaponbuff;
                x.magic=+ 2;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;

        case 9: //2-handed Axe
            if (x.gold >= twohandedaxe.cost)
            {
                x.gold -= twohandedaxe.cost;
                x.attack = weaponYes + twohandedaxe.weaponSpec;
                x.weaponType = twohandedaxe.weaponType;
                x.weaponBuff = twohandedaxe.weaponbuff;
                x.armorClass =- 2;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 10: //twohanded Sword
            if (x.gold >= twohandedsword.cost)
            {
                x.gold -= twohandedsword.cost;
                x.attack = weaponYes + twohandedsword.weaponSpec;
                x.weaponType = twohandedsword.weaponType;
                x.weaponBuff = twohandedsword.weaponbuff;
                x.armorClass =- 2;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 11:
            cont = 1;
            break;
    }
}
    return (x);
}

STAT randomItemSuperEasy(STAT x)
{
    bool cont = 0;
    int yaBoughtIt = 0;
    int armorYes = x.armorClass - 5 - (x.dexterity/4);
    armor x1,x2,x3,x4,x5,x6,x7;

    x1.armorBuffPlus = (rand() % 2)+1;
    x2.armorBuffPlus = (rand() % 2)+1;
    x3.armorBuffPlus = (rand() % 2)+1;
    x4.armorBuffPlus = (rand() % 2)+1;
    x5.armorBuffPlus = (rand() % 2)+1;
    x6.armorBuffPlus = (rand() % 2)+1;
    x7.armorBuffPlus = (rand() % 2)+1;

    //light armor = 4
    //medium armor = 5
    //heavy armor = 6
    x1.armorClassPlus = (rand() %4)+1;//light
    x2.armorClassPlus = (rand() %4)+1;//light
    x3.armorClassPlus = (rand() %5)+1;//medium
    x4.armorClassPlus = (rand() %5)+1;//medium
    x5.armorClassPlus = (rand() %6)+1;//heavy
    x6.armorClassPlus = (rand() %6)+1;//heavy
    x7.armorClassPlus = (rand() %6)+1;//heavy

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
    cout <<"\n|===================================================================================================|";
    cout <<"\n|                                   Your choices are.....                                           |";
    cout <<"\n|---------------------------------------------------------------------------------------------------|";
    cout <<"\n|          Current Armor: " <<setw(3) << setfill(' ') << armorYes << "               Armor Buff: " << setw(3) << setfill(' ') << x.armorBuff << "          Current Gold: " << setw(5) << setfill(' ') << x.gold << "            |";
    cout <<"\n|---------------------------------------------------------------------------------------------------|";
    cout <<"\n| 1.) ";
    generateLightArmor();
    cout <<" for :" << setw(4) << setfill(' ') << x1.cost << "        Armor: " << setw(3) << setfill(' ') << x1.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') << x1.armorBuffPlus<< " |";
    cout <<"\n| 2.) ";
    generateLightArmor();
    cout <<" for :" << setw(4) << setfill(' ') << x2.cost << "        Armor: " << setw(3) << setfill(' ') << x2.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') << x2.armorBuffPlus<< " |";
    cout <<"\n| 3.) ";
    generateMediumArmor();
    cout << " for :" << setw(4) << setfill(' ') << x3.cost << "        Armor: " << setw(3) << setfill(' ') << x3.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') <<x3.armorBuffPlus<< " |";
    cout <<"\n| 4.) ";
    generateMediumArmor();
    cout << " for :" << setw(4) << setfill(' ') << x4.cost << "        Armor: " << setw(3) << setfill(' ') << x4.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') <<x4.armorBuffPlus<< " |";
    cout <<"\n| 5.) ";
    generateHeavyArmor();
    cout <<" for :" << setw(4) << setfill(' ') << x5.cost << "        Armor: " << setw(3) << setfill(' ') << x5.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') <<x5.armorBuffPlus<< " |";
    cout <<"\n| 6.) ";
    generateHeavyArmor();
    cout <<" for :" << setw(4) << setfill(' ') << x6.cost << "        Armor: " << setw(3) << setfill(' ') << x6.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') <<x6.armorBuffPlus<< " |";
    cout <<"\n| 7.) ";
    generateHeavyArmor();
    cout <<" for :" << setw(4) << setfill(' ') << x7.cost << "        Armor: " << setw(3) << setfill(' ') << x7.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') <<x7.armorBuffPlus<< " |";
    cout <<"\n| 8.) Exit                                                                                          |";
    cout <<"\n|===================================================================================================|";
    cout <<"\n                                          Choice:";

    switch (verifyInput(0,9))
    {
        case 1: // 1st option
            if (x.gold >= x1.cost)
            {
                x.gold -= x1.cost;
                x.armorClass = x1.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x1.armorBuffPlus;
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
                x.armorClass = x2.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x2.armorBuffPlus;
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
                x.armorClass = x3.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x3.armorBuffPlus;
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
                x.armorClass = x4.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x4.armorBuffPlus;
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
                x.armorClass = x5.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x5.armorBuffPlus;
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
                x.armorClass = x6.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x6.armorBuffPlus;
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
                x.armorClass = x7.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x7.armorBuffPlus;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 8:
            cont = 1;
            break;
    }
}
    return (x);


}

STAT randomItemEasy(STAT x)
{
    bool cont = 0;
    int yaBoughtIt = 0;
    int armorYes = x.armorClass - 5 - (x.dexterity/4);
    armor x1,x2,x3,x4,x5,x6,x7;

    x1.armorBuffPlus = (rand() % 3)+1;
    x2.armorBuffPlus = (rand() % 3)+1;
    x3.armorBuffPlus = (rand() % 3)+1;
    x4.armorBuffPlus = (rand() % 3)+1;
    x5.armorBuffPlus = (rand() % 3)+1;
    x6.armorBuffPlus = (rand() % 3)+1;
    x7.armorBuffPlus = (rand() % 3)+1;

    //light armor = 5
    //medium armor = 6
    //heavy armor = 7
    x1.armorClassPlus = (rand() %5)+1;//light
    x2.armorClassPlus = (rand() %5)+1;//light
    x3.armorClassPlus = (rand() %6)+1;//medium
    x4.armorClassPlus = (rand() %6)+1;//medium
    x5.armorClassPlus = (rand() %7)+1;//heavy
    x6.armorClassPlus = (rand() %7)+1;//heavy
    x7.armorClassPlus = (rand() %7)+1;//heavy

    //COST
    x1.cost = ((rand() % 100)+200) * (x1.armorClassPlus);
    x2.cost = ((rand() % 100)+200) * (x2.armorClassPlus);
    x3.cost = ((rand() % 100)+200) * (x3.armorClassPlus);
    x4.cost = ((rand() % 100)+200) * (x4.armorClassPlus);
    x5.cost = ((rand() % 100)+200) * (x5.armorClassPlus);
    x6.cost = ((rand() % 100)+200) * (x6.armorClassPlus);
    x7.cost = ((rand() % 100)+200) * (x7.armorClassPlus);

while (cont == 0)
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===================================================================================================|";
    cout <<"\n|                                   Your choices are.....                                           |";
    cout <<"\n|---------------------------------------------------------------------------------------------------|";
    cout <<"\n|          Current Armor: " <<setw(3) << setfill(' ') << armorYes << "               Armor Buff: " << setw(3) << setfill(' ') << x.armorBuff << "          Current Gold: " << setw(5) << setfill(' ') << x.gold << "            |";
    cout <<"\n|---------------------------------------------------------------------------------------------------|";
    cout <<"\n| 1.) ";
    generateLightArmor();
    cout <<" for :" << setw(4) << setfill(' ') << x1.cost << "        Armor: " << setw(3) << setfill(' ') << x1.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') << x1.armorBuffPlus<< " |";
    cout <<"\n| 2.) ";
    generateLightArmor();
    cout <<" for :" << setw(4) << setfill(' ') << x2.cost << "        Armor: " << setw(3) << setfill(' ') << x2.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') << x2.armorBuffPlus<< " |";
    cout <<"\n| 3.) ";
    generateMediumArmor();
    cout << " for :" << setw(4) << setfill(' ') << x3.cost << "        Armor: " << setw(3) << setfill(' ') << x3.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') <<x3.armorBuffPlus<< " |";
    cout <<"\n| 4.) ";
    generateMediumArmor();
    cout << " for :" << setw(4) << setfill(' ') << x4.cost << "        Armor: " << setw(3) << setfill(' ') << x4.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') <<x4.armorBuffPlus<< " |";
    cout <<"\n| 5.) ";
    generateHeavyArmor();
    cout <<" for :" << setw(4) << setfill(' ') << x5.cost << "        Armor: " << setw(3) << setfill(' ') << x5.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') <<x5.armorBuffPlus<< " |";
    cout <<"\n| 6.) ";
    generateHeavyArmor();
    cout <<" for :" << setw(4) << setfill(' ') << x6.cost << "        Armor: " << setw(3) << setfill(' ') << x6.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') <<x6.armorBuffPlus<< " |";
    cout <<"\n| 7.) ";
    generateHeavyArmor();
    cout <<" for :" << setw(4) << setfill(' ') << x7.cost << "        Armor: " << setw(3) << setfill(' ') << x7.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') <<x7.armorBuffPlus<< " |";
    cout <<"\n| 8.) Exit                                                                                          |";
    cout <<"\n|===================================================================================================|";
    cout <<"\n                                          Choice:";

    switch (verifyInput(0,9))
    {
        case 1: // 1st option
            if (x.gold >= x1.cost)
            {
                x.gold -= x1.cost;
                x.armorClass = x1.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x1.armorBuffPlus;
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
                x.armorClass = x2.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x2.armorBuffPlus;
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
                x.armorClass = x3.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x3.armorBuffPlus;
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
                x.armorClass = x4.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x4.armorBuffPlus;
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
                x.armorClass = x5.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x5.armorBuffPlus;
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
                x.armorClass = x6.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x6.armorBuffPlus;
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
                x.armorClass = x7.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x7.armorBuffPlus;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 8:
            cont = 1;
            break;
    }
}
    return (x);


}

STAT randomItemMedium(STAT x)
{
    bool cont = 0;
    int yaBoughtIt = 0;
    int armorYes = x.armorClass - 5 - (x.dexterity/4);
    armor x1,x2,x3,x4,x5,x6,x7;

    x1.armorBuffPlus = (rand() % 4)+1;
    x2.armorBuffPlus = (rand() % 4)+1;
    x3.armorBuffPlus = (rand() % 4)+1;
    x4.armorBuffPlus = (rand() % 4)+1;
    x5.armorBuffPlus = (rand() % 4)+1;
    x6.armorBuffPlus = (rand() % 4)+1;
    x7.armorBuffPlus = (rand() % 4)+1;

    //light armor = 6
    //medium armor = 7
    //heavy armor = 8
    x1.armorClassPlus = (rand() %6)+1;//light
    x2.armorClassPlus = (rand() %6)+1;//light
    x3.armorClassPlus = (rand() %7)+1;//medium
    x4.armorClassPlus = (rand() %7)+1;//medium
    x5.armorClassPlus = (rand() %8)+1;//heavy
    x6.armorClassPlus = (rand() %8)+1;//heavy
    x7.armorClassPlus = (rand() %8)+1;//heavy

    //COST
    x1.cost = ((rand() % 200)+250) * (x1.armorClassPlus);
    x2.cost = ((rand() % 200)+250) * (x2.armorClassPlus);
    x3.cost = ((rand() % 200)+250) * (x3.armorClassPlus);
    x4.cost = ((rand() % 200)+250) * (x4.armorClassPlus);
    x5.cost = ((rand() % 200)+250) * (x5.armorClassPlus);
    x6.cost = ((rand() % 200)+250) * (x6.armorClassPlus);
    x7.cost = ((rand() % 200)+250) * (x7.armorClassPlus);

while (cont == 0)
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===================================================================================================|";
    cout <<"\n|                                   Your choices are.....                                           |";
    cout <<"\n|---------------------------------------------------------------------------------------------------|";
    cout <<"\n|          Current Armor: " <<setw(3) << setfill(' ') << armorYes << "               Armor Buff: " << setw(3) << setfill(' ') << x.armorBuff << "          Current Gold: " << setw(5) << setfill(' ') << x.gold << "            |";
    cout <<"\n|---------------------------------------------------------------------------------------------------|";
    cout <<"\n| 1.) ";
    generateLightArmor();
    cout <<" for :" << setw(4) << setfill(' ') << x1.cost << "        Armor: " << setw(3) << setfill(' ') << x1.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') << x1.armorBuffPlus<< " |";
    cout <<"\n| 2.) ";
    generateLightArmor();
    cout <<" for :" << setw(4) << setfill(' ') << x2.cost << "        Armor: " << setw(3) << setfill(' ') << x2.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') << x2.armorBuffPlus<< " |";
    cout <<"\n| 3.) ";
    generateMediumArmor();
    cout << " for :" << setw(4) << setfill(' ') << x3.cost << "        Armor: " << setw(3) << setfill(' ') << x3.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') <<x3.armorBuffPlus<< " |";
    cout <<"\n| 4.) ";
    generateMediumArmor();
    cout << " for :" << setw(4) << setfill(' ') << x4.cost << "        Armor: " << setw(3) << setfill(' ') << x4.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') <<x4.armorBuffPlus<< " |";
    cout <<"\n| 5.) ";
    generateHeavyArmor();
    cout <<" for :" << setw(4) << setfill(' ') << x5.cost << "        Armor: " << setw(3) << setfill(' ') << x5.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') <<x5.armorBuffPlus<< " |";
    cout <<"\n| 6.) ";
    generateHeavyArmor();
    cout <<" for :" << setw(4) << setfill(' ') << x6.cost << "        Armor: " << setw(3) << setfill(' ') << x6.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') <<x6.armorBuffPlus<< " |";
    cout <<"\n| 7.) ";
    generateHeavyArmor();
    cout <<" for :" << setw(4) << setfill(' ') << x7.cost << "        Armor: " << setw(3) << setfill(' ') << x7.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') <<x7.armorBuffPlus<< " |";
    cout <<"\n| 8.) Exit                                                                                          |";
    cout <<"\n|===================================================================================================|";
    cout <<"\n                                          Choice:";

    switch (verifyInput(0,9))
    {
        case 1: // 1st option
            if (x.gold >= x1.cost)
            {
                x.gold -= x1.cost;
                x.armorClass = x1.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x1.armorBuffPlus;
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
                x.armorClass = x2.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x2.armorBuffPlus;
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
                x.armorClass = x3.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x3.armorBuffPlus;
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
                x.armorClass = x4.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x4.armorBuffPlus;
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
                x.armorClass = x5.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x5.armorBuffPlus;
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
                x.armorClass = x6.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x6.armorBuffPlus;
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
                x.armorClass = x7.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x7.armorBuffPlus;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 8:
            cont = 1;
            break;
    }
}
    return (x);


}

STAT randomItemHard(STAT x)
{
    bool cont = 0;
    int yaBoughtIt = 0;
    int armorYes = x.armorClass - 5 - (x.dexterity/4);
    armor x1,x2,x3,x4,x5,x6,x7;

    x1.armorBuffPlus = (rand() % 5)+1;
    x2.armorBuffPlus = (rand() % 5)+1;
    x3.armorBuffPlus = (rand() % 5)+1;
    x4.armorBuffPlus = (rand() % 5)+1;
    x5.armorBuffPlus = (rand() % 5)+1;
    x6.armorBuffPlus = (rand() % 5)+1;
    x7.armorBuffPlus = (rand() % 5)+1;

    //light armor = 7
    //medium armor = 8
    //heavy armor = 10
    x1.armorClassPlus = (rand() %7)+1;//light
    x2.armorClassPlus = (rand() %7)+1;//light
    x3.armorClassPlus = (rand() %8)+1;//medium
    x4.armorClassPlus = (rand() %8)+1;//medium
    x5.armorClassPlus = (rand() %10)+1;//heavy
    x6.armorClassPlus = (rand() %10)+1;//heavy
    x7.armorClassPlus = (rand() %10)+1;//heavy

    //COST
    x1.cost = ((rand() % 300)+300) * (x1.armorClassPlus);
    x2.cost = ((rand() % 300)+300) * (x2.armorClassPlus);
    x3.cost = ((rand() % 300)+300) * (x3.armorClassPlus);
    x4.cost = ((rand() % 300)+300) * (x4.armorClassPlus);
    x5.cost = ((rand() % 300)+300) * (x5.armorClassPlus);
    x6.cost = ((rand() % 300)+300) * (x6.armorClassPlus);
    x7.cost = ((rand() % 300)+300) * (x7.armorClassPlus);

while (cont == 0)
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===================================================================================================|";
    cout <<"\n|                                   Your choices are.....                                           |";
    cout <<"\n|---------------------------------------------------------------------------------------------------|";
    cout <<"\n|          Current Armor: " <<setw(3) << setfill(' ') << armorYes << "               Armor Buff: " << setw(3) << setfill(' ') << x.armorBuff << "          Current Gold: " << setw(5) << setfill(' ') << x.gold << "            |";
    cout <<"\n|---------------------------------------------------------------------------------------------------|";
    cout <<"\n| 1.) ";
    generateLightArmor();
    cout <<" for :" << setw(4) << setfill(' ') << x1.cost << "        Armor: " << setw(3) << setfill(' ') << x1.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') << x1.armorBuffPlus<< " |";
    cout <<"\n| 2.) ";
    generateLightArmor();
    cout <<" for :" << setw(4) << setfill(' ') << x2.cost << "        Armor: " << setw(3) << setfill(' ') << x2.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') << x2.armorBuffPlus<< " |";
    cout <<"\n| 3.) ";
    generateMediumArmor();
    cout << " for :" << setw(4) << setfill(' ') << x3.cost << "        Armor: " << setw(3) << setfill(' ') << x3.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') <<x3.armorBuffPlus<< " |";
    cout <<"\n| 4.) ";
    generateMediumArmor();
    cout << " for :" << setw(4) << setfill(' ') << x4.cost << "        Armor: " << setw(3) << setfill(' ') << x4.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') <<x4.armorBuffPlus<< " |";
    cout <<"\n| 5.) ";
    generateHeavyArmor();
    cout <<" for :" << setw(4) << setfill(' ') << x5.cost << "        Armor: " << setw(3) << setfill(' ') << x5.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') <<x5.armorBuffPlus<< " |";
    cout <<"\n| 6.) ";
    generateHeavyArmor();
    cout <<" for :" << setw(4) << setfill(' ') << x6.cost << "        Armor: " << setw(3) << setfill(' ') << x6.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') <<x6.armorBuffPlus<< " |";
    cout <<"\n| 7.) ";
    generateHeavyArmor();
    cout <<" for :" << setw(4) << setfill(' ') << x7.cost << "        Armor: " << setw(3) << setfill(' ') << x7.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') <<x7.armorBuffPlus<< " |";
    cout <<"\n| 8.) Exit                                                                                          |";
    cout <<"\n|===================================================================================================|";
    cout <<"\n                                          Choice:";

    switch (verifyInput(0,9))
    {
        case 1: // 1st option
            if (x.gold >= x1.cost)
            {
                x.gold -= x1.cost;
                x.armorClass = x1.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x1.armorBuffPlus;
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
                x.armorClass = x2.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x2.armorBuffPlus;
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
                x.armorClass = x3.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x3.armorBuffPlus;
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
                x.armorClass = x4.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x4.armorBuffPlus;
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
                x.armorClass = x5.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x5.armorBuffPlus;
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
                x.armorClass = x6.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x6.armorBuffPlus;
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
                x.armorClass = x7.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x7.armorBuffPlus;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 8:
            cont = 1;
            break;
    }
}
    return (x);


}

STAT randomItemExtreme(STAT x)
{
    bool cont = 0;
    int yaBoughtIt = 0;
    int armorYes = x.armorClass - 5 - (x.dexterity/4);
    armor x1,x2,x3,x4,x5,x6,x7;

    x1.armorBuffPlus = (rand() % 6)+1;
    x2.armorBuffPlus = (rand() % 6)+1;
    x3.armorBuffPlus = (rand() % 6)+1;
    x4.armorBuffPlus = (rand() % 6)+1;
    x5.armorBuffPlus = (rand() % 6)+1;
    x6.armorBuffPlus = (rand() % 6)+1;
    x7.armorBuffPlus = (rand() % 6)+1;

    //light armor = 9
    //medium armor = 11
    //heavy armor = 13
    x1.armorClassPlus = (rand() %9)+1;//light
    x2.armorClassPlus = (rand() %9)+1;//light
    x3.armorClassPlus = (rand() %11)+1;//medium
    x4.armorClassPlus = (rand() %11)+1;//medium
    x5.armorClassPlus = (rand() %13)+1;//heavy
    x6.armorClassPlus = (rand() %13)+1;//heavy
    x7.armorClassPlus = (rand() %13)+1;//heavy

    //COST
    x1.cost = ((rand() % 300)+300) * (x1.armorClassPlus);
    x2.cost = ((rand() % 300)+300) * (x2.armorClassPlus);
    x3.cost = ((rand() % 300)+300) * (x3.armorClassPlus);
    x4.cost = ((rand() % 300)+300) * (x4.armorClassPlus);
    x5.cost = ((rand() % 300)+300) * (x5.armorClassPlus);
    x6.cost = ((rand() % 300)+300) * (x6.armorClassPlus);
    x7.cost = ((rand() % 300)+300) * (x7.armorClassPlus);

while (cont == 0)
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===================================================================================================|";
    cout <<"\n|                                   Your choices are.....                                           |";
    cout <<"\n|---------------------------------------------------------------------------------------------------|";
    cout <<"\n|          Current Armor: " <<setw(3) << setfill(' ') << armorYes << "               Armor Buff: " << setw(3) << setfill(' ') << x.armorBuff << "          Current Gold: " << setw(5) << setfill(' ') << x.gold << "            |";
    cout <<"\n|---------------------------------------------------------------------------------------------------|";
    cout <<"\n| 1.) ";
    generateLightArmor();
    cout <<" for :" << setw(4) << setfill(' ') << x1.cost << "        Armor: " << setw(3) << setfill(' ') << x1.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') << x1.armorBuffPlus<< " |";
    cout <<"\n| 2.) ";
    generateLightArmor();
    cout <<" for :" << setw(4) << setfill(' ') << x2.cost << "        Armor: " << setw(3) << setfill(' ') << x2.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') << x2.armorBuffPlus<< " |";
    cout <<"\n| 3.) ";
    generateMediumArmor();
    cout << " for :" << setw(4) << setfill(' ') << x3.cost << "        Armor: " << setw(3) << setfill(' ') << x3.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') <<x3.armorBuffPlus<< " |";
    cout <<"\n| 4.) ";
    generateMediumArmor();
    cout << " for :" << setw(4) << setfill(' ') << x4.cost << "        Armor: " << setw(3) << setfill(' ') << x4.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') <<x4.armorBuffPlus<< " |";
    cout <<"\n| 5.) ";
    generateHeavyArmor();
    cout <<" for :" << setw(4) << setfill(' ') << x5.cost << "        Armor: " << setw(3) << setfill(' ') << x5.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') <<x5.armorBuffPlus<< " |";
    cout <<"\n| 6.) ";
    generateHeavyArmor();
    cout <<" for :" << setw(4) << setfill(' ') << x6.cost << "        Armor: " << setw(3) << setfill(' ') << x6.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') <<x6.armorBuffPlus<< " |";
    cout <<"\n| 7.) ";
    generateHeavyArmor();
    cout <<" for :" << setw(4) << setfill(' ') << x7.cost << "        Armor: " << setw(3) << setfill(' ') << x7.armorClassPlus << "   buff to armorclass: " << setw(3) << setfill(' ') <<x7.armorBuffPlus<< " |";
    cout <<"\n| 8.) Exit                                                                                          |";
    cout <<"\n|===================================================================================================|";
    cout <<"\n                                          Choice:";

    switch (verifyInput(0,9))
    {
        case 1: // 1st option
            if (x.gold >= x1.cost)
            {
                x.gold -= x1.cost;
                x.armorClass = x1.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x1.armorBuffPlus;
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
                x.armorClass = x2.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x2.armorBuffPlus;
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
                x.armorClass = x3.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x3.armorBuffPlus;
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
                x.armorClass = x4.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x4.armorBuffPlus;
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
                x.armorClass = x5.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x5.armorBuffPlus;
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
                x.armorClass = x6.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x6.armorBuffPlus;
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
                x.armorClass = x7.armorClassPlus + 5 + (x.dexterity/4);
                x.armorBuff = x7.armorBuffPlus;
                cont = 1;
            }
            else
            {
                cout <<"\n Insufficient funds available.....\n";
                system("pause");
                cont = 0;
            }
            break;
        case 8:
            cont = 1;
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
STAT makemonsterImpossible()
{
    STAT x;
    x.strength = (rand() % 50)+1;
    x.dexterity = (rand() % 50)+1;
    x.intelligence = (rand() % 50)+1;
    x.charisma = (rand() % 50)+1;
    x.wisdom = (rand() % 50)+1;
    x.constitution = (rand() % 50)+1;
    int armor = (rand() % 50)+1;
    int weapons = (rand() % 50)+1;
    int magicAbility = (rand() % 30)+1;
    int rangeAbility = (rand() % 30)+1;
    int buffAbility = (rand() % 30)+1;
    int healAbility = (rand() % 30)+1;

    x.healthPoints = (x.constitution * 5) + 60;
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
STAT Arena(STAT x)
{
    STAT y;
    bool con = 0;
    while (con == 0)
    {
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|                         Arena Fight                           |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|You approach the small circle shaped structure and walk up to  |";
    cout <<"\n|the man who seems to be in charge and ask what is happening. He|";
    cout <<"\n|tells you that the men here fight for gold and glory. You ask  |";
    cout <<"\n|him what the price is and he says to enter it is" << setw(7) << setfill (' ') << x.ArenaPrice;
    cout << "gp to   |";
    cout <<"\n|enter and you win double that if you win and basically you die |";
    cout <<"\n|if you lose basically. So would you like to enter?             |";
    cout <<"\n|===============================================================|";
    cout <<"\n|              Current Gold: "<< setw(10) << setfill(' ') << x.gold;
    cout <<"                         |";
    cout <<"\n|    1.) Enter the tournament                                   |";
    cout <<"\n|    2.) Leave                                                  |";
    cout <<"\n|===============================================================|";
    cout <<"\n                      Choice: ";
    x.ArenaCounter = x.ArenaCounter + 1;
    switch(verifyInput(0,3))
    {
    case 1: // fight
        if ( x.gold >= x.ArenaPrice)
        {
        if (x.ArenaCounter == 1)
        {
            y = makemonsterEasy();
            x = Battle(x,y);
            cout << "\n\n\n You have also won " << x.ArenaPrice << "gp.\n\n\n";
            x.gold = x.gold + ( 2 * x.ArenaPrice);
            x.ArenaPrice = 50;
            system("pause");
            break;
        }
        else if ( x.ArenaCounter == 2)
        {
            y = makemonsterEasy();
            x = Battle(x,y);
            cout << "\n\n\n You have also won " << x.ArenaPrice << "gp.\n\n\n";
            x.gold = x.gold + (2*x.ArenaPrice);
            x.ArenaPrice = 100;
            system("pause");
            break;
        }
        else if ( x.ArenaCounter == 3)
        {
            y = makemonsterMedium();
            x = Battle(x,y);
            cout << "\n\n\n You have also won " << x.ArenaPrice << "gp.\n\n\n";
            x.gold = x.gold + (2*x.ArenaPrice);
            x.ArenaPrice = 200;
            system("pause");
            break;
        }
        else if ( x.ArenaCounter == 4)
        {
            y = makemonsterMedium();
            x = Battle(x,y);
            cout << "\n\n\n You have also won " << x.ArenaPrice << "gp.\n\n\n";
            x.gold = x.gold + (2*x.ArenaPrice);
            x.ArenaCounter++;
            x.ArenaPrice = 500;
            system("pause");
            break;
        }
        else if ( x.ArenaCounter == 5)
        {
            y = makemonsterHard();
            x = Battle(x,y);
            cout << "\n\n\n You have also won " << x.ArenaPrice << "gp.\n\n\n";
            x.gold = x.gold + (2*x.ArenaPrice);
            x.ArenaPrice = 1000;
            system("pause");
            break;
        }
        else if ( x.ArenaCounter == 6)
        {
            y = makemonsterHard();
            x = Battle(x,y);
            cout << "\n\n\n You have also won " << x.ArenaPrice << "gp.\n\n\n";
            x.gold = x.gold + (2*x.ArenaPrice);
            x.ArenaPrice = 2000;
            system("pause");
            break;
        }
        else if ( x.ArenaCounter == 7)
        {
            y = makemonsterExtreme();
            x = Battle(x,y);
            cout << "\n\n\n You have also won " << x.ArenaPrice << "gp.\n\n\n";
            x.gold = x.gold + (2*x.ArenaPrice);
            x.ArenaPrice = 2500;
            system("pause");
            break;
        }
        else if ( x.ArenaCounter == 8)
        {
            y = makemonsterExtreme();
            x = Battle(x,y);
            cout << "\n\n\n You have also won " << x.ArenaPrice << "gp.\n\n\n";
            x.gold = x.gold + (2*x.ArenaPrice);
            x.ArenaCounter++;
            x.ArenaPrice = 5000;
            system("pause");
            break;
        }
        else if ( x.ArenaCounter == 9)
        {
            y = makemonsterExtreme();
            x = Battle(x,y);
            cout << "\n\n\n You have also won " << x.ArenaPrice << "gp.\n\n\n";
            x.gold = x.gold + (2*x.ArenaPrice);
            x.ArenaCounter++;
            x.ArenaPrice = 10000;
            system("pause");
            break;
        }
        else if ( x.ArenaCounter == 10)
        {
            y = makemonsterExtreme();
            x = Battle(x,y);
            cout << "\n\n\n You have also won " << x.ArenaPrice << "gp.\n\n\n";
            x.gold = x.gold + (2*x.ArenaPrice);
            x.ArenaPrice = 25000;
            system("pause");
            break;
        }
        else if ( x.ArenaCounter == 11)
        {
            y = Guthreed();
            x = Battle(x,y);
            cout << "\n\n\n You have also won " << x.ArenaPrice << "gp.\n\n\n";
            x.gold = x.gold + (2*x.ArenaPrice);
            system("pause");
            break;
        }
        else if ( x.ArenaCounter > 11)
            y = makemonsterImpossible();
            x = Battle(x,y);
            cout << "\n\n\n You have also won " << x.ArenaPrice << "gp.\n\n\n";
            x.gold = x.gold + (2*x.ArenaPrice);
            x.ArenaCounter++;
            x.ArenaPrice = x.ArenaPrice * 2;
            system("pause");
            break;
        }
        else
        {
            cout << "insufficient funds held...";
            system("pause");
        }
        break;
    case 2://leave
        con = 1;
    }
    }
    return x;
}

#endif // BATTLESYSTEM_H_INCLUDED
