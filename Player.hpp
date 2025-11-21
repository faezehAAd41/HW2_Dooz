#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include <string>

#include "Board.hpp"

class Player
{
    public:
        Player(std :: string name, char S) ;

        std :: string getName() const ;
        char getSign() const ;
        void makeMove( Board& board) ;

        bool checkWin(char s) const ;

    private:

        std :: string Name ;
        char Sign ;

};
#endif