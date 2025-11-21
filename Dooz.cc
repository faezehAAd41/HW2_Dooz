#include "Dooz.hpp"
#include "Player.hpp"

#include <iostream>

using namespace std;

Dooz :: Dooz() : p1 ("Player 1" , 'O') , p2("Player 2" , 'X')
{
    ActivePlayer = &p1 ;
}


void Dooz :: switchturns() 
{
    ActivePlayer = (ActivePlayer == &p1) ? &p2 : &p1 ;
}

void Dooz :: play()
{
    cout << "\t\t\t*** Welcome to Tic Tac Toe Game ***\n\n";
    board.drawBoard() ;
    
    while(true)
    {
        ActivePlayer -> makeMove(board) ;
        board.drawBoard() ;

        if (board.chekWin(ActivePlayer ->getSign()))
        {
            cout << "Congratulations " << ActivePlayer -> getName() << "Victory !!!" << endl ; 
            break;
        }

        if (board.isFull())
        {
            cout << "The game was Tied :(" << endl ;
            break;
        }
        switchturns() ;
    }

}
