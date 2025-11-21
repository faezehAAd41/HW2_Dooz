#include "Board.hpp"
#include "Player.hpp"

#include <iostream>
#include <string>

using namespace std;

Player :: Player(string name , char S) : Sign(S) , Name(name){} 

string Player :: getName() const
{
    return Name ;
}
char Player :: getSign() const
{
    return Sign ;
}

void Player :: makeMove(Board& board)
{
    int row , col ;
    bool isValid = false ;

    while (!isValid)
    {
        cout << "Player" << Name << " please enter row (1-3) and column (1-3) 'with space': ";
        cin >> row >> col ;

        if (row >= 1 && row <= 3 && col >= 1 && col <= 3 && board.isValidMove(row - 1 , col -1) )
        {
            board.MakeMove(row - 1 , col -1 , Sign) ;
            isValid = true ;
        }

        else{
            cout << "Invalid input! Please enter numbers between 1 and 3 for empty cells." << endl;
        }
    }
}