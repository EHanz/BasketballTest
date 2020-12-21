/// \file Player.hpp
/// \brief Player hpp file for the player class
/// \author Evan Hanzelman
/// \version 01

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <vector>

class Player 
{
    public :
        Player ();
        ~Player ();

        void setPPG (float val);
        float getPPG ();

    private : 
        std::vector <float> temp; 
        float p_ppg;
        float p_mpg;
        int p_reb;
        int p_steal;
        
};

#endif //PLAYER_HPP