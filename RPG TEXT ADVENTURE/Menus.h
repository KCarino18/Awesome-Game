#ifndef MENUS_H_INCLUDED
#define MENUS_H_INCLUDED

#include "BattleSystem.h"

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
    cout <<"                                                             �" << endl;
    cout <<"                                                            � � " << endl;
    cout <<"                                                            � � " << endl;
    cout <<"                                                           �  �� " << endl;
    cout <<"                                                           �  �� " << endl;
    cout <<"                                                          �    �� " << endl;
    cout <<"                                                         �     ��� " << endl;
    cout <<"                                                       ������������� " << endl;
    cout <<"                                                        �         � " << endl;
    cout <<"                                             �           ��������� " << endl;
    cout <<"                                             �            �     � " << endl;
    cout <<"                                            � �      �    �     � " << endl;
    cout <<"                                            � �      �    �     � " << endl;
    cout <<"                                           �  ��    � �   �     � " << endl;
    cout <<"                                           �  ��   �  ��  �     �        � " << endl;
    cout <<"                                          �    ��_�    �� �     �        � " << endl;
    cout <<"                                          �    ��_������� �     �       � � " << endl;
    cout <<"                                         �     �����   �  �     �       � � " << endl;
    cout <<"                                         �     ����� � �  �     �      �  �� " << endl;
    cout <<"                                        ������������ � �_���������     �  �� " << endl;
    cout <<"                                         �       � � � ��         �   �    �� " << endl;
    cout <<"                                          �������  �   ��         � ����������� " << endl;
    cout <<"                                           �   �   �����           � �       � " << endl;
    cout <<"                                           �   �   �   �            � �������� " << endl;
    cout <<"                                           � � �  �������������������  �  �  � " << endl;
    cout <<"                                           � � � �                   � � � � � � " << endl;
    cout <<"                                           � � �                  � � � ��   � " << endl;
    cout <<"                                           � � � �                   � �   � ��� " << endl;
    cout <<"                                           � � � ��������������������� � � � � � " << endl;
    cout <<"                                           �   �   �     �  � �  � �   � � � � � " << endl;
    cout <<"                                           �   �    �   �    �    �    �   � � � " << endl;
    cout <<"                                           �   �     �  �    �   �  ������������ " << endl;
    cout <<"                                           �   �������  �    �   ��������     � " << endl;
    cout <<"                                           �   �     �  �    �   �      �     � " << endl;
    cout <<"                                           �   �     �  �    �   � � � � �    � " << endl;
    cout <<"                                           �   �     �  �    �   �        ����� " << endl;
    cout <<"                                        ��������������  �    �   ����������  � " << endl;
    cout <<"                                        �            �  �    �   �       �   � " << endl;
    cout <<"                                        ��������������  �    �   ��������    � " << endl;
    cout <<"                                         �          ��  �    �   �     � � � � " << endl;
    cout <<"                                          ���������������������������� � � � � " << endl;
    cout <<"                                          �        �                 � �     � " << endl;
    cout <<"                                          �        �                 � �     � " << endl;
    cout <<"                                         ��� ��� ��� ���         ��� ��� ��� ��� " << endl;
    cout <<"                                         � ��� ��� ���_�����������_���_���_���_� " << endl;
    cout <<"                                         �             �����������             � " << endl;
    cout <<"                                         �             �         �             � " << endl;
    cout <<"                                         ���������������         ��������������� " << endl;
    cout <<"                                         �                                     � " << endl;
    cout <<"                                          �                                   � " << endl;
    cout <<"                                           �����������     ���     ����������� " << endl;
    cout <<"                                           �         �    �����    �         � " << endl;
    cout <<"                                           �         �   ��� ���   �         � " << endl;
    cout <<"                                           �    �    �   ��   ��   �    �    � " << endl;
    cout <<"                                           �   ���   �  ���   ���  �   ���   � " << endl;
    cout <<"                                           �   ���   �  ��     ��  �   ���   � " << endl;
    cout <<"                                           �   ���   �  ��     ��  �   ���   � " << endl;
    cout <<"                                           �   ���   �  ��     ��  �   ���   � " << endl;
    cout <<"________________________________________���������������������������������������________________________________________________________________________________________________________" << endl;
}


