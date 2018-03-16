#ifndef MENUS_H_INCLUDED
#define MENUS_H_INCLUDED


void Mainmenu()
 // These make up the interface for presentation purposes
{
cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
cout << " _____________________________________________________________________ " << endl;
cout << "|---------------------------------------------------------------------|" << endl;
cout << "|                   Welcome To The World Of Durkheart                 |" << endl;
cout << "|                        A Console RPG Adventure                      |" << endl;
cout << "|                                                                     |" << endl;
cout << "|_____________________________________________________________________|" << endl;
cout << "|                        Please select a class                        |" << endl;
cout << "|                           1.) Wizard                                |" << endl;
cout << "|                           2.) Warlord                               |" << endl;
cout << "|                           3.) Paladin                               |" << endl;
cout << "|                           4.) fighter                               |" << endl;
cout << "|                           5.) rogue                                 |" << endl;
cout << "|                           6.) bard                                  |" << endl;
cout << "|                           7.) barbarian                             |" << endl;
cout << "|                           8.) Ranger                                |" << endl;
cout << "|                           9.) Blade Dancer                          |" << endl;
cout << "|_____________________________________________________________________|" << endl;
cout << endl;
cout << "                          Your Choice : ";
}

void StatsMenu() // for starter purposes
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"|===============================================================================|" << endl;
    cout <<"|               Here is the list of stats preferred for each character          |" << endl;
    cout <<"|                      Also the list of what each stat affects                  |" << endl;
    cout <<"|-------------------------------------------------------------------------------|" << endl;
    cout <<"|   Strength:       This stat affects carry weight, attack power for melee      |" << endl;
    cout <<"|                   attack power.                                               |" << endl;
    cout <<"|                                                                               |" << endl;
    cout <<"|   Dexterity:      This stat affects speed, attacks per turn, and range attack |" << endl;
    cout <<"|                                                                               |" << endl;
    cout <<"|   Intelligence:   This stat affects overall 'smartness' in situations and     |" << endl;
    cout <<"|                   ability to learn as well as quantity of magic learned       |" << endl;
    cout <<"|                                                                               |" << endl;
    cout <<"|   Charisma:       This stat affects persuasion and ability to barter in shops |" << endl;
    cout <<"|                                                                               |" << endl;
    cout <<"|   Constitution:   This stat directly controls the amount of health you have   |" << endl;
    cout <<"|                                                                               |" << endl;
    cout <<"|   Wisdom:         This stat affects the use of magic spells and ability to    |" << endl;
    cout <<"|                   apply reason                                                |" << endl;
    cout <<"|-------------------------------------------------------------------------------|" << endl;
    cout <<"|                         Classes Favorable Stats                               |" << endl;
    cout <<"|   Class:              Primary Stat:               Secondary Stat:             |" << endl;
    cout <<"|   Wizard              Wisdom                      Intelligence                |" << endl;
    cout <<"|   Warlord             Strength                    Dexterity                   |" << endl;
    cout <<"|   Paladin             Intelligence                Wisdom                      |" << endl;
    cout <<"|   Fighter             Strength                    Constitution                |" << endl;
    cout <<"|   Rogue               Dexterity                   Charisma                    |" << endl;
    cout <<"|   Bard                Charisma                    Intelligence                |" << endl;
    cout <<"|   Barbarian           Strength                    Constitution                |" << endl;
    cout <<"|   Ranger              Dexterity                   Constitution                |" << endl;
    cout <<"|   Blade Dancer        Dexterity                   Strength                    |" << endl;
    cout <<"|=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=|" << endl;
}
void CharacterSheet (STAT x)
{
    cout <<"\n\n\n\n\n\n\n\n\n\n";
    cout <<"|===============================================================================|" << endl;
    cout <<"|                              CHARACTER SHEET:                                 |" << endl;
    cout <<"|-------------------------------------------------------------------------------|" << endl;
    cout <<"---------------------------------------------------------------------------------" << endl;
    cout <<"Strength: " << x.strength << endl;
    cout <<"---------------------------------------------------------------------------------" << endl;
    cout <<"Dexterity: " << x.dexterity << endl;
    cout <<"---------------------------------------------------------------------------------" << endl;
    cout <<"Intelligence: " << x.intelligence << endl;
    cout <<"---------------------------------------------------------------------------------" << endl;
    cout <<"Charisma: " << x.charisma << endl;
    cout <<"---------------------------------------------------------------------------------" << endl;
    cout <<"Wisdom: " << x.wisdom << endl;
    cout <<"---------------------------------------------------------------------------------" << endl;
    cout <<"Constitution: " << x.constitution << endl;
    cout <<"---------------------------------------------------------------------------------" << endl;
    cout <<"Armor Class: " << x.armorClass << endl;
    cout <<"---------------------------------------------------------------------------------" << endl;
    cout <<"Attack: 1d" << x.attack << " +" << ((x.strength/3)+ x.plusAttack + x.weaponSpec) << endl;
    cout <<"---------------------------------------------------------------------------------" << endl;
    cout <<"Barter: " << x.barter << endl;
    cout <<"---------------------------------------------------------------------------------" << endl;
    cout <<"Buff: " << x.buff << endl;
    cout <<"---------------------------------------------------------------------------------" << endl;
    cout <<"Chance: +" << x.chance << endl;
    cout <<"---------------------------------------------------------------------------------" << endl;
    cout <<"Gold: " << x.gold << endl;
    cout <<"---------------------------------------------------------------------------------" << endl;
    cout <<"Healing Ability: " << x.healing << endl;
    cout <<"---------------------------------------------------------------------------------" << endl;
    cout <<"HP: " << x.healthPoints << endl;
    cout <<"---------------------------------------------------------------------------------" << endl;
    cout <<"MP: " << x.manaPoints << endl;
    cout <<"---------------------------------------------------------------------------------" << endl;
    cout <<"Persuasion: " << x.persuasion << endl;
    cout <<"---------------------------------------------------------------------------------" << endl;
    cout <<"Thieving: " << x.thieving << endl;
    cout <<"---------------------------------------------------------------------------------" << endl;
    cout <<"Magic: " << x.magic << endl;
}

