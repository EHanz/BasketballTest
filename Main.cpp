/// \file Main.cpp
/// \brief Main file for the Basketball program
/// \author Evan Hanzelman
/// \version 01

#include "Player.hpp"

#include <iostream>

//Runs the basketball stat tester
int main ()
{
    Player b_player;
    float temp = 9.0;
    b_player.setPPG (temp);
    std :: cout << b_player.getPPG () << std :: endl;
}

/*
* Add Functions for various simulations
* Start with PER stats and random calculations
*/