void TitleLogo()
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
    cout <<"                       ����" << endl;
    cout <<"               ��������������� " << endl;
    cout <<"           ����������������_��� " << endl;
    cout <<"         ���������������������� " << endl;
    cout <<"       ��������������������������� " << endl;
    cout <<"      ��������       ���������   ���� " << endl;
    cout <<"     �������                      �� " << endl;
    cout <<"     ������   �����                � " << endl;
    cout <<"    ������   ���1��� " << endl;
    cout <<"    ������   ��111�� " << endl;
    cout <<"    ������   ���1��� " << endl;
    cout <<"    ������    ��1�� " << endl;
    cout <<"     ������   ��1�� " << endl;
    cout <<"     �������� ����� " << endl;
    cout <<"      ������������� " << endl;
    cout <<"       ������������� " << endl;
    cout <<"         ������������ " << endl;
    cout <<"      ���������������������� " << endl;
    cout <<"  ������������������������������ " << endl;
    cout <<"    ����11111111111111111����� " << endl;
    cout <<"       �������������������� " << endl;
    cout <<"              �� 1 ��������� " << endl;
    cout <<"              �� 1 ���������� " << endl;
    cout <<"              �� 1 ��  ������ " << endl;
    cout <<"              �� 1 ��   ������ " << endl;
    cout <<"              �� 1 ��   ������ " << endl;
    cout <<"              �� 1 ��   ������ " << endl;
    cout <<"              �� 1 ��   ����� " << endl;
    cout <<"              �� 1 ��   ������ " << endl;
    cout <<"              �� 1 ��������� " << endl;
    cout <<"              ������������� " << endl;
    cout <<"              ����������� " << endl;
    cout <<"             ���������� " << endl;
    cout <<"            ��������� " << endl;
    cout <<"           ������� �� " << endl;
    cout <<"          ������ 1 �� " << endl;
    cout <<"          ������ 1 �� " << endl;
    cout <<"          ������ 1 �� " << endl;
    cout <<"          ������ 1 �� " << endl;
    cout <<"          ������ 1 �� " << endl;
    cout <<"           ����� 1 �� " << endl;
    cout <<"            ���� 1 �� " << endl;
    cout <<"              �� 1 ������ " << endl;
    cout <<"              �� 1 �������� " << endl;
    cout <<"              �� 1 ��������� " << endl;
    cout <<"              �� 1 ��� ����� " << endl;
    cout <<"              �� 1 ��  ����� " << endl;
    cout <<"              ��   ��������� " << endl;
    cout <<"              ��   �������� " << endl;
    cout <<"              ����������� " << endl;
    cout <<"              ��������� " << endl;
    cout <<"             ��������� " << endl;
    cout <<"            ��������� " << endl;
    cout <<"           �����   �� " << endl;
    cout <<"           �����   �� " << endl;
    cout <<"           �����   �� " << endl;
    cout <<"            ����   �� " << endl;
    cout <<"            ����   �� " << endl;
    cout <<"              ��   ������ " << endl;
    cout <<"              ��   ������� " << endl;
    cout <<"              ��   �� ����� " << endl;
    cout <<"              ��   ��   ���� " << endl;
    cout <<"               �� ��     ��� " << endl;
    cout <<"                ���      ��� " << endl;
    cout <<"                 �       ��" << endl;
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