void Difficulty()
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|==================================|";
    cout <<"\n|           DIFFICULTY             |";
    cout <<"\n|----------------------------------|";
    cout <<"\n|        1.) Easy (2x gold)        |";
    cout <<"\n|        2.) Normal (1x gold)      |";
    cout <<"\n|        3.) Hard (0.5x gold)      |";
    cout <<"\n|        4.) Extreme (0.25x gold)  |";
    cout <<"\n|==================================|";
    cout <<"\n          Choice: ";
}

void CastleImage()
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
    cout <<"                                                             ¶" << endl;
    cout <<"                                                            ¶ ¶ " << endl;
    cout <<"                                                            ¶ ¶ " << endl;
    cout <<"                                                           ¶  ¶¶ " << endl;
    cout <<"                                                           ¶  ¶¶ " << endl;
    cout <<"                                                          ¶    ¶¶ " << endl;
    cout <<"                                                         ¶     ¶¶¶ " << endl;
    cout <<"                                                       ¶¶¶¶¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"                                                        ¶         ¶ " << endl;
    cout <<"                                             ¶           ¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"                                             ¶            ¶     ¶ " << endl;
    cout <<"                                            ¶ ¶      ¶    ¶     ¶ " << endl;
    cout <<"                                            ¶ ¶      ¶    ¶     ¶ " << endl;
    cout <<"                                           ¶  ¶¶    ¶ ¶   ¶     ¶ " << endl;
    cout <<"                                           ¶  ¶¶   ¶  ¶¶  ¶     ¶        ¶ " << endl;
    cout <<"                                          ¶    ¶¶_¶    ¶¶ ¶     ¶        ¶ " << endl;
    cout <<"                                          ¶    ¶¶_¶¶¶¶¶¶¶ ¶     ¶       ¶ ¶ " << endl;
    cout <<"                                         ¶     ¶¶¶¶¶   ¶  ¶     ¶       ¶ ¶ " << endl;
    cout <<"                                         ¶     ¶¶¶¶¶ ¶ ¶  ¶     ¶      ¶  ¶¶ " << endl;
    cout <<"                                        ¶¶¶¶¶¶¶¶¶¶¶¶ ¶ ¶_¶¶¶¶¶¶¶¶¶     ¶  ¶¶ " << endl;
    cout <<"                                         ¶       ¶ ¶ ¶ ¶¶         ¶   ¶    ¶¶ " << endl;
    cout <<"                                          ¶¶¶¶¶¶¶  ¶   ¶¶         ¶ ¶¶¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"                                           ¶   ¶   ¶¶¶¶¶           ¶ ¶       ¶ " << endl;
    cout <<"                                           ¶   ¶   ¶   ¶            ¶ ¶¶¶¶¶¶¶¶ " << endl;
    cout <<"                                           ¶ ¶ ¶  ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶  ¶  ¶  ¶ " << endl;
    cout <<"                                           ¶ ¶ ¶ ¶                   ¶ ¶ ¶ ¶ ¶ ¶ " << endl;
    cout <<"                                           ¶ ¶ ¶                  ¶ ¶ ¶ ¶¶   ¶ " << endl;
    cout <<"                                           ¶ ¶ ¶ ¶                   ¶ ¶   ¶ ¶¶¶ " << endl;
    cout <<"                                           ¶ ¶ ¶ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ ¶ ¶ ¶ ¶ ¶ " << endl;
    cout <<"                                           ¶   ¶   ¶     ¶  ¶ ¶  ¶ ¶   ¶ ¶ ¶ ¶ ¶ " << endl;
    cout <<"                                           ¶   ¶    ¶   ¶    ¶    ¶    ¶   ¶ ¶ ¶ " << endl;
    cout <<"                                           ¶   ¶     ¶  ¶    ¶   ¶  ¶¶¶¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"                                           ¶   ¶¶¶¶¶¶¶  ¶    ¶   ¶¶¶¶¶¶¶¶     ¶ " << endl;
    cout <<"                                           ¶   ¶     ¶  ¶    ¶   ¶      ¶     ¶ " << endl;
    cout <<"                                           ¶   ¶     ¶  ¶    ¶   ¶ ¶ ¶ ¶ ¶    ¶ " << endl;
    cout <<"                                           ¶   ¶     ¶  ¶    ¶   ¶        ¶¶¶¶¶ " << endl;
    cout <<"                                        ¶¶¶¶¶¶¶¶¶¶¶¶¶¶  ¶    ¶   ¶¶¶¶¶¶¶¶¶¶  ¶ " << endl;
    cout <<"                                        ¶            ¶  ¶    ¶   ¶       ¶   ¶ " << endl;
    cout <<"                                        ¶¶¶¶¶¶¶¶¶¶¶¶¶¶  ¶    ¶   ¶¶¶¶¶¶¶¶    ¶ " << endl;
    cout <<"                                         ¶          ¶¶  ¶    ¶   ¶     ¶ ¶ ¶ ¶ " << endl;
    cout <<"                                          ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ ¶ ¶ ¶ ¶ " << endl;
    cout <<"                                          ¶        ¶                 ¶ ¶     ¶ " << endl;
    cout <<"                                          ¶        ¶                 ¶ ¶     ¶ " << endl;
    cout <<"                                         ¶¶¶ ¶¶¶ ¶¶¶ ¶¶¶         ¶¶¶ ¶¶¶ ¶¶¶ ¶¶¶ " << endl;
    cout <<"                                         ¶ ¶¶¶ ¶¶¶ ¶¶¶_¶¶¶¶¶¶¶¶¶¶¶_¶¶¶_¶¶¶_¶¶¶_¶ " << endl;
    cout <<"                                         ¶             ¶¶¶¶¶¶¶¶¶¶¶             ¶ " << endl;
    cout <<"                                         ¶             ¶         ¶             ¶ " << endl;
    cout <<"                                         ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶         ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"                                         ¶                                     ¶ " << endl;
    cout <<"                                          ¶                                   ¶ " << endl;
    cout <<"                                           ¶¶¶¶¶¶¶¶¶¶¶     ¶¶¶     ¶¶¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"                                           ¶         ¶    ¶¶¶¶¶    ¶         ¶ " << endl;
    cout <<"                                           ¶         ¶   ¶¶¶ ¶¶¶   ¶         ¶ " << endl;
    cout <<"                                           ¶    ¶    ¶   ¶¶   ¶¶   ¶    ¶    ¶ " << endl;
    cout <<"                                           ¶   ¶¶¶   ¶  ¶¶¶   ¶¶¶  ¶   ¶¶¶   ¶ " << endl;
    cout <<"                                           ¶   ¶¶¶   ¶  ¶¶     ¶¶  ¶   ¶¶¶   ¶ " << endl;
    cout <<"                                           ¶   ¶¶¶   ¶  ¶¶     ¶¶  ¶   ¶¶¶   ¶ " << endl;
    cout <<"                                           ¶   ¶¶¶   ¶  ¶¶     ¶¶  ¶   ¶¶¶   ¶ " << endl;
    cout <<"________________________________________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶________________________________________________________________________________________________________" << endl;
}


