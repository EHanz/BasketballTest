/// \file Player.cpp
/// \brief Class file for the basketball player class
/// \author Evan Hanzelman
/// \version 01

#include "Player.hpp"

//Player Constructor
Player :: Player ()
{

}

Player :: Player (float ppg, int games, float trbpg, float astpg,
                  float mpg, float fgp, float tfgp,
                  float ftp, float efgp, float blkpg, float stlpg,
                  float per, float ws)
{
    setPPG (ppg);
    setGames (games);
    setTRBPG (trbpg);
    setAstPG (astpg);
    setMPG (mpg);
    setFGP(fgp);
    setTFGP (tfgp);
    setFTP (ftp);
    setEFGP (efgp);
    setBLKPG (blkpg);
    setSTLPG (stlpg);
    setPER (per);
    setWS (ws);
}

//Player Deconstructor
Player :: ~Player ()
{

}

//Sets Player PPG based on the given value
void
Player :: setPPG (float ppg)
{
    p_ppg = ppg;
}

//Returns the Player PPG
float
Player :: getPPG ()
{
    return p_ppg;
}

void 
Player :: setGames (int games)
{
    p_games = games;
}

int
Player :: getGames ()
{
    return p_games;
}

void
Player :: setTRBPG (float trbpg)
{
    p_trbpg = trbpg;
}

float
Player :: getTRBPG ()
{
    return p_trbpg;
}

void
Player :: setAstPG (float astpg)
{
    p_astpg = astpg;
}

float
Player :: getAstPG ()
{
    return p_astpg;
}

void
Player :: setMPG (float mpg)
{
    p_mpg = mpg;
}

float
Player :: getMPG ()
{
    return p_mpg;
}

void
Player :: setFGP (float fgp)
{
    p_fgp = fgp;
}

float
Player :: getFGP ()
{
    return p_fgp;
}

void
Player :: setTFGP (float tfgp)
{
    p_tfgp = tfgp;
}

float
Player :: getTFGP ()
{
    return p_tfgp;
}

void
Player :: setFTP (float ftp)
{
    p_ftp = ftp;
}

float
Player :: getFTP ()
{
    return p_ftp;
}

void
Player :: setEFGP (float efgp)
{
    p_efgp = efgp;
}

float
Player :: getEFGP ()
{
    return p_efgp;
}

void
Player :: setBLKPG (float blkpg)
{
    p_blkpg = blkpg;
}

float
Player :: getBLKPG ()
{
    return p_blkpg;
}

void
Player :: setSTLPG (float stlpg)
{
    p_stlpg = stlpg;
}

float
Player :: getSTLPG ()
{
    return p_stlpg;
}

void
Player :: setPER (float per)
{
    p_per = per;
}

float
Player :: getPER ()
{
    return p_per;
}

void
Player :: setWS (float ws)
{
    p_ws = ws;
}

float
Player :: getWS ()
{
    return p_ws;
}