void village()
{
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "     ~         ~~          __\n       _T      .,,.    ~--~ ^^\n ^^   // \                    ~\n      ][O]    ^^      ,-~ ~\n   /''-I_I         _II____\n__/_  /   \ ______/ ''   /'\_,__\n  | II--'''' \,--:--..,_/,.-{ },\n; '/__\,.--';|   |[] .-.| O{ _ }\n";
    cout << ":' |  | []  -|   ''--:.;[,.'\,/\n'  |[]|,.--'' '',   ''-,.    |\n  ..    ..-''    ;       ''. '\n";
    system("pause");

}
STAT DragonSightings( STAT x)
{
    bool succ = 0;
    int D20 = (rand() % 20) + 1;
    D20 = D20 + (x.dexterity/2);
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|                       Time to get moving                      |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|    After you rest in the village inn for the night, you       |";
    cout <<"\n|    ready yourself for the journey up the mountain to kill     |";
    cout <<"\n|    the dragon. Many of the villagers wish you off merrily.    |";
    cout <<"\n|    You can't help but feel something is weird about the day.  |";
    cout <<"\n|    Either way, you make your way up the mountain and into the |";
    cout <<"\n|    blackened cave which you were told the dragon lives.       |";
    cout <<"\n|    You light your torch and enter the cave. Just after a few  |";
    cout <<"\n|    steps you find yourself lost and your torch goes out.      |";
    cout <<"\n|    You take a few more steps and fall into a hole. A few      |";
    cout <<"\n|    hours go by and eventually you see a torch appear at the   |";
    cout <<"\n|    top of the hole which you fell into. As soon as she speaks |";
    cout <<"\n|    you know for sure it's the village elder. She says         |";
    cout <<"\n|    Now, you know why we can't let you kill this so called     |";
    cout <<"\n|    dragon do you. You ask what the hell is she talking about  |";
    cout <<"\n|    She states how she is the dragon and is only terrorizing   |";
    cout <<"\n|    the countryside because she is trying to cleanse the world |";
    cout <<"\n|    of evil and this is the only way. You tell her she is wrong|";
    cout <<"\n|    and she gets tired of listening to you. She tells you to   |";
    cout <<"\n|    pray that your soul is taken and throws the torch into the |";
    cout <<"\n|    pit and it turns out you were sitting on dried leaves.     |";
    cout <<"\n|    You must find a way to get out of the pit.                 |";
    cout <<"\n|===============================================================|\n";
    x.healthPoints = x.maxHealth;
    x.manaPoints = x.maxMana;
    system("pause");
    while (succ == 0)
    {
    D20 = ((rand() % 20) + 1) + (x.dexterity/2);
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|                           Time to climb                       |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|    You see the rock wall isn't all smooth and see a way       |";
    cout <<"\n|    to climb up the wall and out of the blazing fire.          |";
    cout <<"\n|===============================================================|";
    cout <<"\n|      1.) CLIMB (Dexterity Check)                              |";
    cout <<"\n|                                                               |";
    cout <<"\n|      2.) Drink a HP Pot                                       |";
    cout <<"\n|===============================================================|";
    cout <<"\n                  Choice: ";
    switch(verifyInput(0,2))
    {
    case 1://dex check
        if (D20 >= 15)
        {
            succ = 1;
            cout << "\nSUCCESS\n";
        }
        else
        {
            x.healthPoints = x.healthPoints - 5;
            cout << "\n\nYou try to climb but fall taking 5 damage\n Current Health: " << x.healthPoints << "/" << x.maxHealth;
            cout << "\n\n";
            system("pause");
        }
        if ( x.healthPoints <= 0)
        {
            cout << "\n============================YOU HAVE DIED============================\n";
            exit(EXIT_SUCCESS);
        }
        break;
    case 2:
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
            cout << "You drink one potion healing. \n";
        }
        else
        {
            cout << "\nYou do not have any healing potions.\n";
        }
        system("pause");
        break;

    }
    }
    return x;
}