void TitleLogo()
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
    cout <<"                       ¶¶¶¶" << endl;
    cout <<"               ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"           ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶¶¶ " << endl;
    cout <<"         ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"       ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"      ¶¶¶¶¶¶¶¶       ¶¶¶¶¶¶¶¶¶   ¶¶¶¶ " << endl;
    cout <<"     ¶¶¶¶¶¶¶                      ¶¶ " << endl;
    cout <<"     ¶¶¶¶¶¶   ¶¶¶¶¶                ¶ " << endl;
    cout <<"    ¶¶¶¶¶¶   ¶¶¶1¶¶¶ " << endl;
    cout <<"    ¶¶¶¶¶¶   ¶¶111¶¶ " << endl;
    cout <<"    ¶¶¶¶¶¶   ¶¶¶1¶¶¶ " << endl;
    cout <<"    ¶¶¶¶¶¶    ¶¶1¶¶ " << endl;
    cout <<"     ¶¶¶¶¶¶   ¶¶1¶¶ " << endl;
    cout <<"     ¶¶¶¶¶¶¶¶ ¶¶¶¶¶ " << endl;
    cout <<"      ¶¶¶¶¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"       ¶¶¶¶¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"         ¶¶¶¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"      ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"  ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"    ¶¶¶¶11111111111111111¶¶¶¶¶ " << endl;
    cout <<"       ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"              ¶¶ 1 ¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"              ¶¶ 1 ¶¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"              ¶¶ 1 ¶¶  ¶¶¶¶¶¶ " << endl;
    cout <<"              ¶¶ 1 ¶¶   ¶¶¶¶¶¶ " << endl;
    cout <<"              ¶¶ 1 ¶¶   ¶¶¶¶¶¶ " << endl;
    cout <<"              ¶¶ 1 ¶¶   ¶¶¶¶¶¶ " << endl;
    cout <<"              ¶¶ 1 ¶¶   ¶¶¶¶¶ " << endl;
    cout <<"              ¶¶ 1 ¶¶   ¶¶¶¶¶¶ " << endl;
    cout <<"              ¶¶ 1 ¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"              ¶¶¶¶¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"              ¶¶¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"             ¶¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"            ¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"           ¶¶¶¶¶¶¶ ¶¶ " << endl;
    cout <<"          ¶¶¶¶¶¶ 1 ¶¶ " << endl;
    cout <<"          ¶¶¶¶¶¶ 1 ¶¶ " << endl;
    cout <<"          ¶¶¶¶¶¶ 1 ¶¶ " << endl;
    cout <<"          ¶¶¶¶¶¶ 1 ¶¶ " << endl;
    cout <<"          ¶¶¶¶¶¶ 1 ¶¶ " << endl;
    cout <<"           ¶¶¶¶¶ 1 ¶¶ " << endl;
    cout <<"            ¶¶¶¶ 1 ¶¶ " << endl;
    cout <<"              ¶¶ 1 ¶¶¶¶¶¶ " << endl;
    cout <<"              ¶¶ 1 ¶¶¶¶¶¶¶¶ " << endl;
    cout <<"              ¶¶ 1 ¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"              ¶¶ 1 ¶¶¶ ¶¶¶¶¶ " << endl;
    cout <<"              ¶¶ 1 ¶¶  ¶¶¶¶¶ " << endl;
    cout <<"              ¶¶   ¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"              ¶¶   ¶¶¶¶¶¶¶¶ " << endl;
    cout <<"              ¶¶¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"              ¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"             ¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"            ¶¶¶¶¶¶¶¶¶ " << endl;
    cout <<"           ¶¶¶¶¶   ¶¶ " << endl;
    cout <<"           ¶¶¶¶¶   ¶¶ " << endl;
    cout <<"           ¶¶¶¶¶   ¶¶ " << endl;
    cout <<"            ¶¶¶¶   ¶¶ " << endl;
    cout <<"            ¶¶¶¶   ¶¶ " << endl;
    cout <<"              ¶¶   ¶¶¶¶¶¶ " << endl;
    cout <<"              ¶¶   ¶¶¶¶¶¶¶ " << endl;
    cout <<"              ¶¶   ¶¶ ¶¶¶¶¶ " << endl;
    cout <<"              ¶¶   ¶¶   ¶¶¶¶ " << endl;
    cout <<"               ¶¶ ¶¶     ¶¶¶ " << endl;
    cout <<"                ¶¶¶      ¶¶¶ " << endl;
    cout <<"                 ¶       ¶¶" << endl;
}

