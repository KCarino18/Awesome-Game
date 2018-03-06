#ifndef HPBAR_H_INCLUDED
#define HPBAR_H_INCLUDED


void HpMpBar(STAT x)
{
    double hp, mp, mmp, mhp;
    hp = x.healthPoints;
    mhp = x.maxHealth;
    mp = x.manaPoints;
    mmp = x.maxMana;
    std::string hpb;
    std::string mpb;
    if (x.healthPoints == x.maxHealth)
    {
        hpb = "|=========================|";
    }
    else if ( (hp/mhp) >= .96)
    {
        hpb = "|======================== |";
    }
    else if ((hp/mhp) >= .92)
    {
        hpb = "|=======================  |";
    }
    else if ((hp/mhp) >= .88)
    {
        hpb = "|======================   |";
    }
    else if ((hp/mhp) >= .84)
    {
        hpb = "|=====================    |";
    }
    else if ((hp/mhp) >= .80)
    {
        hpb = "|====================     |";
    }
    else if ((hp/mhp) >= .76)
    {
        hpb = "|===================      |";
    }
    else if ((hp/mhp) >= .72)
    {
        hpb = "|==================       |";
    }
    else if ((hp/mhp) >= .68)
    {
        hpb = "|=================        |";
    }
    else if ((hp/mhp) >= .64)
    {
        hpb = "|================         |";
    }
    else if ((hp/mhp) >= .60)
    {
        hpb = "|===============          |";
    }
    else if ((hp/mhp) >= .56)
    {
        hpb = "|==============           |";
    }
    else if ((hp/mhp) >= .52)
    {
        hpb = "|=============            |";
    }
    else if ((hp/mhp) >= .48)
    {
        hpb = "|============             |";
    }
    else if ((hp/mhp) >= .44)
    {
        hpb = "|===========              |";
    }
    else if ((hp/mhp) >= .40)
    {
        hpb = "|==========               |";
    }
    else if ((hp/mhp) >= .36)
    {
        hpb = "|=========                |";
    }
    else if ((hp/mhp) >= .32)
    {
        hpb = "|========                 |";
    }
    else if ((hp/mhp) >= .28)
    {
        hpb = "|=======                  |";
    }
    else if ((hp/mhp) >= .24)
    {
        hpb = "|======                   |";
    }
    else if ((hp/mhp) >= .20)
    {
        hpb = "|=====                    |";
    }
    else if ((hp/mhp) >= .16)
    {
        hpb = "|====                     |";
    }
    else if ((hp/mhp) >= .12)
    {
        hpb = "|===                      |";
    }
    else if ((hp/mhp) >= .08)
    {
        hpb = "|==                       |";
    }
    else if ((hp/mhp) >= .04)
    {
        hpb = "|=                        |";
    }
    else if ((hp/mhp) >= 0)
    {
        hpb = "|                         |";
    }

    if (x.manaPoints == x.maxMana)
    {
        mpb = "|=========================|";
    }
    else if ( (mp/mmp) >= .96)
    {
        mpb = "|======================== |";
    }
    else if ((mp/mmp) >= .92)
    {
        mpb = "|=======================  |";
    }
    else if ((mp/mmp) >= .88)
    {
        mpb = "|======================   |";
    }
    else if ((mp/mmp) >= .84)
    {
        mpb = "|=====================    |";
    }
    else if ((mp/mmp) >= .80)
    {
        mpb = "|====================     |";
    }
    else if ((mp/mmp) >= .76)
    {
        mpb = "|===================      |";
    }
    else if ((mp/mmp) >= .72)
    {
        mpb = "|==================       |";
    }
    else if ((mp/mmp) >= .68)
    {
        mpb = "|=================        |";
    }
    else if ((mp/mmp) >= .64)
    {
        mpb = "|================         |";
    }
    else if ((mp/mmp) >= .60)
    {
        mpb = "|===============          |";
    }
    else if ((mp/mmp) >= .56)
    {
        mpb = "|==============           |";
    }
    else if ((mp/mmp) >= .52)
    {
        mpb = "|=============            |";
    }
    else if ((mp/mmp) >= .48)
    {
        mpb = "|============             |";
    }
    else if ((mp/mmp) >= .44)
    {
        mpb = "|===========              |";
    }
    else if ((mp/mmp) >= .40)
    {
        mpb = "|==========               |";
    }
    else if ((mp/mmp) >= .36)
    {
        mpb = "|=========                |";
    }
    else if ((mp/mmp) >= .32)
    {
        mpb = "|========                 |";
    }
    else if ((mp/mmp) >= .28)
    {
        mpb = "|=======                  |";
    }
    else if ((mp/mmp) >= .24)
    {
        mpb = "|======                   |";
    }
    else if ((mp/mmp) >= .20)
    {
        mpb = "|=====                    |";
    }
    else if ((mp/mmp) >= .16)
    {
        mpb = "|====                     |";
    }
    else if ((mp/mmp) >= .12)
    {
        mpb = "|===                      |";
    }
    else if ((mp/mmp) >= .08)
    {
        mpb = "|==                       |";
    }
    else if ((mp/mmp) >= .04)
    {
        mpb = "|=                        |";
    }
    else if ((mp/mmp) >= 0)
    {
        mpb = "|                         |";
    }
    cout <<"\n|       Current HP                           Current MP         |";
    cout <<"\n" << hpb << "           " << mpb;
    cout <<"\n        " << x.healthPoints << "/" << x.maxHealth << "                                " << x.manaPoints << "/" << x.maxMana;
}
void hpBar(STAT x)
{
        double hp, mhp;
    hp = x.healthPoints;
    mhp = x.maxHealth;
    std::string hpb;
    if (x.healthPoints == x.maxHealth)
    {
        hpb = "|=========================|";
    }
    else if ( (hp/mhp) >= .96)
    {
        hpb = "|======================== |";
    }
    else if ((hp/mhp) >= .92)
    {
        hpb = "|=======================  |";
    }
    else if ((hp/mhp) >= .88)
    {
        hpb = "|======================   |";
    }
    else if ((hp/mhp) >= .84)
    {
        hpb = "|=====================    |";
    }
    else if ((hp/mhp) >= .80)
    {
        hpb = "|====================     |";
    }
    else if ((hp/mhp) >= .76)
    {
        hpb = "|===================      |";
    }
    else if ((hp/mhp) >= .72)
    {
        hpb = "|==================       |";
    }
    else if ((hp/mhp) >= .68)
    {
        hpb = "|=================        |";
    }
    else if ((hp/mhp) >= .64)
    {
        hpb = "|================         |";
    }
    else if ((hp/mhp) >= .60)
    {
        hpb = "|===============          |";
    }
    else if ((hp/mhp) >= .56)
    {
        hpb = "|==============           |";
    }
    else if ((hp/mhp) >= .52)
    {
        hpb = "|=============            |";
    }
    else if ((hp/mhp) >= .48)
    {
        hpb = "|============             |";
    }
    else if ((hp/mhp) >= .44)
    {
        hpb = "|===========              |";
    }
    else if ((hp/mhp) >= .40)
    {
        hpb = "|==========               |";
    }
    else if ((hp/mhp) >= .36)
    {
        hpb = "|=========                |";
    }
    else if ((hp/mhp) >= .32)
    {
        hpb = "|========                 |";
    }
    else if ((hp/mhp) >= .28)
    {
        hpb = "|=======                  |";
    }
    else if ((hp/mhp) >= .24)
    {
        hpb = "|======                   |";
    }
    else if ((hp/mhp) >= .20)
    {
        hpb = "|=====                    |";
    }
    else if ((hp/mhp) >= .16)
    {
        hpb = "|====                     |";
    }
    else if ((hp/mhp) >= .12)
    {
        hpb = "|===                      |";
    }
    else if ((hp/mhp) >= .08)
    {
        hpb = "|==                       |";
    }
    else if ((hp/mhp) >= .04)
    {
        hpb = "|=                        |";
    }
    else if ((hp/mhp) >= 0)
    {
        hpb = "|                         |";
    }
    cout <<"\n|                       MONSTERS HP                             |";
    cout <<"\n|                 " << hpb << "                   |";
    cout <<"\n                   " << x.healthPoints << "/" << x.maxHealth;
}
#endif // HPBAR_H_INCLUDED
