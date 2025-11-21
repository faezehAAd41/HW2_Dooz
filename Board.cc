#include <iostream>
#include "Board.hpp"

using namespace std;
Board :: Board()

{
    for (int i = 0 ; i < 3 ; i++ )
    {
        for (int j = 0 ; j < 3 ; j++)
        {
            board[i][j] = ' ' ;
        }
    }

    count = 0;
}

void Board :: drawBoard() const
{
    cout << endl;

    for (int i = 0 ; i < 3 ;  i++)
    {
        cout << " " ;

        for (int j = 0 ;  j< 3 ; j++)
        {
            cout << board[i][j] ;
            if (j < 2)
            {
                cout << " | " ;
            }
        }
        cout << endl; 
        if (i < 2)
        {
            cout << "______________" << endl ;
        }
    }
    cout << endl; 
}

bool Board :: isValidMove(int row , int col) const 
{
    return (row >= 0 && row < 3 && col>= 0 && col < 3 && board[row][col] == ' ') ;
}

bool  Board :: MakeMove (int row ,  int col , char s)
{
    if (isValidMove(row , col))
    {
        board[row][col] = s ;
        count++ ;

        return true ;
    }
    return false ;    
}

bool Board :: chekWin(char s) const
{
    for (int i = 0 ;  i < 3  ;  i++)
    {
        if 
        (
            (board [i][0] == s && board[i][1] == s && board[i][2] == s) ||
            (board [0][i] == s && board[1][i] == s && board [2][i] == s)         
        )

        return true ;
    }

    if 
    (
        (board[0][0] == s && board[1][1] == s &&  board[2][2] == s) || 
        (board[0][2] == s && board[1][1] == s && board[2][0] == s)
    )
    {
        return true ;
    }
    return false ;
}

bool Board :: isFull() const 
{
    return count == 9 ;
}