void LevelOne()
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|                           Act I                               |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n| You find yourself at the doorstep of a dim lit                |";
    cout <<"\n| house on the edge of daggerfall with the moon                 |";
    cout <<"\n| in the sky and lighting your path. What                       |";
    cout <<"\n| do you do?                                                    |";
    cout <<"\n|===============================================================|";
    cout <<"\n|           1.) Knock                                           |";
    cout <<"\n|           2.) Break in                                        |";
    cout <<"\n|           3.) Leave                                           |";
    cout <<"\n|===============================================================|";
    cout <<"\n          Choice: ";
}
void Knock(STAT x)
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|                      You knock on the door                    |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|        A elderly gentleman opens the door                     |";
    cout <<"\n|        and asks you angrily asks you                          |";
    cout <<"\n|        What the hell are you doing knocking                   |";
    cout <<"\n|        on my door in the middle of the night                  |";
    std::string canCast;
    if (x.wisdom >= 5)
    {
        canCast="TRUE";
    }
    else
    {
        canCast="FALSE";
    }
    cout <<"\n|===============================================================|";
    cout <<"\n|-Your options:-                                                |";
    cout <<"\n|           1.)Tell the gentleman that the                      |";
    cout <<"\n|              clovikal guild has sent you                      |";
    cout <<"\n|              to investigate the dragon                        |";
    cout <<"\n|              sightings                                        |";
    cout <<"\n|                                                               |";
    cout <<"\n|           2.)Tell him that you are his child                  |";
    cout <<"\n|              and that you haven't been home                   |";
    cout <<"\n|              in 20 cycles so that he may not                  |";
    cout <<"\n|              recognize you.(Persuasion check)                 |";
    cout <<"\n|              Current Persuasion: " << x.persuasion;
    cout <<"\n|                                                               |";
    cout <<"\n|           3.)Cast sleep on him (magic check)                  |";
    cout <<"\n|              Can cast? (5 wisdom): "<< canCast;
    cout <<"\n|                                                               |";
    cout <<"\n|===============================================================|";
    cout <<"\n                    Choice: ";
}
void Break_In(STAT x)
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|             You Succeed at breaking into the house            |";
    cout <<"\n|             and are placed at a crossroads                    |";
    cout <<"\n|             steal as much as you can, or yo can continue      |";
    cout <<"\n|             your investigation by waking up the resident      |";
    cout <<"\n|             and questioning him for your guild                |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|        1.)  Steal everything that you can find                |";
    cout <<"\n|             (thieving check)                                  |";
    cout <<"\n|             Current Thieving: " << x.thieving;
    cout <<"\n|                                                               |";
    cout <<"\n|        2.)  Wake up the resident                              |";
    cout <<"\n|===============================================================|";
    cout <<"\n                       Choice: ";
}
void Leave()
{

    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|         You wait until Daytime to re approach the house       |";
    cout <<"\n|         and head to the nearest inn                           |";
    cout <<"\n|---------------------------------------------------------------|\n\n";
}
void Bar(STAT x)
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|    You walk up to the inn keeper and ask if there are any     |";
    cout <<"\n|    rooms available and the innkeeper says yes but its the     |";
    cout <<"\n|    the nicest room and also the most expensive. He says it    |";
    cout <<"\n|    will cost you about 30 gold pieces for the night.          |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|===============================================================|";
    cout <<"\n|-Your options:-                                                |";
    cout <<"\n|           1.)Agree to pay the fee (-30 gold)                  |";
    cout <<"\n|                                                               |";
    cout <<"\n|           2.)Try to persuade him to lower the price (barter)  |";
    cout <<"\n|                           Current Barter: " << x.barter;
    cout <<"\n|                                                               |";
    cout <<"\n|           3.)cast mind control on him (requires 15 Wisdom)    |";
    cout <<"\n|                           Current Wisdom: " << x.wisdom;
    cout <<"\n|                                                               |";
    cout <<"\n|===============================================================|";
    cout <<"\n                    Choice: ";
}
void GoingToINN()
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|    You arrive at the inn and enter it to try to find a        |";
    cout <<"\n|    room to sleep in.                                          |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|===============================================================|\n\n";
}
STAT payInnKeeper(STAT x)
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|    You pay the innkeeper 30 gold and he shows you to your     |";
    cout <<"\n|    room for the night and you find yourself in the worst      |";
    cout <<"\n|    room you had ever seen in your life. You settle in on      |";
    cout <<"\n|    uncomfortable bed and rest                                 |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|===============================================================|\n\n";
    x.healthPoints = x.maxHealth;
    x.manaPoints = x.maxMana;
    x.gold -= 30;
    return (x);
}
STAT MindControlInnkeeper(STAT x)
{
    int d20 = ((rand() %20) +1) + x.magic;
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|    You attempt to cast mind control on him                    |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|===============================================================|";
    if (x.wisdom <= 15)
    {
    cout <<"\n|    Why would you ever try to cast mind control when you       |";
    cout <<"\n|    don't even know the spell to begin with. He kicks you      |";
    cout <<"\n|    out and you end up sleeping in a rat infested ally way     |";
    cout <<"\n|    You don't end up resting well                              |";
    cout <<"\n|===============================================================|\n\n";
    }
    else
    {
        if (d20 >= 13)
        {
            cout <<"\n|    You successfully cast mind control on him and he gives     |";
            cout <<"\n|    you the room for absolutely free.                          |";
            cout <<"\n|===============================================================|\n\n";
        }
        else
        {
            cout <<"\n|    You fail miserably and are immediately kicked out          |";
            cout <<"\n|    and you end up sleeping in a rat infested ally way         |";
            cout <<"\n|    You don't end up resting well                              |";
            cout <<"\n|===============================================================|\n\n";
        }
    }
    return (x);
}

