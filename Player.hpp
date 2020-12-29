/// \file Player.hpp
/// \brief Player hpp file for the player class
/// \author Evan Hanzelman
/// \version 01

#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player 
{
    public :
        Player ();
        ~Player ();

        void setPPG (float ppg);
        float getPPG ();

        void setGames (int games);
        int getGames ();

        void setTRB (float trb);
        float getTRB ();

        void setAst (float ast);
        float getAst ();

        void setMPG (float mpg);
        float getMPG ();

        void setFGP (float fgp);
        float getFGP ();

        void setTFGP (float tfgp);
        float getTFGP ();

        void setFTP (float ftp);
        float getFTP ();

        void setEFGP (float efgp);
        float getEGFP ();

        void setBLK (float blk);
        float getBLK ();

        void setSTL (float stl);
        float getSTL ();

        void setPER (float per);
        float getPER ();

        void setWS (float ws);
        float getWS ();

    private : 
        float p_ppg;
        int p_games;
        int p_trb;
        float p_ast;
        float p_mpg;
        float p_fgp;
        float p_tfgp;
        float p_ftp;
        float p_efgp;
        float p_blk;
        float p_stl;
        float p_per;
        float p_ws;

        
};

#endif //PLAYER_HPP