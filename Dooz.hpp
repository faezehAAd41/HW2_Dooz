#ifndef DOOZ_HPP
#define DOOZ_HPP

#include <iostream>
#include "Board.hpp"
#include "Player.hpp"

class Dooz
{
    public :
        Dooz() ;

        void play() ;
        
    private :
        Board board ;
        
        Player p1 ;
        Player p2 ;
        Player* ActivePlayer ;
        
        void switchturns() ;
    };

#endif