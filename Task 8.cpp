#include <iostream>

using namespace std;

class Super_hero{
public:
    string sup_Name;
    int sup_Health;
    int sup_Energy;
    };
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Superhero_Weapons{
public:
    string weapon_Name;
    int consumed_Energy;
    int weapons_damage;
    int weapons_Use;

};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Superhero_Shield{
public:
    string Shield_Name;
    int Shield_Energy;
    float Shield_Save;
    int Shield_Use;

};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{

    Super_hero hero1;
    hero1.sup_Name = "Batman";
    hero1.sup_Health = 100;
    hero1.sup_Energy = 500;

    Super_hero hero2;
    hero2.sup_Name = "Joker";
    hero2.sup_Health = 100;
    hero2.sup_Energy = 500;

//////////////////////////////////////////////////////////////Batman weapons

    Superhero_Weapons Batman1;
    Batman1.weapon_Name = "Batarang";
    Batman1.consumed_Energy = 50;
    Batman1.weapons_damage = 11;
    Batman1.weapons_Use = 9999999; //I put the worse case if we use all the energy to attack with the batarang


    Superhero_Weapons Batman2;
    Batman2.weapon_Name = "GrappleGun";
    Batman2.consumed_Energy = 88;
    Batman2.weapons_damage = 18;
    Batman2.weapons_Use = 5;


    Superhero_Weapons Batman3;
    Batman3.weapon_Name = "ExplosiveGel";
    Batman3.consumed_Energy = 92;
    Batman3.weapons_damage = 10;  //(reduce 20% of next opponent attack)
    Batman3.weapons_Use = 3;

    Superhero_Weapons Batman4;
    Batman4.weapon_Name = "Batclaw";
    Batman4.consumed_Energy = 120;
    Batman4.weapons_damage = 20;
    Batman4.weapons_Use = 1;
//////////////////////////////////////////////////////////////Batman shields

    Superhero_Shield Bat_shield1;

    Bat_shield1.Shield_Name = "CapeGlide";
    Bat_shield1.Shield_Energy = 20;
    Bat_shield1.Shield_Save = 0.40;
    Bat_shield1.Shield_Use = 34;

    Superhero_Shield Bat_shield2;

    Bat_shield2.Shield_Name = "SmokePellet";
    Bat_shield2.Shield_Energy = 50;
    Bat_shield2.Shield_Save = 0.9;
    Bat_shield2.Shield_Use = 2;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    Superhero_Weapons Joker1;
    Joker1.weapon_Name = "JoyBuzzer";
    Joker1.consumed_Energy = 40;
    Joker1.weapons_damage = 8;
    Joker1.weapons_Use = 9999999;

    Superhero_Weapons Joker2;
    Joker2.weapon_Name = "LaughingGas";
    Joker2.consumed_Energy = 56;
    Joker2.weapons_damage = 13;
    Joker2.weapons_Use = 8;

    Superhero_Weapons Joker3;
    Joker3.weapon_Name = "AcidFlower";
    Joker3.consumed_Energy = 100;
    Joker3.weapons_damage = 22;
    Joker3.weapons_Use = 3;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    Superhero_Shield Joker_shield1;
    Joker_shield1.Shield_Name = "TrickShield";
    Joker_shield1.Shield_Energy = 15;
    Joker_shield1.Shield_Save = 0.32;
    Joker_shield1.Shield_Use = 9999999;

    Superhero_Shield Joker_shield2;
    Joker_shield2.Shield_Name = "RubberChicken";
    Joker_shield2.Shield_Energy = 40;
    Joker_shield2.Shield_Save = 0.80;
    Joker_shield2.Shield_Use = 3;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int choice = 0;
    int Bat_weapon = 0;
    cout << "choose the hero you want to start with"<<endl;
    cout <<"1- Batman"<<endl;
    cout <<"2- The Joker"<<endl;
    cout <<"Pick a number(1/2): ";
    cin >> choice;
    cout <<"////////////////////Fight Begin////////////////////"<<endl<<endl;
    while (!(hero1.sup_Health <= 0 || hero2.sup_Health <= 0 )){
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            if (choice == 1){//the batman will start the first round
                cout<<"*"<<endl;
                cout<<"* *"<<endl;
                cout<<"* * *"<<endl;
                cout<<"* * * * Batman Turn"<<endl;
                cout<<"* * *"<<endl;
                cout<<"* *"<<endl;
                cout<<"*"<<endl<<endl;
                cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;
                cout << "Current Batman Health: "<< hero1.sup_Health<<endl<<endl;
                cout << "Current Batman Energy: "<< hero1.sup_Energy<<endl<<endl;
                cout<< "////////////////////////////////////////////////////////////////////"<<endl;
                cout <<endl<< "1-Batarang (remaining use: Infinity)"<<endl<<endl;
                cout << "2-GrappleGun (remaining use: "<< Batman2.weapons_Use <<")"<<endl<<endl;
                cout << "3-ExplosiveGel (remaining use: "<< Batman3.weapons_Use <<")"<<endl<<endl;
                cout << "4-Batclaw (remaining use: "<< Batman4.weapons_Use <<")"<<endl<<endl;
                cout << "choose the weapon you will use to attack by choosing one of these Numbers (1,2,3,4): ";
                std::cin >> Bat_weapon;
                int flag = 0;
                if (Bat_weapon<5){
                    switch(Bat_weapon){
                    case 1:
                            if (Batman1.weapons_Use>0 && hero1.sup_Energy >0){
                                Batman1.weapons_Use= Batman1.weapons_Use -1;
                                hero1.sup_Energy -= Batman1.consumed_Energy;
                                cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;
                                cout <<"The remaining Batman Energy: "<<hero1.sup_Energy<<endl<<endl;
                                cout<< "//////////////////////Joker Turn to Defend//////////////////////////"<<endl<<endl;

                                }

                            else if (hero1.sup_Energy <= 0) {
                                    cout << "you out of energy"<<endl;
                                    }


                            else {

                                cout << "you out of use this weapon"<<endl;
                                cout<< "Try using deferent weapon"<<endl;
                                flag =1;
                            }

                            break;

                    case 2:
                            if (Batman2.weapons_Use>0 && hero1.sup_Energy >0){
                                Batman2.weapons_Use= Batman2.weapons_Use -1;
                                hero1.sup_Energy -= Batman2.consumed_Energy;
                                cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;
                                cout <<"The remaining Batman Energy: "<<hero1.sup_Energy<<endl<<endl;
                                cout<< "//////////////////////Joker Turn to Defend//////////////////////////"<<endl<<endl;
                                }

                            else if (hero1.sup_Energy <= 0) {
                                    cout << "you out of energy"<<endl;
                                    }


                            else {

                                cout << "you out of use this weapon"<<endl;
                                cout<< "Try using deferent weapon"<<endl;
                                flag =1;
                            }

                            break;

                    case 3:

                            if (Batman3.weapons_Use>0 && hero1.sup_Energy >0){
                            Batman3.weapons_Use= Batman3.weapons_Use -1;
                            hero1.sup_Energy -= Batman3.consumed_Energy;
                                cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;
                                cout <<"The remaining Batman Energy: "<<hero1.sup_Energy<<endl<<endl;
                                cout<< "//////////////////////Joker Turn to Defend//////////////////////////"<<endl<<endl;
                                }

                            else if (hero1.sup_Energy <= 0) {
                                    cout << "you out of energy"<<endl;
                                    }


                            else {

                               cout << "you out of use this weapon"<<endl;
                               cout<< "Try using deferent weapon"<<endl;
                               flag =1;}

                            break;


                    case 4:

                            if (Batman4.weapons_Use>0 && hero1.sup_Energy >0){
                                Batman4.weapons_Use= Batman4.weapons_Use -1;
                                hero1.sup_Energy -= Batman4.consumed_Energy;
                                cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;
                                cout <<"The remaining Batman Energy: "<<hero1.sup_Energy<<endl<<endl;
                                cout<< "//////////////////////Joker Turn to Defend//////////////////////////"<<endl<<endl;
                                }

                            else if (hero1.sup_Energy <= 0) {
                                    cout << "you out of energy"<<endl;
                                    }


                            else {

                               cout << "you out of use this weapon"<<endl;
                               cout<< "Try using deferent weapon"<<endl;
                               flag =1;
                            }

                            break;

                    }}
                if (!(flag == 1)){
                    int Jok_shield = 0;
                    cout << "1-TrickShield (remaining use: Infinity)"<<endl<<endl;
                    cout << "2-RubberChicken (remaining use: "<< Joker_shield2.Shield_Use <<")"<<endl<<endl;
                    cout<<"enter the shield The Joker will defend with: ";
                    cin>>Jok_shield;
                    if (Jok_shield < 3){
                        switch(Jok_shield){
                        case 1:

                            if (Joker_shield1.Shield_Use>0 && hero2.sup_Energy>0){
                                Joker_shield1.Shield_Use= Joker_shield1.Shield_Use -1;
                                hero2.sup_Energy -= Joker_shield1.Shield_Energy;
                                cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;
                                cout <<"The remaining Joker Energy: "<<hero2.sup_Energy<<endl<<endl;
                                if (Bat_weapon == 1){
                                    hero2.sup_Health =hero2.sup_Health - (Batman1.weapons_damage*(1-Joker_shield1.Shield_Save));
                                    cout<<"Joker remaining Health: "<<hero2.sup_Health<<endl<<endl;
                                    cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;}
                                else if (Bat_weapon == 2){
                                    hero2.sup_Health =hero2.sup_Health - (Batman2.weapons_damage*(1-Joker_shield1.Shield_Save));
                                    cout<<"Joker remaining Health: "<<hero2.sup_Health<<endl<<endl;
                                    cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;}

                                else if (Bat_weapon == 3){
                                    hero2.sup_Health =hero2.sup_Health - (Batman3.weapons_damage*(1-Joker_shield1.Shield_Save));
                                    cout<<"Joker remaining Health: "<<hero2.sup_Health<<endl<<endl;
                                    cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;}
                                else if (Bat_weapon == 4){
                                    hero2.sup_Health =hero2.sup_Health - (Batman4.weapons_damage);
                                    cout<<"Joker remaining Health: "<<hero2.sup_Health<<endl<<endl;
                                    cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;}
                            }


                            else if (hero2.sup_Energy <= 0){
                                    cout << "you out of energy"<<endl<<endl;
                                    }
                            else {
                               cout << "you out of use this Shield"<<endl<<endl;
                                    }
                                    break;

                        case 2:

                           if (Joker_shield2.Shield_Use>0 && hero2.sup_Energy>0){
                                Joker_shield2.Shield_Use= Joker_shield2.Shield_Use -1;
                                hero2.sup_Energy -= Joker_shield2.Shield_Energy;
                                cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;
                                cout <<"The remaining Joker Energy: "<<hero2.sup_Energy<<endl<<endl;
                                if (Bat_weapon == 1){
                                    hero2.sup_Health =hero2.sup_Health - (Batman1.weapons_damage*(1-Joker_shield2.Shield_Save));
                                    cout<<"Joker remaining Health: "<<hero2.sup_Health<<endl<<endl;
                                    cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;}
                                else if (Bat_weapon == 2){
                                    hero2.sup_Health =hero2.sup_Health - (Batman2.weapons_damage*(1-Joker_shield2.Shield_Save));
                                    cout<<"Joker remaining Health: "<<hero2.sup_Health<<endl<<endl;
                                    cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;}

                                else if (Bat_weapon == 3){
                                    hero2.sup_Health =hero2.sup_Health - (Batman3.weapons_damage*(1-Joker_shield2.Shield_Save));
                                    cout<<"Joker remaining Health: "<<hero2.sup_Health<<endl<<endl;
                                    cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;}
                                else if (Bat_weapon == 4){
                                    hero2.sup_Health =hero2.sup_Health - (Batman4.weapons_damage);
                                    cout<<"Joker remaining Health: "<<hero2.sup_Health<<endl<<endl;
                                    cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;}
                                    }


                            else if (hero2.sup_Energy <= 0){
                                    cout << "you out of energy"<<endl<<endl;
                                    }
                            else {
                               cout << "you out of use this Shield"<<endl;
                               cout<< "Try using deferent Shield"<<endl;
                                    }

                            break;}}
                    choice=choice + 1;

            }

                else{
                    cout << "invalid input...Try Again"<<endl;
                    Bat_weapon = 0;
                    choice = 1;}





            }

////////////////////////////////////////////////////////////////// Joker Turn
            else if (choice == 2){   //the joker will start the second round and so on
                    cout<<"*"<<endl;
                    cout<<"* *"<<endl;
                    cout<<"* * *"<<endl;
                    cout<<"* * * * Joker Turn"<<endl;
                    cout<<"* * *"<<endl;
                    cout<<"* *"<<endl;
                    cout<<"*"<<endl;
                    cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;
                    cout << "Current Joker Health: "<< hero2.sup_Health<<endl<<endl;
                    cout << "Current Joker Energy: "<< hero2.sup_Energy<<endl<<endl;
                    cout<< "////////////////////////////////////////////////////////////////////"<<endl;
                    int Jok_weapon = 0;
                    int flag = 0;
                    cout <<endl<< "1-JoyBuzzer (remaining use: Infinity)"<<endl<<endl;
                    cout << "2-LaughingGas (remaining use: "<< Joker2.weapons_Use <<")"<<endl<<endl;
                    cout << "3-AcidFlower (remaining use: "<< Joker3.weapons_Use <<")"<<endl<<endl;
                    cout << "choose the weapon you will use to attack by choosing one of these Numbers (1,2,3): ";
                    std::cin >> Jok_weapon;
                    if (Jok_weapon<4){
                        switch(Jok_weapon){
                        case 1:

                            if (Joker1.weapons_Use>0 && hero2.sup_Energy>0){
                                Joker1.weapons_Use= Joker1.weapons_Use -1;
                                hero2.sup_Energy -= Joker1.consumed_Energy;
                                cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;
                                cout <<"The remaining Joker Energy: "<<hero2.sup_Energy<<endl<<endl;
                                cout<< "//////////////////////Batman Turn to Defend//////////////////////////"<<endl<<endl;}
                            else if (hero2.sup_Energy <= 0){
                                    cout << "you out of energy"<<endl;
                                    }

                            else {

                               cout << "you out of use this weapon"<<endl;
                                cout<< "Try using deferent weapon"<<endl;
                                flag =1;
                            }

                            break;

                        case 2:

                            if (Joker2.weapons_Use>0 && hero2.sup_Energy>0){
                                Joker2.weapons_Use= Joker2.weapons_Use -1;
                                hero2.sup_Energy -= Joker2.consumed_Energy;
                                cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;
                                cout <<"The remaining Joker Energy: "<<hero2.sup_Energy<<endl<<endl;
                                cout<< "//////////////////////Batman Turn to Defend//////////////////////////"<<endl<<endl;}
                            else if (hero2.sup_Energy <= 0){
                                    cout << "you out of energy"<<endl;
                                    }

                            else {

                               cout << "you out of use this weapon"<<endl;
                                cout<< "Try using deferent weapon"<<endl;
                                flag =1;
                            }

                            break;

                        case 3:

                            if (Joker3.weapons_Use>0 && hero2.sup_Energy>0){
                                Joker3.weapons_Use= Joker3.weapons_Use -1;
                                hero2.sup_Energy -= Joker3.consumed_Energy;
                                cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;
                                cout <<"The remaining Joker Energy: "<<hero2.sup_Energy<<endl<<endl;
                                cout<< "//////////////////////Batman Turn to Defend//////////////////////////"<<endl<<endl;}
                            else if (hero2.sup_Energy <= 0){
                                    cout << "you out of energy"<<endl;
                                    }

                            else {

                               cout << "you out of use this weapon"<<endl;
                                cout<< "Try using deferent weapon"<<endl;
                                flag =1;
                            }

                            break;}}
                if (!(flag == 1)){
                        int bat_shield = 0;
                        cout << "1-CapeGlide (remaining use: Infinity)"<<endl<<endl;
                        cout << "2-SmokePellet (remaining use: "<< Bat_shield2.Shield_Use <<")"<<endl<<endl;
                        cout<<"enter the shield The Batman will defend with: ";
                        cin>>bat_shield;
                        if (bat_shield < 3){
                            switch(bat_shield){
                            case 1:
                            if (Bat_shield1.Shield_Use>0 && hero1.sup_Energy>0){
                                Bat_shield1.Shield_Use= Bat_shield1.Shield_Use -1;
                                hero1.sup_Energy -= Bat_shield1.Shield_Energy;
                                cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;
                                cout <<"The remaining Batman Energy: "<<hero1.sup_Energy<<endl<<endl;
                                if (Bat_weapon == 3){
                                     if (Jok_weapon == 1){
                                        hero1.sup_Health =hero1.sup_Health - ((Joker1.weapons_damage*0.8)*(1-Bat_shield1.Shield_Save));
                                        cout<<"Batman remaining Health: "<<hero1.sup_Health<<endl<<endl;
                                        cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;}
                                    else if (Jok_weapon == 2){
                                        hero1.sup_Health =hero1.sup_Health - ((Joker2.weapons_damage*0.8)*(1-Bat_shield1.Shield_Save));
                                        cout<<"Batman remaining Health: "<<hero1.sup_Health<<endl<<endl;
                                        cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;}

                                    else if (Jok_weapon == 3){
                                        hero1.sup_Health =hero1.sup_Health - ((Joker3.weapons_damage*0.8)*(1-Bat_shield1.Shield_Save));
                                        cout<<"Batman remaining Health: "<<hero1.sup_Health<<endl<<endl;
                                        cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;}}



                                else if (Jok_weapon == 1){
                                    hero1.sup_Health =hero1.sup_Health - (Joker1.weapons_damage*(1-Bat_shield1.Shield_Save));
                                    cout<<"Batman remaining Health: "<<hero1.sup_Health<<endl<<endl;
                                    cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;}
                                else if (Jok_weapon == 2){
                                    hero1.sup_Health =hero1.sup_Health - (Joker2.weapons_damage*(1-Bat_shield1.Shield_Save));
                                    cout<<"Batman remaining Health: "<<hero1.sup_Health<<endl<<endl;
                                    cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;}

                                else if (Jok_weapon == 3){
                                    hero1.sup_Health =hero1.sup_Health - (Joker3.weapons_damage*(1-Bat_shield1.Shield_Save));
                                    cout<<"Batman remaining Health: "<<hero1.sup_Health<<endl<<endl;
                                    cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;}}


                            else if (hero1.sup_Energy <= 0){
                                    cout << "you out of energy"<<endl<<endl;
                                    }
                            else {
                               cout << "you out of use this Shield"<<endl<<endl;
                                    }


                            break;

                        case 2:
                           if (Bat_shield2.Shield_Use>0 && hero1.sup_Energy>0){
                                Bat_shield2.Shield_Use= Bat_shield2.Shield_Use -1;
                                hero1.sup_Energy -= Bat_shield2.Shield_Energy;
                                cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;
                                cout <<"The remaining Batman Energy: "<<hero1.sup_Energy<<endl<<endl;
                                if (Bat_weapon == 3){
                                    if (Jok_weapon == 1){
                                        hero1.sup_Health =hero1.sup_Health - ((Joker1.weapons_damage*0.8)*(1-Bat_shield2.Shield_Save));
                                        cout<<"Batman remaining Health: "<<hero1.sup_Health<<endl<<endl;
                                        cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;}
                                    else if (Jok_weapon == 2){
                                        hero1.sup_Health =hero1.sup_Health - ((Joker2.weapons_damage*0.8)*(1-Bat_shield2.Shield_Save));
                                        cout<<"Batman remaining Health: "<<hero1.sup_Health<<endl<<endl;
                                        cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;}

                                    else if (Jok_weapon == 3){
                                        hero1.sup_Health =hero1.sup_Health - ((Joker3.weapons_damage*0.8)*(1-Bat_shield2.Shield_Save));
                                        cout<<"Batman remaining Health: "<<hero1.sup_Health<<endl<<endl;
                                        cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;}}



                                else if (Jok_weapon == 1){
                                    hero1.sup_Health =hero1.sup_Health - (Joker1.weapons_damage*(1-Bat_shield2.Shield_Save));
                                    cout<<"Batman remaining Health: "<<hero1.sup_Health<<endl<<endl;
                                    cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;}
                                else if (Jok_weapon == 2){
                                    hero1.sup_Health =hero1.sup_Health - (Joker2.weapons_damage*(1-Bat_shield2.Shield_Save));
                                    cout<<"Batman remaining Health: "<<hero1.sup_Health<<endl<<endl;
                                    cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;}

                                else if (Jok_weapon == 3){
                                    hero1.sup_Health =hero1.sup_Health - (Joker3.weapons_damage*(1-Bat_shield2.Shield_Save));
                                    cout<<"Batman remaining Health: "<<hero1.sup_Health<<endl<<endl;
                                    cout<< "////////////////////////////////////////////////////////////////////"<<endl<<endl;}}


                            else if (hero1.sup_Energy <= 0){
                                    cout << "you out of energy"<<endl<<endl;
                                    }
                            else {
                               cout << "you out of use this Shield"<<endl<<endl;
                                    }

                            break;}}



            choice=choice - 1;}

                    else{
                        cout << "invalid input...Try Again"<<endl;
                        Jok_weapon = 0;
                        choice = 2;}
                        }


}

    if (hero1.sup_Health <= 0){
            cout<<"Batman Died.....Joker Wins";
            cout<<"GAME OVER!"<<endl;}

    else if(hero2.sup_Health <= 0){
            cout<<"Joker Died.....Batman Wins";
            cout<<"GAME OVER!"<<endl;}


    return 0;
}