STAT InnKeeperBarter(STAT x)
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|    You try to get the innkeeper to lower his price on the     |";
    cout <<"\n|    room and try to show him what is wrong with the room       |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|===============================================================|";
    int d20 = (rand() %20) +1;
        d20 += x.barter;
        if (d20 > 15)
        {
            cout <<"\n|    You are successful in showing the innkeeper the bad room   |";
            cout <<"\n|    He lowers his price by 15 gold pieces                      |";
            cout <<"\n|===============================================================|\n\n";
            x.gold  -= 15;
        }
        else
        {
            cout <<"\n|    You fail at trying to barter with him and he actually      |";
            cout <<"\n|    raises his price by 10 gold pieces and you reluctantly     |";
            cout <<"\n|    pay him the price he demands                               |";
            cout <<"\n|===============================================================|\n\n";
            x.gold -= 40;
        }
        x.healthPoints = x.maxHealth;
        x.manaPoints = x.maxMana;
    return (x);
}
STAT goingbackOldMan(STAT x)
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|    You go back to the old mans house and try to persuade      |";
    cout <<"\n|    him to tell you where the dragon sighting are.             |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|===============================================================|";
    cout <<"\n|    He asks for 5 gold for the information and you give        |";
    cout <<"\n|    him the 5 gold and he tells you everything he knows        |";
    cout <<"\n|===============================================================|\n";
    x.gold -= 5;
    return (x);
}