STAT villageNearby(STAT x)
{
    bool cont = 0;
    STAT y = makemonsterMedium();
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|                          The Return                           |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|    After climbing up the wall, you decide to run to the       |";
    cout <<"\n|    nearby village that was not the original village to get    |";
    cout <<"\n|    some help with trying to figure out what the real story is |";
    cout <<"\n|    as well as getting ready for the future battles it may     |";
    cout <<"\n|    bring to the land.                                         |";
    cout <<"\n|===============================================================|\n";
    system("pause");
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    x.healthPoints = x.maxHealth;
    system("pause");

    while (cont == 0)
    {
        cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout <<"\n|===============================================================|";
        cout <<"\n|                        The 'Better' Village                   |";
        cout <<"\n|---------------------------------------------------------------|";
        cout <<"\n|    As you arrive into the new village, you see everyone       |";
        cout <<"\n|    come outside to watch you. They seem relieved and frightful|";
        cout <<"\n|    to see that you are alive. You go see the local cleric     |";
        cout <<"\n|    and the small halfling cleric heals you and bandages you.  |";
        cout <<"\n|    You must decide what to do next                            |";
        cout <<"\n|===============================================================|\n";
        cout <<"|           1.) Go train to get stronger.                       |";
        cout <<"\n|           2.) Go to armorsmith.                               |";
        cout <<"\n|           3.) Go to weaponsmith.                              |";
        cout <<"\n|           4.) Go to local Cleric.                             |";
        cout <<"\n|           5.) Go to local inn and rest.                       |";
        cout <<"\n|           6.) Time to fight the elder.                        |";
        cout <<"\n|===============================================================|";
        cout <<"\n                     Choice: ";
        switch ( verifyInput(0,7))
        {
        case 1:
            wilderness();
            system("pause");
            generateNameOfBeast();
            system("pause");
            x = Battle(x, y);
            x = levelCheck(x);
            break;
            break;

        case 2:
            x = randomItemMedium(x);
            break;
            break;

        case 3:
            x = randomWeaponMedium(x);
            break;
            break;

        case 4:
            x = INeedHealing(x);
            break;
            break;

        case 5:
            x = RoyalInn(x);
            break;
            break;

        case 6:
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nYou decide to hunt down the evil village elder.\n";
            cont = 1;
            system("pause");
            break;
            break;
        }
    }
    return x;
}

