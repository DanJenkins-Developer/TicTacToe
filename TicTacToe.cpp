//
// Daniel Jenkins 
//
// Tic Tac Toe Project
//
// 02/27/2020
//
#include <iostream>
#include <string>
#include "TicTacToe.h"
#include "Player.h"

using namespace std;

int main()
{
    
    TicTacToe game;
    Player playerOne("X");
    Player playerTwo("O");
    bool gameFlag = true;
    
    while (gameFlag)
    {
        game.printCurrentBoard();
        if(gameFlag)   ///   Checking if player one wins
        {
            playerOne.makeMove(game);
            if(playerOne.winStatus(game))
            {
                cout << "\n\tPlayer " << playerOne.getStringChoice() << " wins!!" << endl;
                gameFlag = false;
            }
            game.printCurrentBoard();
        }
        if(gameFlag)   ///   Checking if player two wins
        {
            playerTwo.makeMove(game);
            if(playerTwo.winStatus(game))
            {
                cout << "\n\tPlayer " << playerTwo.getStringChoice() << " wins!! " << endl;
                game.printCurrentBoard();
                gameFlag = false;
            }
        }
        if(game.boardFull())   /// If game is a tie
        {
            cout << "Game is a tie!!" << endl;
            gameFlag = false;
        }
        }

    return 0;
}
