//
// Daniel Jenkins
//
// TicTacToe.h
//
// 02/27/2020
//
#ifndef TicTacToe_H
#define TicTacToe_H

#include <string>
#include <limits>

using namespace std;

class TicTacToe
{
    public :
        void printCurrentBoard();
        void setArray(string, int, int);
        void setBoard(string, int , int);
        bool boardFull();
        bool hasWon(string);
        bool validMove(int, int);
        TicTacToe();

    private:
       string boardArray[3][3];
   
};
TicTacToe::TicTacToe()
{
    for(int r = 0; r < 3; r++)
    {
        for(int c = 0; c < 3; c++)
        {
           boardArray[r][c] = "-";
        }
    }
}
bool TicTacToe :: hasWon(string playerChoice)
{
    if(boardArray[0][0] == playerChoice)
    {
        if(boardArray[0][1] == playerChoice && boardArray[0][2] == playerChoice)
        {
            return true;
        }
        else if(boardArray[1][0] == playerChoice && boardArray [2][0] == playerChoice)
        {
            return true;
        }
        else if(boardArray[1][1] == playerChoice && boardArray[2][2] == playerChoice)
        {
            return true;
        }
    }
    if(boardArray[2][2] == playerChoice)
    {
        if(boardArray[1][2] == playerChoice && boardArray[0][2] == playerChoice)
        {
            return true;
        }
        else if(boardArray[2][1] == playerChoice && boardArray[2][0] == playerChoice)
        {
            return true;
        }
    }
    if(boardArray[1][1] == playerChoice)
    {
        if(boardArray[0][1] == playerChoice && boardArray[2][1] == playerChoice)
        {
            return true;
        }
        else if(boardArray[1][0] == playerChoice && boardArray[1][2] == playerChoice)
        {
            return true;
        }
        else if(boardArray[2][0] == playerChoice && boardArray[0][2] == playerChoice)
        {
            return true;
        }
    }
}
void TicTacToe :: setBoard(string playerChoice, int r, int c)
{
    boardArray[r][c] = playerChoice;
}
void TicTacToe :: printCurrentBoard()
{
    cout << "  \tC0\tC1\tC2" << endl;
    cout << "R0\t" << boardArray[0][0] << " \t" << boardArray[0][1] << " \t" << boardArray[0][2] << endl;
    cout << "R1\t" << boardArray[1][0] << " \t" << boardArray[1][1] << " \t" << boardArray[1][2] << endl;
    cout << "R2\t" << boardArray[2][0] << " \t" << boardArray[2][1] << " \t" << boardArray[2][2] << endl;
}
bool TicTacToe :: validMove(int r, int c)
{
    if((r> -1 && r<3) && (c > -1 && c < 3))
    {
        if(boardArray[r][c] == "-"){
            return true;}
    }
    else{
        return false;}
}
bool TicTacToe :: boardFull()
{
    for(int r = 0; r < 3; r++)
    {
        for(int c = 0; c < 3; c++)
        {
            if(boardArray[r][c] == "-")
            {
                return false;
            }
        }
    }
    return true;
}
#endif