STAT Journey(STAT x )
{
    bool cont = 0;
    while (cont == 0)
    {
    STAT y = makemonsterHard();
    cout <<"\n|===============================================================|";
    cout <<"\n|                     Act III - Terrorization                   |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|    You head out the next morning and start your hike to kill  |";
    cout <<"\n|       the elder who turns out is the dragon that has been     |";
    cout <<"\n|                     terrorizing the town.                     |";
    cout <<"\n|===============================================================|";
    cout <<"\n|       After reaching the village nearby, you notice a         |";
    cout <<"\n|     calm and unsettling silence. As you enter the village,    |";
    cout <<"\n|    you start to realize that everyone is dead and the elder   |";
    cout <<"\n|   is no where to be seen. After seeing all of this, you hear  |";
    cout <<"\n|  a roar in the air and see the dragon fly overhead, and start |";
    cout <<"\n| flying in the direction of the city of Ethelroot, the capital |";
    cout <<"\n|of Ezrulie. You start to panic and realize that you must return|";
    cout <<"\n| to the city to help rid the world of this beast. You walk day |";
    cout <<"\n|and night to try to reach the city before it is crumbled to the|";
    cout <<"\n| ground. After 5 days of this, you reach the bordering town of |";
    cout <<"\n|   Crutov and enter it and prepare for the real final battle.  |";
    cout <<"\n|            (WARNING, FINAL BATTLE IS EXTREMELY HARD)          |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|           1.) Go fight in the wilderness.                     |";
    cout <<"\n|           2.) Go to armorsmith.                               |";
    cout <<"\n|           3.) Go to weaponsmith.                              |";
    cout <<"\n|           4.) Go to local Cleric.                             |";
    cout <<"\n|           5.) Go to local inn and rest.                       |";
    cout <<"\n|           6.) Go to find the dragon sightings.                |";
    cout <<"\n|===============================================================|";
    cout <<"\n          Choice: ";
        switch ( verifyInput(0,7))
        {
        case 1:
            wilderness();
            system("pause");
            generateNameOfBeast();
            system("pause");
            x = Battle(x, y);
            x = levelCheck(x);
            break;
            break;

        case 2:
            x = randomItemHard(x);
            break;
            break;

        case 3:
            x = randomWeaponHard(x);
            break;
            break;

        case 4:
            x = INeedHealing(x);
            break;
            break;

        case 5:
            x = RoyalInn(x);
            break;
            break;

        case 6:
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nYou decide that you are ready to face the dragon.\n";
            cont = 1;
            system("pause");
            break;
            break;
        }
    }
    return x;

}
STAT finalBattle(STAT x)
{
    STAT y = makemonsterExtreme();
    y.maxHealth= y.maxHealth + 1000;
    y.healthPoints = y.healthPoints + 1000;
    cout << " WELCOME TO MY WORLD......";
    system("pause");
    Battle(x, y);
    return x;


}
STAT TheGrandHall(STAT x)
{
    bool cont = 0;
    bool woot = 0;
    while (cont == 0)
    {
    STAT y = makemonsterHard();
    cout <<"\n|===============================================================|";
    cout <<"\n|                         The Great Hall                        |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|    Before heading out to the cave which the elder told you    |";
    cout <<"\n|    where the dragon lives, you are able to walk around and    |";
    cout <<"\n|    talk to the village royalty that is sitting and talking.   |";
    cout <<"\n|    You see a wealthy merchant, a beautiful princess, and a    |";
    cout <<"\n|    local royal guard.                                         |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|           1.) Go talk to Princess                             |";
    cout <<"\n|           2.) Go talk to Merchant                             |";
    cout <<"\n|           3.) Go talk to Royal Guard                          |";
    cout <<"\n|           4.) Go out and train a bit more                     |";
    cout <<"\n|           5.) Go to the cave                                  |";
    cout <<"\n|===============================================================|";
    cout <<"\n          Choice: ";
    switch ( verifyInput(0,6))
    {
    case 1:
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|                       Talk to Princess                        |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|    As you approach the princess, she turns to look and greet  |";
    cout <<"\n|    you on your approach.                                      |";
    cout <<"\n|    Princess: Hello there, you must be the knight sent here    |";
    cout <<"\n|              slay the dragon that has plagued our villages    |";
    cout <<"\n|              in Ezriel. Thank you for helping us              |";
    cout <<"\n|---------------------------------------------------------------|";
    system("pause");
    break;

    case 2:
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|                       Talk to Merchant                        |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|    The merchant looks at you like one of his lovely customers |";
    cout <<"\n|    that he usually deals with on a normal basis               |";
    cout <<"\n|    Merchant: Hello there little knight, do I have a deal for  |";
    cout <<"\n|              you. I will tell you what, you give me 200gp and |";
    cout <<"\n|              I will give you 3, count them, 3 HP potions.     |";
    cout <<"\n|              What do ya say?                                  |";
    cout <<"\n|===============================================================|";
    cout <<"\n|  1.) Sure ( -200gp)                                           |";
    cout <<"\n|  2.) Nah, I will pass                                         |";
    cout <<"\n|===============================================================|";
    cout <<"\n                          Choice:";
        while (woot == 0)
        {
        switch(verifyInput(0,3))
        {
        case 1:
            if( x.gold >=200)
            {
                x.gold = x.gold - 200;
                x.HPots= x.HPots + 3;
                woot = 1;
            }
            else
            {
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nYou can't afford it, sorry.";
            }
            break;
        case 2:
            cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nOk, I guess you are too good for my Potions....";
            woot = 1;
            break;
        }
        }
    break;

    case 3:
        cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\n|===============================================================|";
    cout <<"\n|                   Talk to The Royal Guard                     |";
    cout <<"\n|---------------------------------------------------------------|";
    cout <<"\n|    The Royal Guardsman just looks at you as you approach      |";
    cout <<"\n|    and doesn't even utter a word to you. You try to talk to   |";
    cout <<"\n|    him and he does not even look your way or anything         |";
    cout <<"\n|===============================================================|";
    system("pause");
    break;

    case 4:
        wilderness();
            system("pause");
            generateNameOfBeast();
            system("pause");
            x = Battle(x, y);
            x = levelCheck(x);
            break;

    case 5:
        cont = 1;
        break;
    }
}
return x;
}

#endif // MENUS_H_INCLUDED
