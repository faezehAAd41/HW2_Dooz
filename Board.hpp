#ifndef BOARD_HPP
#define BOARD_HPP

#include <iostream>

class Board
{
    public:
        Board() ;

        void drawBoard() const ;
        bool isValidMove (int row , int col) const ;
        bool MakeMove (int row , int col , char sign) ; 
        bool chekWin(char sign) const ;
        bool isFull() const ;
        



         


    private:
        char board[3][3] ;
        int count ;



};

#endif