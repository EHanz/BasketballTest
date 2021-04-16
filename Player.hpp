/// \file Player.hpp
/// \brief Player hpp file for the player class
/// \author Evan Hanzelman
/// \version 01

#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player 
{
    public :
        //Default Constructor and Constructor of Necessary Player Values
        Player ();

        Player (float ppg, int games, float trbpg, float astpg,
                float mpg, float fgp, float tfgp,
                float ftp, float efgp, float blkpg, float stlpg,
                float per, float ws);
        ~Player ();

        //Points Per Game
        void setPPG (float ppg);
        float getPPG ();

        //Games Played
        void setGames (int games);
        int getGames ();

        //Total Rebounds a Game
        void setTRBPG (float trbpg);
        float getTRBPG ();

        //Assists Per Game
        void setAstPG (float astpg);
        float getAstPG ();

        //Minutes Per Game
        void setMPG (float mpg);
        float getMPG ();

        //Field Goal Percentage
        void setFGP (float fgp);
        float getFGP ();

        //3 Point Field Goal Percentage
        void setTFGP (float tfgp);
        float getTFGP ();

        //Free Throw Percentage
        void setFTP (float ftp);
        float getFTP ();

        //Estimated/True Field Goal Percentage
        void setEFGP (float efgp);
        float getEFGP ();

        //Blocks Per Game
        void setBLKPG (float blkpg);
        float getBLKPG ();

        //Steals Per Game
        void setSTLPG (float stlpg);
        float getSTLPG ();

        //Player Efficiency Rating
        void setPER (float per);
        float getPER ();

        //Win Shares
        void setWS (float ws);
        float getWS ();

    private : 
        float p_ppg;
        int p_games;
        int p_trbpg;
        float p_astpg;
        float p_mpg;
        float p_fgp;
        float p_tfgp;
        float p_ftp;
        float p_efgp;
        float p_blkpg;
        float p_stlpg;
        float p_per;
        float p_ws;
        
};

#endif //PLAYER_HPP