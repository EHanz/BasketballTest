/// \file Main.cpp
/// \brief Main file for the Basketball program
/// \author Evan Hanzelman
/// \version 01

#include <iostream>
#include "Player.hpp"

Player* b_player;
//Runs the basketball stat tester
int main ()
{
    b_player = new Player ();
    float temp = 9.0;
    b_player->setPPG (temp);
    std :: cout << b_player->getPPG () << std :: endl;
}