void onTheRoadAgain()
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|                           Act II                              |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|    You decide that you may want to stock up before leaving    |";
    cout <<"\n|===============================================================|";
    cout <<"\n|           1.) Go fight in the wilderness.                     |";
    cout <<"\n|           2.) Go to armorsmith.                               |";
    cout <<"\n|           3.) Go to weaponsmith.                              |";
    cout <<"\n|           4.) Go to local Cleric.                             |";
    cout <<"\n|           5.) Go to local inn and rest.                       |";
    cout <<"\n|           6.) Go to find the dragon sightings.                |";
    cout <<"\n|===============================================================|";
    cout <<"\n          Choice: ";
}
void wilderness()
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|                           Act II                              |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|       You leave right after learning of the sighting and      |";
    cout <<"\n|       head into the wild                                      |";
    cout <<"\n|===============================================================|\n";
}
void Armorsmith()
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|                     Act II - Armorsmith                       |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|       Welcome to the armorsmith. You enter the shop and       |";
    cout <<"\n|      find a small dwarf slamming his hammer against metal     |";
    cout <<"\n|===============================================================|";
    cout <<"\n|     The dwarf greets you with a gritty glance and stops       |";
    cout <<"\n|     He walks up to his counter and jumps onto a stool to see  |";
    cout <<"\n|     you and asks you what you want from his fine establishment|";
    cout <<"\n|===============================================================|\n";
    system("pause");
}
void DragonSightings()
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|                       Dragon Sighting                         |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|        You spend a few days going to the village where        |";
    cout <<"\n|      you had heard the dragon was living, you arrive at       |";
    cout <<"\n|     the village and you must decide what is your priority     |";
    cout <<"\n|===============================================================|\n";
    system("pause");
}
void Leaving()
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|                 You head to the village elder                 |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|        You head to the village elder to question her on       |";
    cout <<"\n|      where the dragon is hiding and she tells you that        |";
    cout <<"\n|     the dragon is living on the hillside of Mount Kringor     |";
    cout <<"\n|===============================================================|\n";
    system("pause");
}
void Dragon()
{

 cout << "               ,'\   |\   \n";
 cout << "              / /.:  ;;   \n";
 cout << "             / :'|| //    \n";
 cout << "             (| | ||;'    \n";
 cout << "            / ||,;'-.._   \n";
 cout << "            : ,;,`';:.--` \n";
 cout << "            |:|'`-(\\     \n";
 cout << "            ::: \-'\`'    \n";
 cout << "             \\\ \,-`.    \n";
 cout << "              `'\ `.,-`-._      ,-._        \n";
 cout << "       ,-.       \  `.,-' `-.  / ,..`.      \n";
 cout << "      / ,.`.      `.  \ _.-' \',: ``\ \     \n     / / :..`-'''``-)  `.   _.:''  ''\ \ \n    : :  '' `-..''`/    |-''  |''  '' \ \ \n    | |  ''   ''  :     |__..-;''  ''  : : \n    | |  ''   ''  |     ;    / ''  ''  | | \n    | |  ''   ''  ;    /--../_ ''_ '' _| | \n";
 cout << "    | |  ''  _;:_/    :._  /-.'',-.'',-. | \n    : :  '',;'`;/     |_ ,(   `'   `'   \| \n     \ \  \(   /\     :,'  \ \n      \ \.'/  : /    ,)    / \n       \ ':   ':    / \   : \n        `.\    :   :\  \  | \n                \  | `. \ |..-_ \n";
 cout << "             SSt ) |.  `/___-.-` \n               ,'  -.'.  `. `'        _,) \n               \'\(`.\ `._ `-..___..-',' \n                  `'      ``-..___..-'\n";
 system("pause");
}




#endif // MENUS_H_INCLUDED
